/*
 * @This File is Part of Sakura by SaeruHikari: 
 * @Descripttion: CopyRight SaeruHikari
 * @Version: 0.1.0
 * @Author: SaeruHikari
 * @Date: 2020-02-02 12:36:02
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2020-03-05 23:39:42
 */
#pragma once
#include "vulkan/vulkan.h"
#include "SakuraEngine/Core/EngineUtils/log.h"
#include "../GraphicsCommon/Format/PixelFormat.h"

#define FORMAT_MAPPER() \
    VK_FORMAT_MAPPING(UNKNOWN, VK_FORMAT_UNDEFINED); \
    VK_FORMAT_MAPPING(R64G64B64A64_UINT, VK_FORMAT_R64G64B64A64_UINT);\
    VK_FORMAT_MAPPING(R64G64B64A64_SINT, VK_FORMAT_R64G64B64A64_SINT);\
    VK_FORMAT_MAPPING(R64G64B64A64_SFLOAT, VK_FORMAT_R64G64B64A64_SFLOAT);\
\
    VK_FORMAT_MAPPING(R64G64B64_UINT, VK_FORMAT_R64G64B64_UINT);\
    VK_FORMAT_MAPPING(R64G64B64_SINT, VK_FORMAT_R64G64B64_SINT);\
    VK_FORMAT_MAPPING(R64G64B64_SFLOAT, VK_FORMAT_R64G64B64_SFLOAT);\
\
    VK_NON_DEF(R32G32B32A32_TYPELESS);\
    VK_FORMAT_MAPPING(R32G32B32A32_UINT, VK_FORMAT_R32G32B32A32_UINT);\
    VK_FORMAT_MAPPING(R32G32B32A32_SINT, VK_FORMAT_R32G32B32A32_SINT);\
    VK_FORMAT_MAPPING(R32G32B32A32_SFLOAT, VK_FORMAT_R32G32B32A32_SFLOAT);\
\
    VK_FORMAT_MAPPING(R64G64_UINT, VK_FORMAT_R64G64_UINT);\
    VK_FORMAT_MAPPING(R64G64_SINT, VK_FORMAT_R64G64_SINT);\
    VK_FORMAT_MAPPING(R64G64_SFLOAT, VK_FORMAT_R64G64_SFLOAT);\
\
    VK_NON_DEF(R32G32B32_TYPELESS);\
    VK_FORMAT_MAPPING(R32G32B32_UINT, VK_FORMAT_R32G32B32_UINT);\
    VK_FORMAT_MAPPING(R32G32B32_SINT, VK_FORMAT_R32G32B32_SINT);\
    VK_FORMAT_MAPPING(R32G32B32_SFLOAT, VK_FORMAT_R32G32B32_SFLOAT);\
\
    VK_NON_DEF(R16G16B16A16_TYPELESS);\
    VK_FORMAT_MAPPING(R16G16B16A16_UNORM, VK_FORMAT_R16G16B16A16_UNORM);\
    VK_FORMAT_MAPPING(R16G16B16A16_SNORM, VK_FORMAT_R16G16B16A16_SNORM);\
    VK_FORMAT_MAPPING(R16G16B16A16_USCALED, VK_FORMAT_R16G16B16A16_USCALED);\
    VK_FORMAT_MAPPING(R16G16B16A16_SSCALED, VK_FORMAT_R16G16B16A16_SSCALED);\
    VK_FORMAT_MAPPING(R16G16B16A16_UINT, VK_FORMAT_R16G16B16A16_UINT);\
    VK_FORMAT_MAPPING(R16G16B16A16_SINT, VK_FORMAT_R16G16B16A16_SINT);\
    VK_FORMAT_MAPPING(R16G16B16A16_SFLOAT, VK_FORMAT_R16G16B16A16_SFLOAT);\
\
    VK_NON_DEF(R32G32_TYPELESS);\
    VK_FORMAT_MAPPING(R32G32_UINT, VK_FORMAT_R32G32_UINT);\
    VK_FORMAT_MAPPING(R32G32_SINT, VK_FORMAT_R32G32_SINT);\
    VK_FORMAT_MAPPING(R32G32_SFLOAT, VK_FORMAT_R32G32_SFLOAT);\
