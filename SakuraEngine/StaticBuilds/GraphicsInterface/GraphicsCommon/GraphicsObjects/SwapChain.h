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
 * @Date: 2020-03-04 21:41:05
 * @LastEditTime: 2020-05-02 23:14:32
 */
#pragma once
#include "SakuraEngine/Core/CoreMinimal/sinterface.h"
#include "SakuraEngine/Core/CoreMinimal/SDefination.h"
#include "../Flags/Format.h"
#include "../Flags/CommonFeatures.h"
#include <memory>
#include <vector>
#include "../ResourceObjects/Resource.h"
#include "../ResourceObjects/ResourceViews.h"

namespace Sakura::Graphics
{
    sinterface CGD;
    struct Extent2D;
}

namespace Sakura::Graphics
{
    sinterface SwapChain
    {
        SwapChain(const CGD& _device, const uint32 _chainCount)
            :device(_device), swapChainCount(_chainCount), lastFrame(swapChainCount - 1)
            {
                swapChainImages.resize(_chainCount);
                resourceViews.resize(_chainCount);
            }
        virtual ~SwapChain() {}
        virtual Extent2D GetExtent() const = 0;
        const Format GetPixelFormat() const {return swapChainImageFormat;};
        const GpuTexture& GetSwapChainImage(std::size_t frameIndex) const
        {
            return *swapChainImages[frameIndex];
        }
        const ResourceView& GetChainImageView(std::size_t frameIndex) const
        {
            return *resourceViews[frameIndex].get();
        }
        inline uint32 GetCurrentFrame() const
        {
            return currentFrame;
        }
        inline uint32 GetLastFrame() const
        {
            return lastFrame;
        }
        inline uint32 GetSwapChainCount() const
        {
            return swapChainCount;
        }
    protected:
        uint32 swapChainCount = 2;
        uint32 lastFrame;
        uint32 currentFrame = 0;
        std::vector<GpuTexture*> swapChainImages;
        std::vector<std::unique_ptr<ResourceView>> resourceViews;
    protected:
        Format swapChainImageFormat;
        const CGD& device;
    };
}
