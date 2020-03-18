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
 * @Date: 2020-03-10 11:52:58
 * @LastEditTime: 2020-03-12 13:50:51
 */
#pragma once
#include <vector>
#include "../../GraphicsCommon/GraphicsObjects/Fence.h"
#include "vulkan/vulkan.h"
#include <deque>

namespace Sakura::Graphics::Vk
{
    class CGD_Vk;
}

namespace Sakura::Graphics::Vk
{
    /**
     * @description: Fence: wait GPU at CPU
     * @author: SaeruHikari
     */
    struct FenceVk final : simplements Fence
    {
        friend class CGD_Vk;
        friend class CommandQueueVk;
        virtual ~FenceVk() override final;
        virtual void Reset(void) override final;
        virtual uint64 GetCompletedValue() const override final;
    protected:  
		FenceVk(const CGD_Vk& _cgd);
    protected:
        uint64 targetVal = 0;
        VkSemaphore timelineSemaphore;
        const CGD_Vk& cgd;
    };
}