\
    VK_FORMAT_MAPPING(R64_UINT, VK_FORMAT_R64_UINT);\
    VK_FORMAT_MAPPING(R64_SINT, VK_FORMAT_R64_SINT);\
    VK_FORMAT_MAPPING(R64_SFLOAT, VK_FORMAT_R64_SFLOAT);\
    \
    VK_FORMAT_MAPPING(R16G16B16_UNORM, VK_FORMAT_R16G16B16_UNORM);\
    VK_FORMAT_MAPPING(R16G16B16_SNORM, VK_FORMAT_R16G16B16_SNORM);\
    VK_FORMAT_MAPPING(R16G16B16_USCALED, VK_FORMAT_R16G16B16_USCALED);\
    VK_FORMAT_MAPPING(R16G16B16_SSCALED, VK_FORMAT_R16G16B16_SSCALED);\
    VK_FORMAT_MAPPING(R16G16B16_UINT, VK_FORMAT_R16G16B16_UINT);\
    VK_FORMAT_MAPPING(R16G16B16_SINT, VK_FORMAT_R16G16B16_SINT);\
    VK_FORMAT_MAPPING(R16G16B16_SFLOAT, VK_FORMAT_R16G16B16_SFLOAT);\
\
    VK_NON_DEF(R10G10B10A2_TYPELESS_PACK32);\
    VK_FORMAT_MAPPING(R10G10B10A2_SINT_PACK32,\
        VK_FORMAT_A2R10G10B10_SINT_PACK32);\
    VK_FORMAT_MAPPING(R10G10B10A2_UNORM_PACK32,\
        VK_FORMAT_A2R10G10B10_UNORM_PACK32);\
    VK_FORMAT_MAPPING(R10G10B10A2_SNORM_PACK32,\
        VK_FORMAT_A2R10G10B10_SNORM_PACK32);\
    VK_FORMAT_MAPPING(R10G10B10A2_USCALED_PACK32,\
        VK_FORMAT_A2R10G10B10_USCALED_PACK32);\
    VK_FORMAT_MAPPING(R10G10B10A2_SSCALED_PACK32,\
        VK_FORMAT_A2R10G10B10_SSCALED_PACK32);\
    VK_FORMAT_MAPPING(R10G10B10A2_UINT_PACK32,\
        VK_FORMAT_A2R10G10B10_UINT_PACK32);\
\
    VK_NON_DEF(R10G10B10_XR_BIAS_A2_UNORM_PACK32);\
\
    VK_NON_DEF(B10G10R10A2_UNORM_PACK32);\
    VK_NON_DEF(B10G10R10A2_SNORM_PACK32);\
    VK_NON_DEF(B10G10R10A2_USCALED_PACK32);\
    VK_NON_DEF(B10G10R10A2_SSCALED_PACK32);\
    VK_NON_DEF(B10G10R10A2_UINT_PACK32);\
    VK_NON_DEF(B10G10R10A2_SINT_PACK32);\
    \
    VK_FORMAT_MAPPING(A2B10G10R10_UNORM_PACK32,\
        VK_FORMAT_A2B10G10R10_UNORM_PACK32);\
    VK_FORMAT_MAPPING(A2B10G10R10_SNORM_PACK32,\
        VK_FORMAT_A2B10G10R10_SNORM_PACK32);\
    VK_FORMAT_MAPPING(A2B10G10R10_USCALED_PACK32,\
        VK_FORMAT_A2B10G10R10_USCALED_PACK32);\
    VK_FORMAT_MAPPING(A2B10G10R10_SSCALED_PACK32,\
        VK_FORMAT_A2B10G10R10_SSCALED_PACK32);\
    VK_FORMAT_MAPPING(A2B10G10R10_UINT_PACK32,\
        VK_FORMAT_A2B10G10R10_UINT_PACK32);\
    VK_FORMAT_MAPPING(A2B10G10R10_SINT_PACK32,\
        VK_FORMAT_A2B10G10R10_SINT_PACK32);\
