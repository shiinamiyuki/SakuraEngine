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
 * @Date: 2020-04-28 23:06:28
 * @LastEditTime: 2020-04-30 00:55:29
 */
#include "CGDMetal.hpp"
#include <iostream>

using namespace Sakura::Graphics::Mtl;
using namespace Sakura::Graphics;

void CGDMtl::Initialize(CGDInfo info)
{
    CGDMtl::debug_info("CGDMtl: Create Device");
    entity.device = mtlpp::Device::CreateSystemDefaultDevice();
    if(!entity.device.Validate())
    {
        CGDMtl::debug_error("CGDMtl: Create Metal Default Device Failed!");
    }
}

void CGDMtl::InitializeDevice(void* mainSurface)
{
    entity.graphicsQueue = std::make_unique<CommandQueueMtl>(
        entity.device.NewCommandQueue(), CommandQueueTypes::COMMAND_QUEUE_GRAPHICS);
    entity.computeQueue = std::make_unique<CommandQueueMtl>(
        entity.device.NewCommandQueue(), CommandQueueTypes::COMMAND_QUEUE_COMPUTE);
    entity.blitQueue = std::make_unique<CommandQueueMtl>(
        entity.device.NewCommandQueue(), CommandQueueTypes::COMMAND_QUEUE_COPY);
}

CommandContext* CGDMtl::CreateContext(const CommandQueue& queue,
    bool bTransiant) const
{
    CGDMtl::debug_info("CGDMtl: Create Context");

}