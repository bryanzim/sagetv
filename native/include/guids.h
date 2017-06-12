/*
 * Copyright 2015 The SageTV Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _JGUIDS_H_
#define _JGUIDS_H_

#include <strmif.h>
#include <dxva.h>
/*
 * PROPRIETARY CODE BLOCK DISABLED FOR OPEN SOURCE RELEASE - START
#include "MainConcept/legacy/mcmpguid.h"
#include "MainConcept/CLSID/l2adec_guid.h"
#include "MainConcept/CLSID/l2aenc_guid.h"
#include "MainConcept/CLSID/mpeg2dec_guid.h"
#include "MainConcept/CLSID/mpeg2demux_guid.h"
#include "MainConcept/CLSID/mpeg2enc_guid.h"
#include "MainConcept/CLSID/mpeg2mux_guid.h"
#include "MainConcept/CLSID/mpeg12mux_guid.h"
 * PROPRIETARY CODE BLOCK DISABLED FOR OPEN SOURCE RELEASE - END
 */
//#include <uuids.h>

// Overlay Mixer2
// {A0025E90-E45B-11D1-ABE9-00A0C905F375}
DEFINE_GUID(CLSID_OverlayMixer2, 
0xA0025E90, 0xE45B, 0x11D1, 0xAB, 0xE9, 0x0, 0xA0, 0xC9, 0x05, 0xF3, 0x75);

// MPEG-2 Splitter
// {3AE86B20-7BE8-11D1-ABE6-00A0C905F375}
DEFINE_GUID(CLSID_MPEG2Splitter,
0x3ae86b20, 0x7be8, 0x11d1, 0xab, 0xe6, 0x0, 0xa0, 0xc9, 0x05, 0xf3, 0x75);

// StreamMachine MPEG Audio Compressor
// {1DC68880-46F1-11D4-823F-0080C8DE2703}
DEFINE_GUID(CLSID_SMAudioCompressor,
0x1DC68880, 0x46F1, 0x11D4, 0x82, 0x3F, 0x00, 0x80, 0xC8, 0xDE, 0x27, 0x03);

// {BA42EF13-4AE2-40eb-A5F5-5C3F6F9C1D01}
DEFINE_GUID(IID_ISmaudio, 
0xba42ef13, 0x4ae2, 0x40eb, 0xa5, 0xf5, 0x5c, 0x3f, 0x6f, 0x9c, 0x1d, 0x1);

// { 9b5dc2f6-4eb8-4300-88a1-32a8cf5ad217 }
DEFINE_GUID(CLSID_MpegMux,
0x9b5dc2f6, 0x4eb8, 0x4300, 0x88, 0xa1, 0x32, 0xa8, 0xcf, 0x5a, 0xd2, 0x17);

// a33e7ae5-5c0a-4ceb-855e-2c97a2a07340
DEFINE_GUID(CLSID_SharedAsyncFile,
0xc553f2c0, 0x1529, 0x11d0, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea);

DEFINE_GUID( CLSID_SharedFileSource,
0xc55377a7, 0x1526, 0x11da, 0xb4, 0xd1, 0x00, 0x89, 0x5f, 0x6c, 0xbb, 0x64);

DEFINE_GUID(IID_IDeinterlace2, /* 7402D283-1AA1-4bbb-B2D7-9B677270D531 */
	0x7402D283,
	0x1AA1,
	0x4BBB,
	0xB2, 0xD7, 0x9B, 0x67, 0x72, 0x70, 0xD5, 0x31
  );


DEFINE_GUID(AM_KSCATEGORY_ENCODER,
0x19689BF6L, 0xC384, 0x48fd, 0xAD, 0x51, 0x90, 0xE5, 0x8C, 0x79, 0xF7, 0x0B);

DEFINE_GUID(AM_KSCATEGORY_MULTIPLEXER,
0x7A5DE1D3L, 0x01A1, 0x452C, 0xB4, 0x81, 0x4F, 0xA2, 0xB9, 0x62, 0x71, 0xE8);

// {573D5172-A718-4840-9E0D-7FE83D9EAA8F}
DEFINE_GUID(IID_ISharedAsyncFile, 
0x573d5172, 0xa718, 0x4840, 0x9e, 0xd, 0x7f, 0xe8, 0x3d, 0x9e, 0xaa, 0x8f);

// {A3E5ECBD-C9C3-4416-85B7-269A7B7DB96D}
DEFINE_GUID(IID_IMpegMux, 
0xa3e5ecbd, 0xc9c3, 0x4416, 0x85, 0xb7, 0x26, 0x9a, 0x7b, 0x7d, 0xb9, 0x6d);
 