\
    VK_NON_DEF(R9G9B9E5_UFLOAT_PACK32);\
    VK_NON_DEF(R8G8B8A8_UNORM_PACK32);\
    VK_NON_DEF(R8G8B8A8_SNORM_PACK32);\
    VK_NON_DEF(R8G8B8A8_USCALED_PACK32);\
    VK_NON_DEF(R8G8B8A8_SSCALED_PACK32);\
    VK_NON_DEF(R8G8B8A8_UINT_PACK32);\
    VK_NON_DEF(R8G8B8A8_SINT_PACK32);\
    VK_NON_DEF(R8G8B8A8_SRGB_PACK32);\
    VK_NON_DEF(R8G8B8A8_TYPELESS);\
    VK_FORMAT_MAPPING(R8G8B8A8_UNORM, VK_FORMAT_R8G8B8A8_UNORM);\
    VK_FORMAT_MAPPING(R8G8B8A8_SNORM, VK_FORMAT_R8G8B8A8_SNORM);\
    VK_FORMAT_MAPPING(R8G8B8A8_USCALED, VK_FORMAT_R8G8B8A8_USCALED);\
    VK_FORMAT_MAPPING(R8G8B8A8_SSCALED, VK_FORMAT_R8G8B8A8_SSCALED);\
    VK_FORMAT_MAPPING(R8G8B8A8_UINT, VK_FORMAT_R8G8B8A8_UINT);\
    VK_FORMAT_MAPPING(R8G8B8A8_SINT, VK_FORMAT_R8G8B8A8_SINT);\
    VK_FORMAT_MAPPING(R8G8B8A8_SRGB, VK_FORMAT_R8G8B8A8_SRGB);\
    \
    VK_NON_DEF(B8G8R8A8_TYPELESS);\
    VK_FORMAT_MAPPING(B8G8R8A8_UNORM, VK_FORMAT_B8G8R8A8_UNORM);\
    VK_FORMAT_MAPPING(B8G8R8A8_SNORM, VK_FORMAT_B8G8R8A8_SNORM);\
    VK_FORMAT_MAPPING(B8G8R8A8_USCALED, VK_FORMAT_B8G8R8A8_USCALED);\
    VK_FORMAT_MAPPING(B8G8R8A8_SSCALED, VK_FORMAT_B8G8R8A8_SSCALED);\
    VK_FORMAT_MAPPING(B8G8R8A8_UINT, VK_FORMAT_B8G8R8A8_UINT);\
    VK_FORMAT_MAPPING(B8G8R8A8_SINT, VK_FORMAT_B8G8R8A8_SINT);\
    VK_FORMAT_MAPPING(B8G8R8A8_SRGB, VK_FORMAT_B8G8R8A8_SRGB);\
\
    VK_NON_DEF(R11G11B10_UFLOAT_PACK32);\
    VK_NON_DEF(B8G8R8X8_TYPELESS);\
    VK_NON_DEF(B8G8R8X8_UNORM);\
    VK_NON_DEF(B8G8R8X8_SRGB);\
\
    VK_NON_DEF(R32_TYPELESS);\
    VK_FORMAT_MAPPING(R32_UINT, VK_FORMAT_R32_UINT);\
    VK_FORMAT_MAPPING(R32_SINT, VK_FORMAT_R32_SINT);\
    VK_FORMAT_MAPPING(R32_SFLOAT, VK_FORMAT_R32_SFLOAT);\
\
    VK_FORMAT_MAPPING(R8G8B8_UNORM, VK_FORMAT_R8G8B8_UNORM);\
    VK_FORMAT_MAPPING(R8G8B8_SNORM, VK_FORMAT_R8G8B8_SNORM);\
    VK_FORMAT_MAPPING(R8G8B8_USCALED, VK_FORMAT_R8G8B8_USCALED);\
    VK_FORMAT_MAPPING(R8G8B8_SSCALED, VK_FORMAT_R8G8B8_SSCALED);\
    VK_FORMAT_MAPPING(R8G8B8_UINT, VK_FORMAT_R8G8B8_UINT);\
    VK_FORMAT_MAPPING(R8G8B8_SINT, VK_FORMAT_R8G8B8_SINT);\
    VK_FORMAT_MAPPING(R8G8B8_SRGB, VK_FORMAT_R8G8B8_SRGB);\
