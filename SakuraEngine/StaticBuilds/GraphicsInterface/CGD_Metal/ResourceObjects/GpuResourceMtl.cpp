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
 * @Date: 2020-05-03 14:03:37
 * @LastEditTime: 2020-05-04 00:55:48
 */
#include "GpuResourceMtl.h"
#include "../CGDMetal.hpp"

using namespace Sakura::Graphics::Mtl;

GpuResourceMtlImage::~GpuResourceMtlImage()
{

}

GpuResourceMtlImage::GpuResourceMtlImage(const CGDMtl& _cgd, Extent2D _extent)
    :cgd(_cgd), GpuTexture(_extent)
{
    
}

void GpuResourceMtlImage::Map(void** data)
{
    
}

void GpuResourceMtlImage::Unmap()
{
    
}

void GpuResourceMtlImage::UpdateValue(std::function<void(void*)> func)
{
    //func(buffer.GetContents());
}

GpuResourceMtlBuffer::~GpuResourceMtlBuffer()
{
    
}

GpuResourceMtlBuffer::GpuResourceMtlBuffer(const CGDMtl& _cgd,
    const BufferCreateInfo& info)
    :cgd(_cgd), GpuBuffer({(uint32)info.size, 1})
{
    buffer = _cgd.entity.device.NewBuffer(
        info.size, mtlpp::ResourceOptions::HazardTrackingModeUntracked);
}

void GpuResourceMtlBuffer::Map(void** data)
{
    memcpy(data, buffer.GetContents(), buffer.GetLength());
    mapped = data;
}

void GpuResourceMtlBuffer::Unmap()
{
    memcpy(buffer.GetContents(), mapped, buffer.GetLength());
}

void GpuResourceMtlBuffer::UpdateValue(std::function<void(void*)> func)
{
    func(buffer.GetContents());
}