//  abd65dea-5701-4f21-863b-591b057d2268
DEFINE_GUID(CLSID_MpegDeMux,
0xabd65dea, 0x5701, 0x4f21, 0x86, 0x3b, 0x59, 0x1b, 0x05, 0x7d, 0x22, 0x68);

// {65616ea6-3cdd-48d7-8ccc-77b79f7f7c6f}
DEFINE_GUID(CLSID_MPEG2Dump, 
0x65616ea6, 0x3cdd, 0x48d7, 0x8c, 0xcc, 0x77, 0xb7, 0x9f, 0x7f, 0x7c, 0x6f);

// {437B0D3A-4689-4fa6-A7DD-EB4928203C2F}
DEFINE_GUID(CLSID_Deinterlace,
0x437B0D3A, 0x4689, 0x4fa6, 0xA7, 0xDD, 0xEB, 0x49, 0x28, 0x20, 0x3C, 0x2F);

// {BB54F99E-99FC-4ac4-8D75-661C9B8D921B}
DEFINE_GUID(IID_IAudioEncoderProperties, 
0xbb54f99e, 0x99fc, 0x4ac4, 0x8d, 0x75, 0x66, 0x1c, 0x9b, 0x8d, 0x92, 0x1b);

// {C16E87D7-2A18-4823-9C04-08394DFA9C1A}
DEFINE_GUID(IID_IMusicVis, 
0xc16e87d7, 0x2a18, 0x4823, 0x9c, 0x4, 0x8, 0x39, 0x4d, 0xfa, 0x9c, 0x1a);
 
// {3F886457-18BD-4a31-8712-0BBDC85FF7D5}
DEFINE_GUID(CLSID_MusicVisFilter, 
0x3f886457, 0x18bd, 0x4a31, 0x87, 0x12, 0xb, 0xbd, 0xc8, 0x5f, 0xf7, 0xd5);

DEFINE_GUID(IID_IGOChip,0xE4557E5C,0xBB64,0x4186,0x90,0x5E,0x8F,0xC1,0x19,0xDB,0xA5,0xE2);

/*DEFINE_GUID(IID_IMCMpegVideoEncoder, 
0x41918f51, 0xadf0, 0x4ff6, 0x88, 0x2e, 0xa6, 0xdb, 0xad, 0x1a, 0x8c, 0x06);

DEFINE_GUID(IID_IMCMpegAudioEncoder, 
0x41918f52, 0xadf0, 0x4ff6, 0x88, 0x2e, 0xa6, 0xdb, 0xad, 0x1a, 0x8c, 0x06);

DEFINE_GUID(IID_IMCMpegMuxer, 
0x41918f53, 0xadf0, 0x4ff6, 0x88, 0x2e, 0xa6, 0xdb, 0xad, 0x1a, 0x8c, 0x06);
*/
// {0B7922CC-6FAB-49fa-BB60-98100FA67CDC}
DEFINE_GUID(IID_IMpegDeMux,
0xb7922cc, 0x6fab, 0x49fa, 0xbb, 0x60, 0x98, 0x10, 0xf, 0xa6, 0x7c, 0xdc);

// {9077ED36-1DD6-441c-81B3-02AEB8711DEF}
DEFINE_GUID(IID_IAVIWriterConfig, 0x9077ed36, 0x1dd6, 0x441c, 0x81, 0xb3, 0x2, 0xae, 0xb8, 0x71, 0x1d, 0xef);

// 2bd66a0a-e824-4cd3-a6a5-46e3ca14a76a
DEFINE_GUID(CLSID_AVIWriter, 0x2bd66a0a, 0xe824, 0x4cd3, 0xa6, 0xa5, 0x46, 0xe3, 0xca, 0x14, 0xa7, 0x6a);

// {5CDB9520-E16C-4e8a-A2A2-53977A3BC0D7}
DEFINE_GUID(IID_IDivXEncFilterInterface, 
0x5cdb9520, 0xe16c, 0x4e8a, 0xa2, 0xa2, 0x53, 0x97, 0x7a, 0x3b, 0xc0, 0xd7);

// {BE13ED66-BAE8-42ec-9011-54D132542410}
DEFINE_GUID(IID_IDivXEncFilterInterface2, 
0xbe13ed66, 0xbae8, 0x42ec, 0x90, 0x11, 0x54, 0xd1, 0x32, 0x54, 0x24, 0x10);

//  {6B6D0800-9ADA-11d0-A520-00A0D10129C0}
DEFINE_GUID(CLSID_NetShowSource, 
0x6b6d0800, 0x9ada, 0x11d0, 0xa5, 0x20, 0x0, 0xa0, 0xd1, 0x1, 0x29, 0xc0);