\
    VK_FORMAT_MAPPING(B8G8R8_UNORM, VK_FORMAT_B8G8R8_UNORM);\
    VK_FORMAT_MAPPING(B8G8R8_SNORM, VK_FORMAT_B8G8R8_SNORM);\
    VK_FORMAT_MAPPING(B8G8R8_USCALED, VK_FORMAT_B8G8R8_USCALED);\
    VK_FORMAT_MAPPING(B8G8R8_SSCALED, VK_FORMAT_B8G8R8_SSCALED);\
    VK_FORMAT_MAPPING(B8G8R8_UINT, VK_FORMAT_B8G8R8_UINT);\
    VK_FORMAT_MAPPING(B8G8R8_SINT, VK_FORMAT_B8G8R8_SINT);\
    VK_FORMAT_MAPPING(B8G8R8_SRGB, VK_FORMAT_B8G8R8_SRGB);\
    \
    VK_FORMAT_MAPPING(B5G5R5A1_UNORM_PACK16, VK_FORMAT_B5G5R5A1_UNORM_PACK16);\
    VK_FORMAT_MAPPING(A1R5G5B5_UNORM_PACK16, VK_FORMAT_A1R5G5B5_UNORM_PACK16);\
    \
    VK_NON_DEF(A1B5G5R5_UNORM_PACK16);\
    VK_NON_DEF(A4B4G4R4_UNORM_PACK16);\
    VK_NON_DEF(A4R4G4B4_UNORM_PACK16);\
\
    VK_FORMAT_MAPPING(R5G6B5_UNORM_PACK16, VK_FORMAT_R5G6B5_UNORM_PACK16);\
    VK_FORMAT_MAPPING(B5G6R5_UNORM_PACK16, VK_FORMAT_B5G6R5_UNORM_PACK16);\
\
    VK_NON_DEF(R8G8_TYPELESS);\
    VK_FORMAT_MAPPING(R8G8_UNORM, VK_FORMAT_R8G8_UNORM);\
    VK_FORMAT_MAPPING(R8G8_SNORM, VK_FORMAT_R8G8_SNORM);\
    VK_FORMAT_MAPPING(R8G8_USCALED, VK_FORMAT_R8G8_USCALED);\
    VK_FORMAT_MAPPING(R8G8_SSCALED, VK_FORMAT_R8G8_SSCALED);\
    VK_FORMAT_MAPPING(R8G8_UINT, VK_FORMAT_R8G8_UINT);\
    VK_FORMAT_MAPPING(R8G8_SINT, VK_FORMAT_R8G8_SINT);\
    VK_FORMAT_MAPPING(R8G8_SRGB, VK_FORMAT_R8G8_SRGB);\
\
    VK_NON_DEF(R16_TYPELESS);\
    VK_FORMAT_MAPPING(R16_UNORM, VK_FORMAT_R16_UNORM);\
    VK_FORMAT_MAPPING(R16_SNORM, VK_FORMAT_R16_SNORM);\
    VK_FORMAT_MAPPING(R16_USCALED, VK_FORMAT_R16_USCALED);\
    VK_FORMAT_MAPPING(R16_SSCALED, VK_FORMAT_R16_SSCALED);\
    VK_FORMAT_MAPPING(R16_UINT, VK_FORMAT_R16_UINT);\
    VK_FORMAT_MAPPING(R16_SINT, VK_FORMAT_R16_SINT);\
    VK_FORMAT_MAPPING(R16_SFLOAT, VK_FORMAT_R16_SFLOAT);\
    \
    VK_NON_DEF(G4R4_UNORM_PACK8);\
    VK_FORMAT_MAPPING(R4G4_UNORM_PACK8, VK_FORMAT_R4G4_UNORM_PACK8);\
