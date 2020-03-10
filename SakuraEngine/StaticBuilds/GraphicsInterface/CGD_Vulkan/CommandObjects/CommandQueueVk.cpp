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
 * @Description: 
 * @Version: 0.1.0
 * @Autor: SaeruHikari
 * @Date: 2020-03-03 10:41:13
 * @LastEditTime: 2020-03-10 12:18:41
 */
#include "CommandQueueVk.h"
#include "CommandContextVk.h"
#include "../CGD_Vulkan.h"

using namespace Sakura::Graphics;
using namespace Sakura::Graphics::Vk;

CommandQueue_Vk::CommandQueue_Vk(const CGD_Vk& _cgd)
    :cgd(_cgd)
{
    VkSemaphoreCreateInfo semaphoreInfo = {};
    semaphoreInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
    if (vkCreateSemaphore(_cgd.GetCGDEntity().device, &semaphoreInfo,
        nullptr, &semaphore) != VK_SUCCESS)
    {
        CGD_Vk::error("Vulkan: failed to create semaphore for queue!");
        throw std::runtime_error("Vulkan: failed to create semaphore for queue!");
    } 
}

void CommandQueue_Vk::Submit(CommandContext* commandContext,
    Fence* fence, Fence* fenceToWait)
{
    
}

bool CommandQueue_Vk::WaitFence(Fence* fence, std::uint64_t timeout)
{
    return true;
}

void CommandQueue_Vk::WaitIdle()
{
    
}