// {F0DDADB5-0B02-4831-BDE5-15B3F8DCF4C1}
DEFINE_GUID(CLSID_MpegAudioEncLayer2, 
0xf0ddadb5, 0xb02, 0x4831, 0xbd, 0xe5, 0x15, 0xb3, 0xf8, 0xdc, 0xf4, 0xc1);

DEFINE_GUID( KSCATEGORY_BDA_NETWORK_TUNER, 
0x71985f48, 0x1ca1, 0x11d3, 0x9c, 0xc8, 0x0, 0xc0, 0x4f, 0x79, 0x71, 0xe0 );

//DEFINE_GUID(IID_ITSParser2, 
//0xae1a2888, 0x540e, 0x4077, 0xb1, 0xab, 0x67, 0xa3, 0x4a, 0x72, 0x29, 0x8c);

//new one for TSSplitter2
DEFINE_GUID(IID_ITSParser2, 
0xae1a2999, 0x540e, 0x4077, 0xb1, 0xab, 0x67, 0xa3, 0x4a, 0x72, 0x29, 0x8c);

// ATI Configuration for the 550
DEFINE_GUID(IID_IRioBoardNumber,
0xF6457EA5, 0x5484, 0x4e6b, 0xBF, 0xBC, 0xA0, 0x7F, 0xB5, 0xB4, 0x4F, 0x6E);
//119511E7-4461-4d78-8841-5C4AE61EEF8A
DEFINE_GUID(IID_IRioMPEGVideo,
0x119511E7, 0x4461, 0x4d78, 0x88, 0x41, 0x5C, 0x4A, 0xE6, 0x1E, 0xEF, 0x8A);

DEFINE_GUID(IID_IDivXReSyncFilter,	0x14abc6f3,	0x4b16,	0x4ba7,	0xbe, 0x41, 0x2e, 0x39, 0x4d, 0x4f, 0x9e, 0x01);
DEFINE_GUID(CLSID_ReSync, 
0x94871102, 0x31fb, 0x4d63, 0xbd, 0xb9, 0x23, 0xa2, 0xe7, 0x44, 0x55, 0x8e);

DEFINE_GUID(VWEB_AUDIO, 
0xc0de4bcb, 0xa94a, 0x41b9, 0xae, 0xd3, 0xb5, 0x9c, 0xab, 0xbc, 0x6c, 0x39);

// {A753A1EC-973E-4718-AF8E-A3F554D45C44}
DEFINE_GUID(CLSID_AC3_Filter, 
0xA753A1EC, 0x973E, 0x4718, 0xAF, 0x8E, 0xA3, 0xF5, 0x54, 0xD4, 0x5C, 0x44);

DEFINE_GUID(CLSID_MpegH264,
	0x8D2D71CB, 0x243F, 0x45E3, 0xB2, 0xD8, 0x5F, 0xD7, 0x96, 0x7E, 0xC0, 0x9B );

// 79A86B14-F9C6-4A88-9AA3-2215E6AA28EF
DEFINE_GUID(CLSID_LumanateX, 
0x79a86b14, 0xf9c6, 0x4a88, 0x9a, 0xa3, 0x22, 0x15, 0xe6, 0xaa, 0x28, 0xef);

// {486F726E-4D43-49b9-8A0C-C22A2B0524E8}
DEFINE_GUID(IID_IModuleConfig, 0x486F726E, 0x4D43, 0x49b9, 0x8A, 0x0C, 0xC2, 0x2A, 0x2B, 0x05, 0x24, 0xE8);

// {61EDC9FB-48EC-4ea0-BEC9-F22EDF60DE94}
DEFINE_GUID(CLSID_CustomEVRPresenter, 
0x61edc9fb, 0x48ec, 0x4ea0, 0xbe, 0xc9, 0xf2, 0x2e, 0xdf, 0x60, 0xde, 0x94);

// {A270055F-7785-4ff7-9761-6EA47CF5DD68}
DEFINE_GUID(IID_ISTVEVRPrstr, 
0xa270055f, 0x7785, 0x4ff7, 0x97, 0x61, 0x6e, 0xa4, 0x7c, 0xf5, 0xdd, 0x68);

DEFINE_GUID(CLSID_DTS_AUDIO,
	0xe06d8033, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x05f, 0x6c, 0xbb, 0xea);

DEFINE_GUID(MEDIASUBTYPE_DOLBY_TRUEHD,
    0xeb27cec4, 0x163e, 0x4ca3, 0x8b, 0x74, 0x8e, 0x25, 0xf9, 0x1b, 0x51, 0x7e);