\
    VK_NON_DEF(R8_TYPELESS);\
    VK_FORMAT_MAPPING(R8_UNORM, VK_FORMAT_R8_UNORM);\
    VK_FORMAT_MAPPING(R8_SNORM, VK_FORMAT_R8_SNORM);\
    VK_FORMAT_MAPPING(R8_USCALED, VK_FORMAT_R8_USCALED);\
    VK_FORMAT_MAPPING(R8_SSCALED, VK_FORMAT_R8_SSCALED);\
    VK_FORMAT_MAPPING(R8_UINT, VK_FORMAT_R8_UINT);\
    VK_FORMAT_MAPPING(R8_SINT, VK_FORMAT_R8_SINT);\
    VK_FORMAT_MAPPING(R8_SRGB, VK_FORMAT_R8_SRGB);\
    \
    VK_NON_DEF(A8_UNORM);\
    VK_NON_DEF(R1_UNORM);\
    VK_NON_DEF(R32G8X24_TYPELESS_2PACK32);\
    VK_NON_DEF(R32_SFLOAT_X8X24_TYPELESS_2PACK32);\
    VK_NON_DEF(X32_TYPELESS_G8X24_UINT_2PACK32);\
\
    VK_NON_DEF(R24G8_TYPELESS_PACK32);\
    VK_FORMAT_MAPPING(D32_SFLOAT_S8_UINT, VK_FORMAT_D32_SFLOAT_S8_UINT);\
    VK_FORMAT_MAPPING(D24_UNORM_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT);\
\
    VK_NON_DEF(R24_UNORM_X8_TYPELESS_PACK32);\
    VK_NON_DEF(X24_TYPELESS_G8_UINT_PACK32);\
    VK_NON_DEF(D24_UNORM_X8_TYPELESS_PACK32);\
\
    VK_FORMAT_MAPPING(D32_SFLOAT, VK_FORMAT_D32_SFLOAT);\
    VK_FORMAT_MAPPING(D16_UNORM_S8_UINT, VK_FORMAT_D16_UNORM_S8_UINT);\
    VK_FORMAT_MAPPING(D16_UNORM, VK_FORMAT_D16_UNORM);\
\
    VK_FORMAT_MAPPING(S8_UINT, VK_FORMAT_S8_UINT);\
