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
 * @Date: 2020-03-05 17:36:56
 * @LastEditTime: 2020-03-18 18:54:05
 */
#pragma once
#include "Core/CoreMinimal/sinterface.h"
#include "Core/CoreMinimal/SDefination.h"
#include "../Flags/ResourceFlags.h"
#include "../Flags/CommonFeatures.h"
#include "../Flags/GraphicsPipelineStates.h"

namespace Sakura::Graphics
{
    struct ResourceCreateInfo
    {
        uint64 size;
        ResourceType type = ResourceType::Buffer;
        union Details
        {
            struct Buffer
            {
                BufferUsages usage;
                CPUAccessFlags cpuAccess;
            } buffer;

            struct Texture
            {

            } texture;
        } detail;
    };
    
    sinterface GpuResource
    {
        friend sinterface CGD;
        virtual ~GpuResource() = default;
        virtual void Map(void** data) = 0;
        virtual void Unmap() = 0;
        const Extent2D GetExtent() const
        {
            return extent;
        }
        virtual const ResourceViewType GetDefaultView() const = 0;
    protected:
        GpuResource() = default;
        GpuResource(Extent2D _extent)
            :extent(_extent){}
        void SetExtent(Extent2D _extent)
        {
            extent = _extent;
        }
    protected:
        Extent2D extent;
    };
}