DEFINE_GUID(CLSID_SDeMux,
	0xabd65dff, 0x5702, 0x4f21, 0x86, 0x3b, 0x59, 0x1b, 0x05, 0x7d, 0x22, 0x68 );

DEFINE_GUID(IID_ISDeMux,
    0xabd65eff, 0x5702, 0x4f21, 0x86, 0x3b, 0x59, 0x1b, 0x05, 0x7d, 0x22, 0x68 );

DEFINE_GUID(CLSID_DTS_MASTER_AUDIO,
	0xa2e58eb7, 0xfa9, 0x48bb, 0xa4, 0x0c, 0xfa, 0xe, 0x15, 0x6d, 0x6, 0x45 );

DEFINE_GUID(MEDIASUBTYPE_DOLBY_DDPLUS,
	0xa7fb87af, 0x2d02, 0x42fb, 0xa4, 0xd4, 0x05, 0xcd, 0x93, 0x84, 0x3b, 0xdd );

DEFINE_GUID(MEDIASUBTYPE_DTS_HD,
	0xa2e58eb7, 0xfa9, 0x48bb,  0xa4, 0x0c, 0xfa, 0x0e, 0x15, 0x6d, 0x06, 0x45 );

// define strmiids.lib Windows SDK 6.1 Needed GUID's
DEFINE_GUID(CLSID_ATSCLocator, 0x8872ff1b, 0x98fa, 0x4d7a, 0x8d, 0x93, 0xc9, 0xf1, 0x05, 0x5f, 0x85, 0xbb);
DEFINE_GUID(CLSID_ATSCTuningSpace, 0xa2e30750, 0x6c3d, 0x11d3, 0xb6, 0x53, 0x00, 0xc0, 0x4f, 0x79, 0x49, 0x8e);
DEFINE_GUID(CLSID_DVBCLocator, 0xc531d9fd, 0x9685, 0x4028, 0x8b, 0x68, 0x6e, 0x12, 0x32, 0x07, 0x9f, 0x1e);
DEFINE_GUID(CLSID_DVBSLocator, 0x1df7d126, 0x4050, 0x47f0, 0xa7, 0xcf, 0x4c, 0x4c, 0xa9, 0x24, 0x13, 0x33);
DEFINE_GUID(CLSID_DVBSTuningSpace, 0xb64016f3, 0xc9a2, 0x4066, 0x96, 0xf0, 0xbd, 0x95, 0x63, 0x31, 0x47, 0x26);
DEFINE_GUID(CLSID_DVBTLocator, 0x9cd64701, 0xbdf3, 0x4d14, 0x8e, 0x03, 0xf1, 0x29, 0x83, 0xd8, 0x66, 0x64);
DEFINE_GUID(CLSID_DVBTuningSpace, 0xc6b14b32, 0x76aa, 0x4a86, 0xa7, 0xac, 0x5c, 0x79, 0xaa, 0xf5, 0x8d, 0xa7);
DEFINE_GUID(IID_IATSCTuningSpace, 0x0369b4e2, 0x45b6, 0x11d3, 0xb6, 0x50, 0x00, 0xc0, 0x4f, 0x79, 0x49, 0x8e);
DEFINE_GUID(IID_IBDA_DigitalDemodulator, 0xef30f379, 0x985b, 0x4d10, 0xb6, 0x40, 0xa7, 0x9d, 0x5e, 0x04, 0xe1, 0xe0);
DEFINE_GUID(IID_IBDA_FrequencyFilter, 0x71985f47, 0x1ca1, 0x11d3, 0x9c, 0xc8, 0x00, 0xc0, 0x4f, 0x79, 0x71, 0xe0);
DEFINE_GUID(IID_IBDA_LNBInfo, 0x992cf102, 0x49f9, 0x4719, 0xa6, 0x64, 0xc4, 0xf2, 0x3e, 0x24, 0x08, 0xf4);
DEFINE_GUID(IID_IBDA_SignalStatistics, 0x1347d106, 0xcf3a, 0x428a, 0xa5, 0xcb, 0xac, 0x0d, 0x9a, 0x2a, 0x43, 0x38);
DEFINE_GUID(IID_IMPEG2PIDMap, 0xafb6c2a1, 0x2c41, 0x11d3, 0x8a, 0x60, 0x00, 0x00, 0xf8, 0x1e, 0x0e, 0x4a);
DEFINE_GUID(IID_ITuningSpace, 0x061c6e30, 0xe622, 0x11d2, 0x94, 0x93, 0x00, 0xc0, 0x4f, 0x72, 0xd9, 0x80);

#endif