\
    VK_NON_DEF(BC1_TYPELESS_BLOCK);\
    VK_FORMAT_MAPPING(BC1_RGBA_UNORM_BLOCK, VK_FORMAT_BC1_RGBA_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(BC1_RGBA_SRGB_BLOCK, VK_FORMAT_BC1_RGBA_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(BC1_UNORM_BLOCK, VK_FORMAT_BC1_RGB_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(BC1_SRGB_BLOCK, VK_FORMAT_BC1_RGB_SRGB_BLOCK);\
\
    VK_NON_DEF(BC2_TYPELESS_BLOCK);\
    VK_FORMAT_MAPPING(BC2_UNORM_BLOCK, VK_FORMAT_BC2_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(BC2_SRGB_BLOCK, VK_FORMAT_BC2_SRGB_BLOCK);\
\
    VK_NON_DEF(BC3_TYPELESS_BLOCK);\
    VK_FORMAT_MAPPING(BC3_UNORM_BLOCK, VK_FORMAT_BC3_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(BC3_SRGB_BLOCK, VK_FORMAT_BC3_SRGB_BLOCK);\
\
    VK_NON_DEF(BC4_TYPELESS_BLOCK);\
    VK_FORMAT_MAPPING(BC4_UNORM_BLOCK, VK_FORMAT_BC4_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(BC4_SNORM_BLOCK, VK_FORMAT_BC4_SNORM_BLOCK);\
    \
    VK_NON_DEF(BC5_TYPELESS_BLOCK);\
    VK_FORMAT_MAPPING(BC5_UNORM_BLOCK, VK_FORMAT_BC5_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(BC5_SNORM_BLOCK, VK_FORMAT_BC5_SNORM_BLOCK);\
\
    VK_NON_DEF(BC6H_TYPELESS_BLOCK);\
    VK_FORMAT_MAPPING(BC6H_UFLOAT_BLOCK, VK_FORMAT_BC6H_UFLOAT_BLOCK);\
    VK_FORMAT_MAPPING(BC6H_SFLOAT_BLOCK, VK_FORMAT_BC6H_SFLOAT_BLOCK);\
\
    VK_NON_DEF(BC7_TYPELESS_BLOCK);\
    VK_FORMAT_MAPPING(BC7_UNORM_BLOCK, VK_FORMAT_BC7_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(BC7_SRGB_BLOCK, VK_FORMAT_BC7_SRGB_BLOCK);\
\
    VK_FORMAT_MAPPING(ETC2_R8G8B8A8_UNORM_BLOCK, \
        VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ETC2_R8G8B8A8_SRGB_BLOCK, \
        VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ETC2_R8G8B8A1_UNORM_BLOCK, \
        VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ETC2_R8G8B8A1_SRGB_BLOCK, \
        VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK);\
        \
    VK_FORMAT_MAPPING(ETC2_R8G8B8_UNORM_BLOCK, \
        VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ETC2_R8G8B8_SRGB_BLOCK, \
        VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK);\
\
    VK_FORMAT_MAPPING(EAC_R11G11_UNORM_BLOCK, \
        VK_FORMAT_EAC_R11G11_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(EAC_R11G11_SNORM_BLOCK, \
        VK_FORMAT_EAC_R11G11_SNORM_BLOCK);\
    VK_FORMAT_MAPPING(EAC_R11_UNORM_BLOCK, \
        VK_FORMAT_EAC_R11_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(EAC_R11_SNORM_BLOCK, \
        VK_FORMAT_EAC_R11_SNORM_BLOCK);\
\
    VK_FORMAT_MAPPING(ASTC_4x4_UNORM_BLOCK,\
        VK_FORMAT_ASTC_4x4_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_4x4_SRGB_BLOCK,\
        VK_FORMAT_ASTC_4x4_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_4x4_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_5x4_UNORM_BLOCK,\
        VK_FORMAT_ASTC_5x4_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_5x4_SRGB_BLOCK,\
        VK_FORMAT_ASTC_5x4_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_5x4_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_5x5_UNORM_BLOCK,\
        VK_FORMAT_ASTC_5x5_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_5x5_SRGB_BLOCK,\
        VK_FORMAT_ASTC_5x5_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_5x5_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_6x5_UNORM_BLOCK,\
        VK_FORMAT_ASTC_6x5_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_6x5_SRGB_BLOCK,\
        VK_FORMAT_ASTC_6x5_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_6x5_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_6x6_UNORM_BLOCK,\
        VK_FORMAT_ASTC_6x6_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_6x6_SRGB_BLOCK,\
        VK_FORMAT_ASTC_6x6_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_6x6_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_8x5_UNORM_BLOCK,\
        VK_FORMAT_ASTC_8x5_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_8x5_SRGB_BLOCK,\
        VK_FORMAT_ASTC_8x5_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_8x5_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_8x6_UNORM_BLOCK,\
        VK_FORMAT_ASTC_8x6_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_8x6_SRGB_BLOCK,\
        VK_FORMAT_ASTC_8x6_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_8x6_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_8x8_UNORM_BLOCK,\
        VK_FORMAT_ASTC_8x8_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_8x8_SRGB_BLOCK,\
        VK_FORMAT_ASTC_8x8_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_8x8_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_10x5_UNORM_BLOCK,\
        VK_FORMAT_ASTC_10x5_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_10x5_SRGB_BLOCK,\
        VK_FORMAT_ASTC_10x5_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_10x5_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_10x6_UNORM_BLOCK,\
        VK_FORMAT_ASTC_10x6_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_10x6_SRGB_BLOCK,\
        VK_FORMAT_ASTC_10x6_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_10x6_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_10x8_UNORM_BLOCK,\
        VK_FORMAT_ASTC_10x8_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_10x8_SRGB_BLOCK,\
        VK_FORMAT_ASTC_10x8_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_10x8_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_10x10_UNORM_BLOCK,\
        VK_FORMAT_ASTC_10x10_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_10x10_SRGB_BLOCK,\
        VK_FORMAT_ASTC_10x10_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_10x10_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_12x10_UNORM_BLOCK,\
        VK_FORMAT_ASTC_12x10_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_12x10_SRGB_BLOCK,\
        VK_FORMAT_ASTC_12x10_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_12x10_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(ASTC_12x12_UNORM_BLOCK,\
        VK_FORMAT_ASTC_12x12_UNORM_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_12x12_SRGB_BLOCK,\
        VK_FORMAT_ASTC_12x12_SRGB_BLOCK);\
    VK_FORMAT_MAPPING(ASTC_12x12_SFLOAT_BLOCK_EXT,\
        VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT);\
\
    VK_FORMAT_MAPPING(R12X4G12X4B12X4A12X4_UNORM_4PACK16,\
        VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16);\
    VK_FORMAT_MAPPING(R10X6G10X6B10X6A10X6_UNORM_4PACK16,\
        VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16);\
    VK_FORMAT_MAPPING(R12X4G12X4_UNORM_2PACK16,\
        VK_FORMAT_R12X4G12X4_UNORM_2PACK16);\
    VK_FORMAT_MAPPING(R10X6G10X6_UNORM_2PACK16,\
        VK_FORMAT_R10X6G10X6_UNORM_2PACK16);\
    VK_FORMAT_MAPPING(R12X4_UNORM_PACK16,\
        VK_FORMAT_R12X4_UNORM_PACK16);\
    VK_FORMAT_MAPPING(R10X6_UNORM_PACK16,\
        VK_FORMAT_R10X6_UNORM_PACK16);\
        \
    VK_NON_DEF(R8G8_B8G8_UNORM);\
    VK_NON_DEF(G16B16_G16R16_422_UNORM);\
    VK_FORMAT_MAPPING(G12X4B12X4_G12X4R12X4_422_UNORM_4PACK16,\
        VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16);\
    VK_FORMAT_MAPPING(G10X6B10X6_G10X6R10X6_422_UNORM_4PACK16,\
        VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16);\
    VK_FORMAT_MAPPING(G8B8_G8R8_422_UNORM,\
        VK_FORMAT_G8B8G8R8_422_UNORM);\
    VK_NON_DEF(G8R8_G8B8_UNORM);\
    VK_FORMAT_MAPPING(B16G16_R16G16_422_UNORM,\
        VK_FORMAT_B16G16R16G16_422_UNORM);\
    VK_FORMAT_MAPPING(B12X4G12X4_R12X4G12X4_422_UNORM_4PACK16,\
        VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16);\
    VK_FORMAT_MAPPING(B10X6G10X6_R10X6G10X6_422_UNORM_4PACK16,\
        VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16);\
    VK_FORMAT_MAPPING(B8G8_R8G8_422_UNORM, VK_FORMAT_B8G8R8G8_422_UNORM);\
\
    VK_FORMAT_MAPPING(G16_B16_R16_3PLANE_444_UNORM,\
            VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM);\
    VK_FORMAT_MAPPING(G16_B16_R16_3PLANE_422_UNORM,\
            VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM);

#define VK_FORMAT_MAPPING(format, vkformat) \
{case PixelFormat::format: \
return VkFormat::vkformat;}

#define VK_NON_DEF(format)\
{case PixelFormat::format: \
std::string val##format = "Vulkan Format not supported: "; \
std::string fmt##format = #format; \
Sakura::log::warn(val##format + fmt##format); \
return VkFormat::VK_FORMAT_UNDEFINED;}

namespace Sakura::Graphics::Vk
{
    VkFormat Transfer(const Sakura::Graphics::PixelFormat format)
    {
        switch (format)
        {
            FORMAT_MAPPER()
        default:
            return VkFormat::VK_FORMAT_UNDEFINED;
        }
    }
}

#undef VK_FORMAT_MAPPING
#undef VK_NON_DEF
#define VK_FORMAT_MAPPING(format, vkformat) \
case VkFormat::vkformat:\
return PixelFormat::format; 
#define VK_NON_DEF(format)  

namespace Sakura::Graphics::Vk
{
    Sakura::Graphics::PixelFormat Transfer(const VkFormat format)
    {
        switch (format)
        {
            FORMAT_MAPPER()
        default:
            return Sakura::Graphics::PixelFormat::UNKNOWN;
        }
    }
}

#undef VK_FORMAT_MAPPING
#undef VK_NON_DEF
#undef FORMAT_MAPPER
