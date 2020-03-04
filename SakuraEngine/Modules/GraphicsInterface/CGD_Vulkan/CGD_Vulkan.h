/*
 * @CopyRight: MIT License
 * Copyright (c) 2020 SaeruHikari
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *  IN THESOFTWARE.
 * 
 * 
 * @Description: Vulkan implementation of CGD
 * @Version: 0.1.0
 * @Autor: SaeruHikari
 * @Date: 2020-02-25 22:25:59
 * @LastEditTime: 2020-03-05 01:33:21
 */
#pragma once
#include "../GraphicsCommon/CGD.h"
#include "CommandObjects/CommandQueue_Vk.h"
#include "GraphicsObjects/SwapChain_Vk.h"
#include <iostream>


using namespace Sakura::flags;

namespace Sakura::Graphics::Vk
{
    struct CGDEntityVk : public CGDEntity
    {
        friend class CGD_Vk;
        auto GetVkInstance(){return instance;}
    private:
        Sakura::Graphics::PhysicalDeviceFeatures physicalDeviceFeatures;
        VkInstance instance;
        VkDevice device;
        std::unique_ptr<CommandQueue_Vk> graphicsQueue;
        VkPhysicalDevice physicalDevice = VK_NULL_HANDLE;
        VkDebugUtilsMessengerEXT debugMessenger;
    public:
        const std::vector<const char*> deviceExtensions = 
        {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME
        };
    };

    class CGD_Vk 
    {
        DECLARE_LOGGER("CGD_Vk")
    public:
        CGD_Vk() = default;
        static void Render(CGDEntity& device);   
        static void Destroy(CGDEntity& device); 
        static std::unique_ptr<Sakura::Graphics::CommandQueue>
            InitQueueSet(void* mainSurface, CGDEntity& device);
        // Vulkan functions
        static void Initialize(CGDInfo info, CGDEntity& device);
        static std::unique_ptr<Sakura::Graphics::SwapChain>
            CreateSwapChain(const int width, const int height, 
                CGDEntity& device, void* mainSurface);
    private:
         /**
         * @description: Initial Vulkan Device
         * @author: SaeruHikari
         */
        static void VkInit(CGDInfo info, CGDEntity& device);
        static void setupDebugMessenger(CGDEntity& device);
        static void createVkInstance(uint pCount, const char** pName, CGDEntity& device);
        static void pickPhysicalDevice(VkSurfaceKHR surface, CGDEntity& device);
    };
    
    /**
    * @description: Enumerate Instance Extension Properties
    * @return: Num of Vulkan extensions supported  
    * @author: SaeruHikari
    */
    static std::vector<VkExtensionProperties> VkEnumInstanceExtensions()
    {
        uint32 extensionCount;
        vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
        std::vector<VkExtensionProperties> extensions(extensionCount);
        vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, extensions.data());
        return extensions;
    }
    
    inline static const std::vector<const char*> validationLayers =
    {
        "VK_LAYER_KHRONOS_validation"
    };

    static bool VkCheckValidationLayerSupport()
    {
        uint32_t layerCount;
        vkEnumerateInstanceLayerProperties(&layerCount, nullptr);

        std::vector<VkLayerProperties> availableLayers(layerCount);
        vkEnumerateInstanceLayerProperties(&layerCount, availableLayers.data());

        for (const char* layerName : validationLayers) 
        {
            bool layerFound = false;
            for (const auto& layerProperties : availableLayers) 
            {
                if (strcmp(layerName, layerProperties.layerName) == 0)
                {
                    layerFound = true;break;
                }
            }
            if (!layerFound) 
                return false;
        }
        return true;
    } 
}

static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(
    VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT messageType, 
    const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData, 
    void* pUserData) 
{
    Sakura::Graphics::Vk::CGD_Vk::debug_error("validation layer: " + 
        std::string(pCallbackData->pMessage));
    return VK_FALSE;
}
