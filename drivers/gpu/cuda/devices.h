/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2021 NVIDIA CORPORATION & AFFILIATES
 */


#ifndef _CUDA_GPU_DEVICES_H_
#define _CUDA_GPU_DEVICES_H_

#define NVIDIA_GPU_NV1_STG2000X_B_SERIES                                                                                   0x0008  /* STG2000X-B Series */
#define NVIDIA_GPU_NV1_NV1_SERIES                                                                                          0x0009  /* NV1 Series */
#define NVIDIA_GPU_NV3_RIVA_128                                                                                            0x0018  /* Riva 128 */
#define NVIDIA_GPU_NV3_RIVA_128ZX                                                                                          0x0019  /* Riva 128ZX */
#define NVIDIA_GPU_NV4_RIVA_TNT                                                                                            0x0020  /* Riva TNT */
#define NVIDIA_GPU_NV5_RIVA_TNT2_TNT2_PRO                                                                                  0x0028  /* Riva TNT2 / TNT2 Pro */
#define NVIDIA_GPU_NV5_RIVA_TNT2_ULTRA                                                                                     0x0029  /* Riva TNT2 Ultra */
#define NVIDIA_GPU_NV5_RIVA_TNT2_RIVA_TNT2                                                                                 0x002a  /* Riva TNT2 */
#define NVIDIA_GPU_NV5_RIVA_TNT2_RIVA_TNT2_002B                                                                            0x002b  /* Riva TNT2 */
#define NVIDIA_GPU_NV5_VANTA_VANTA_LT                                                                                      0x002c  /* Vanta / Vanta LT */
#define NVIDIA_GPU_NV5_RIVA_TNT2_MODEL_64_MODEL_64_PRO                                                                     0x002d  /* Riva TNT2 Model 64 / Model 64 Pro */
#define NVIDIA_GPU_MCP04_SMBUS                                                                                             0x0034  /* SMBus */
#define NVIDIA_GPU_MCP04_IDE                                                                                               0x0035  /* IDE */
#define NVIDIA_GPU_MCP04_SERIAL_ATA_CONTROLLER_SERIAL_ATA_CONTROLLER                                                       0x0036  /* Serial ATA Controller */
#define NVIDIA_GPU_MCP04_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER                                                           0x0037  /* Ethernet Controller */
#define NVIDIA_GPU_MCP04_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER_0038                                                      0x0038  /* Ethernet Controller */
#define NVIDIA_GPU_MCP04_AC97_AUDIO_CONTROLLER                                                                             0x003a  /* AC'97 Audio Controller */
#define NVIDIA_GPU_MCP04_USB_CONTROLLER_USB_CONTROLLER                                                                     0x003b  /* USB Controller */
#define NVIDIA_GPU_MCP04_USB_CONTROLLER_USB_CONTROLLER_003C                                                                0x003c  /* USB Controller */
#define NVIDIA_GPU_MCP04_PCI_BRIDGE                                                                                        0x003d  /* PCI Bridge */
#define NVIDIA_GPU_MCP04_SERIAL_ATA_CONTROLLER_SERIAL_ATA_CONTROLLER_003E                                                  0x003e  /* Serial ATA Controller */
#define NVIDIA_GPU_NV40_GEFORCE_6800_ULTRA                                                                                 0x0040  /* GeForce 6800 Ultra */
#define NVIDIA_GPU_NV40_GEFORCE_6800                                                                                       0x0041  /* GeForce 6800 */
#define NVIDIA_GPU_NV40_GEFORCE_6800_LE                                                                                    0x0042  /* GeForce 6800 LE */
#define NVIDIA_GPU_NV40_GEFORCE_6800_XE                                                                                    0x0043  /* GeForce 6800 XE */
#define NVIDIA_GPU_NV40_GEFORCE_6800_XT_GEFORCE_6800_XT                                                                    0x0044  /* GeForce 6800 XT */
#define NVIDIA_GPU_NV40_GEFORCE_6800_GT                                                                                    0x0045  /* GeForce 6800 GT */
#define NVIDIA_GPU_NV40_GEFORCE_6800_GS                                                                                    0x0047  /* GeForce 6800 GS */
#define NVIDIA_GPU_NV40_GEFORCE_6800_XT_GEFORCE_6800_XT_0048                                                               0x0048  /* GeForce 6800 XT */
#define NVIDIA_GPU_NV40GL_QUADRO_FX_4000                                                                                   0x004e  /* Quadro FX 4000 */
#define NVIDIA_GPU_CK804_ISA_BRIDGE_ISA_BRIDGE                                                                             0x0050  /* ISA Bridge */
#define NVIDIA_GPU_CK804_ISA_BRIDGE_ISA_BRIDGE_0051                                                                        0x0051  /* ISA Bridge */
#define NVIDIA_GPU_CK804_SMBUS                                                                                             0x0052  /* SMBus */
#define NVIDIA_GPU_CK804_IDE                                                                                               0x0053  /* IDE */
#define NVIDIA_GPU_CK804_SERIAL_ATA_CONTROLLER_SERIAL_ATA_CONTROLLER                                                       0x0054  /* Serial ATA Controller */
#define NVIDIA_GPU_CK804_SERIAL_ATA_CONTROLLER_SERIAL_ATA_CONTROLLER_0055                                                  0x0055  /* Serial ATA Controller */
#define NVIDIA_GPU_CK804_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER                                                           0x0056  /* Ethernet Controller */
#define NVIDIA_GPU_CK804_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER_0057                                                      0x0057  /* Ethernet Controller */
#define NVIDIA_GPU_CK804_AC97_MODEM                                                                                        0x0058  /* AC'97 Modem */
#define NVIDIA_GPU_CK804_AC97_AUDIO_CONTROLLER                                                                             0x0059  /* AC'97 Audio Controller */
#define NVIDIA_GPU_CK804_USB_CONTROLLER_USB_CONTROLLER                                                                     0x005a  /* USB Controller */
#define NVIDIA_GPU_CK804_USB_CONTROLLER_USB_CONTROLLER_005B                                                                0x005b  /* USB Controller */
#define NVIDIA_GPU_CK804_PCI_BRIDGE                                                                                        0x005c  /* PCI Bridge */
#define NVIDIA_GPU_CK804_PCIE_BRIDGE                                                                                       0x005d  /* PCIE Bridge */
#define NVIDIA_GPU_CK804_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                               0x005e  /* Memory Controller */
#define NVIDIA_GPU_CK804_MEMORY_CONTROLLER_MEMORY_CONTROLLER_005F                                                          0x005f  /* Memory Controller */
#define NVIDIA_GPU_NFORCE2_ISA_BRIDGE                                                                                      0x0060  /* ISA Bridge */
#define NVIDIA_GPU_NFORCE2_SMBUS_MCP                                                                                       0x0064  /* SMBus (MCP) */
#define NVIDIA_GPU_NFORCE2_IDE                                                                                             0x0065  /* IDE */
#define NVIDIA_GPU_NFORCE2_ETHERNET_CONTROLLER                                                                             0x0066  /* Ethernet Controller */
#define NVIDIA_GPU_NFORCE2_USB_CONTROLLER_USB_CONTROLLER                                                                   0x0067  /* USB Controller */
#define NVIDIA_GPU_NFORCE2_USB_CONTROLLER_USB_CONTROLLER_0068                                                              0x0068  /* USB Controller */
#define NVIDIA_GPU_NFORCE2_AC97_AUDIO_CONTROLLER_MCP                                                                       0x006a  /* AC97 Audio Controller (MCP) */
#define NVIDIA_GPU_NFORCE_AUDIO_PROCESSING_UNIT_AUDIO_PROCESSING_UNIT                                                      0x006b  /* Audio Processing Unit */
#define NVIDIA_GPU_NFORCE2_EXTERNAL_PCI_BRIDGE                                                                             0x006c  /* External PCI Bridge */
#define NVIDIA_GPU_NFORCE2_PCI_BRIDGE                                                                                      0x006d  /* PCI Bridge */
#define NVIDIA_GPU_NFORCE2_FIREWIRE_IEEE_1394_CONTROLLER                                                                   0x006e  /* FireWire (IEEE 1394) Controller */
#define NVIDIA_GPU_MCP2A_ISA_BRIDGE                                                                                        0x0080  /* ISA bridge */
#define NVIDIA_GPU_MCP2A_SMBUS                                                                                             0x0084  /* SMBus */
#define NVIDIA_GPU_MCP2A_IDE                                                                                               0x0085  /* IDE */
#define NVIDIA_GPU_MCP2A_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER                                                           0x0086  /* Ethernet Controller */
#define NVIDIA_GPU_MCP2A_USB_CONTROLLER_USB_CONTROLLER                                                                     0x0087  /* USB Controller */
#define NVIDIA_GPU_MCP2A_USB_CONTROLLER_USB_CONTROLLER_0088                                                                0x0088  /* USB Controller */
#define NVIDIA_GPU_MCP2S_AC97_AUDIO_CONTROLLER                                                                             0x008a  /* AC'97 Audio Controller */
#define NVIDIA_GPU_MCP2A_PCI_BRIDGE                                                                                        0x008b  /* PCI Bridge */
#define NVIDIA_GPU_MCP2A_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER_008C                                                      0x008c  /* Ethernet Controller */
#define NVIDIA_GPU_NFORCE2_SERIAL_ATA_CONTROLLER                                                                           0x008e  /* Serial ATA Controller */
#define NVIDIA_GPU_G70_GEFORCE_7800_GTX_GEFORCE_7800_GTX                                                                   0x0090  /* GeForce 7800 GTX */
#define NVIDIA_GPU_G70_GEFORCE_7800_GTX_GEFORCE_7800_GTX_0091                                                              0x0091  /* GeForce 7800 GTX */
#define NVIDIA_GPU_G70_GEFORCE_7800_GT                                                                                     0x0092  /* GeForce 7800 GT */
#define NVIDIA_GPU_G70_GEFORCE_7800_GS                                                                                     0x0093  /* GeForce 7800 GS */
#define NVIDIA_GPU_HIGH_DEFINITION_AUDIO                                                                                   0x0094  /* Definition Audio */
#define NVIDIA_GPU_G70_GEFORCE_7800_SLI                                                                                    0x0095  /* GeForce 7800 SLI */
#define NVIDIA_GPU_G70_GEFORCE_GTS_250                                                                                     0x0097  /* GeForce GTS 250 */
#define NVIDIA_GPU_G70M_GEFORCE_GO_7800                                                                                    0x0098  /* GeForce Go 7800 */
#define NVIDIA_GPU_G70M_GEFORCE_GO_7800_GTX                                                                                0x0099  /* GeForce Go 7800 GTX */
#define NVIDIA_GPU_G70GL_QUADRO_FX_4500                                                                                    0x009d  /* Quadro FX 4500 */
#define NVIDIA_GPU_NV0A_ALADDIN_TNT2_IGP                                                                                   0x00a0  /* Aladdin TNT2 IGP */
#define NVIDIA_GPU_NV41_GEFORCE_6800_GS                                                                                    0x00c0  /* GeForce 6800 GS */
#define NVIDIA_GPU_NV41_GEFORCE_6800                                                                                       0x00c1  /* GeForce 6800 */
#define NVIDIA_GPU_NV41_GEFORCE_6800_LE                                                                                    0x00c2  /* GeForce 6800 LE */
#define NVIDIA_GPU_NV41_GEFORCE_6800_XT                                                                                    0x00c3  /* GeForce 6800 XT */
#define NVIDIA_GPU_NV41_NV41_NV41                                                                                          0x00c5  /* NV41 */
#define NVIDIA_GPU_NV41_NV41_NV41_00C6                                                                                     0x00c6  /* NV41 */
#define NVIDIA_GPU_NV41_NV41_NV41_00C7                                                                                     0x00c7  /* NV41 */
#define NVIDIA_GPU_NV41M_GEFORCE_GO_6800                                                                                   0x00c8  /* GeForce Go 6800 */
#define NVIDIA_GPU_NV41M_GEFORCE_GO_6800_ULTRA                                                                             0x00c9  /* GeForce Go 6800 Ultra */
#define NVIDIA_GPU_NV41GLM_QUADRO_FX_GO1400                                                                                0x00cc  /* Quadro FX Go1400 */
#define NVIDIA_GPU_NV42GL_QUADRO_FX_3450_4000_SDI                                                                          0x00cd  /* Quadro FX 3450/4000 SDI */
#define NVIDIA_GPU_NV41GL_QUADRO_FX_1400                                                                                   0x00ce  /* Quadro FX 1400 */
#define NVIDIA_GPU_NV41_NV41_NV41_00CF                                                                                     0x00cf  /* NV41 */
#define NVIDIA_GPU_NFORCE3_LPC_BRIDGE                                                                                      0x00d0  /* LPC Bridge */
#define NVIDIA_GPU_NFORCE3_HOST_BRIDGE                                                                                     0x00d1  /* Host Bridge */
#define NVIDIA_GPU_NFORCE3_AGP_BRIDGE                                                                                      0x00d2  /* AGP Bridge */
#define NVIDIA_GPU_CK804_MEMORY_CONTROLLER_MEMORY_CONTROLLER_00D3                                                          0x00d3  /* Memory Controller */
#define NVIDIA_GPU_NFORCE3_SMBUS                                                                                           0x00d4  /* SMBus */
#define NVIDIA_GPU_NFORCE3_IDE                                                                                             0x00d5  /* IDE */
#define NVIDIA_GPU_NFORCE3_ETHERNET                                                                                        0x00d6  /* Ethernet */
#define NVIDIA_GPU_NFORCE3_USB_1_1                                                                                         0x00d7  /* USB 1.1 */
#define NVIDIA_GPU_NFORCE3_USB_2_0                                                                                         0x00d8  /* USB 2.0 */
#define NVIDIA_GPU_NFORCE3_AUDIO_AUDIO                                                                                     0x00d9  /* Audio */
#define NVIDIA_GPU_NFORCE3_AUDIO_AUDIO_00DA                                                                                0x00da  /* Audio */
#define NVIDIA_GPU_NFORCE3_PCI_BRIDGE                                                                                      0x00dd  /* PCI Bridge */
#define NVIDIA_GPU_CK8S_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER                                                            0x00df  /* Ethernet Controller */
#define NVIDIA_GPU_NFORCE3_250GB_LPC_BRIDGE                                                                                0x00e0  /* 250Gb LPC Bridge */
#define NVIDIA_GPU_NFORCE3_250GB_HOST_BRIDGE                                                                               0x00e1  /* 250Gb Host Bridge */
#define NVIDIA_GPU_NFORCE3_250GB_AGP_HOST_TO_PCI_BRIDGE                                                                    0x00e2  /* 250Gb AGP Host to PCI Bridge */
#define NVIDIA_GPU_NFORCE3_SERIAL_ATA_CONTROLLER                                                                           0x00e3  /* Serial ATA Controller */
#define NVIDIA_GPU_NFORCE_250GB_PCI_SYSTEM_MANAGEMENT                                                                      0x00e4  /* 250Gb PCI System Management */
#define NVIDIA_GPU_CK8S_PARALLEL_ATA_CONTROLLER_V2_5                                                                       0x00e5  /* Parallel ATA Controller (v2.5) */
#define NVIDIA_GPU_CK8S_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER_00E6                                                       0x00e6  /* Ethernet Controller */
#define NVIDIA_GPU_CK8S_USB_CONTROLLER                                                                                     0x00e7  /* USB Controller */
#define NVIDIA_GPU_NFORCE3_EHCI_USB_2_0_CONTROLLER                                                                         0x00e8  /* EHCI USB 2.0 Controller */
#define NVIDIA_GPU_NFORCE3_250GB_AC97_AUDIO_CONTROLLER                                                                     0x00ea  /* 250Gb AC'97 Audio Controller */
#define NVIDIA_GPU_NFORCE3_250GB_PCI_TO_PCI_BRIDGE                                                                         0x00ed  /* 250Gb PCI-to-PCI Bridge */
#define NVIDIA_GPU_NFORCE3_SERIAL_ATA_CONTROLLER_2                                                                         0x00ee  /* Serial ATA Controller 2 */
#define NVIDIA_GPU_NV43_GEFORCE_6600_GT_GEFORCE_6600_GT                                                                    0x00f1  /* GeForce 6600 GT */
#define NVIDIA_GPU_NV43_GEFORCE_6600_GEFORCE_6600                                                                          0x00f2  /* GeForce 6600 */
#define NVIDIA_GPU_NV43_GEFORCE_6200_GEFORCE_6200                                                                          0x00f3  /* GeForce 6200 */
#define NVIDIA_GPU_NV43_GEFORCE_6600_LE_GEFORCE_6600_LE                                                                    0x00f4  /* GeForce 6600 LE */
#define NVIDIA_GPU_G70_G71_GEFORCE_7800_GS_AGP                                                                             0x00f5  /* GeForce 7800 GS AGP */
#define NVIDIA_GPU_NV43_GEFORCE_6800_GS_XT                                                                                 0x00f6  /* GeForce 6800 GS/XT */
#define NVIDIA_GPU_NV45GL_QUADRO_FX_3400_4400                                                                              0x00f8  /* Quadro FX 3400/4400 */
#define NVIDIA_GPU_NV40_GEFORCE_6800_GT_GTO_ULTRA                                                                          0x00f9  /* GeForce 6800 GT/GTO/Ultra */
#define NVIDIA_GPU_NV39_GEFORCE_PCX_5750                                                                                   0x00fa  /* GeForce PCX 5750 */
#define NVIDIA_GPU_NV35_GEFORCE_PCX_5900                                                                                   0x00fb  /* GeForce PCX 5900 */
#define NVIDIA_GPU_NV37GL_QUADRO_FX_330_GEFORCE_PCX_5300                                                                   0x00fc  /* Quadro FX 330/GeForce PCX 5300 */
#define NVIDIA_GPU_NV37GL_QUADRO_PCI_E_SERIES                                                                              0x00fd  /* Quadro PCI-E Series */
#define NVIDIA_GPU_NV38GL_QUADRO_FX_1300                                                                                   0x00fe  /* Quadro FX 1300 */
#define NVIDIA_GPU_NV19_GEFORCE_PCX_4300                                                                                   0x00ff  /* GeForce PCX 4300 */
#define NVIDIA_GPU_NV10_GEFORCE_256_SDR                                                                                    0x0100  /* GeForce 256 SDR */
#define NVIDIA_GPU_NV10_GEFORCE_256_DDR                                                                                    0x0101  /* GeForce 256 DDR */
#define NVIDIA_GPU_NV10GL_QUADRO                                                                                           0x0103  /* Quadro */
#define NVIDIA_GPU_NV11_GEFORCE2_MX_MX_400                                                                                 0x0110  /* GeForce2 MX/MX 400 */
#define NVIDIA_GPU_NV11_GEFORCE2_MX200                                                                                     0x0111  /* GeForce2 MX200 */
#define NVIDIA_GPU_NV11M_GEFORCE2_GO                                                                                       0x0112  /* GeForce2 Go */
#define NVIDIA_GPU_NV11GL_QUADRO2_MXR_EX_GO                                                                                0x0113  /* Quadro2 MXR/EX/Go */
#define NVIDIA_GPU_NV43_GEFORCE_6600_GT_GEFORCE_6600_GT_0140                                                               0x0140  /* GeForce 6600 GT */
#define NVIDIA_GPU_NV43_GEFORCE_6600_GEFORCE_6600_0141                                                                     0x0141  /* GeForce 6600 */
#define NVIDIA_GPU_NV43_GEFORCE_6600_LE_GEFORCE_6600_LE_0142                                                               0x0142  /* GeForce 6600 LE */
#define NVIDIA_GPU_NV43_GEFORCE_6600_VE                                                                                    0x0143  /* GeForce 6600 VE */
#define NVIDIA_GPU_NV43M_GEFORCE_GO_6600_GEFORCE_GO_6600                                                                   0x0144  /* GeForce Go 6600 */
#define NVIDIA_GPU_NV43_GEFORCE_6610_XL                                                                                    0x0145  /* GeForce 6610 XL */
#define NVIDIA_GPU_NV43M_GEFORCE_GO6200_TE_6600_TE                                                                         0x0146  /* GeForce Go6200 TE / 6600 TE */
#define NVIDIA_GPU_NV43_GEFORCE_6700_XL                                                                                    0x0147  /* GeForce 6700 XL */
#define NVIDIA_GPU_NV43M_GEFORCE_GO_6600_GEFORCE_GO_6600_0148                                                              0x0148  /* GeForce Go 6600 */
#define NVIDIA_GPU_NV43M_GEFORCE_GO_6600_GT                                                                                0x0149  /* GeForce Go 6600 GT */
#define NVIDIA_GPU_NV43_QUADRO_NVS_440                                                                                     0x014a  /* Quadro NVS 440 */
#define NVIDIA_GPU_NV43_NV43                                                                                               0x014b  /* NV43 */
#define NVIDIA_GPU_NV43GL_QUADRO_FX_550                                                                                    0x014d  /* Quadro FX 550 */
#define NVIDIA_GPU_NV43GL_QUADRO_FX_540                                                                                    0x014e  /* Quadro FX 540 */
#define NVIDIA_GPU_NV43_GEFORCE_6200_GEFORCE_6200_014F                                                                     0x014f  /* GeForce 6200 */
#define NVIDIA_GPU_NV15_GEFORCE2_GTS_PRO                                                                                   0x0150  /* GeForce2 GTS/Pro */
#define NVIDIA_GPU_NV15_GEFORCE2_TI                                                                                        0x0151  /* GeForce2 Ti */
#define NVIDIA_GPU_NV15_GEFORCE2_ULTRA                                                                                     0x0152  /* GeForce2 Ultra */
#define NVIDIA_GPU_NV15GL_QUADRO2_PRO                                                                                      0x0153  /* Quadro2 Pro */
#define NVIDIA_GPU_NV44_GEFORCE_6500                                                                                       0x0160  /* GeForce 6500 */
#define NVIDIA_GPU_NV44_GEFORCE_6200_TURBOCACHE                                                                            0x0161  /* GeForce 6200 TurboCache */
#define NVIDIA_GPU_NV44_GEFORCE_6200_SE_TURBOCACHE                                                                         0x0162  /* GeForce 6200 SE TurboCache */
#define NVIDIA_GPU_NV44_GEFORCE_6200_LE                                                                                    0x0163  /* GeForce 6200 LE */
#define NVIDIA_GPU_NV44M_GEFORCE_GO_6200_GEFORCE_GO_6200                                                                   0x0164  /* GeForce Go 6200 */
#define NVIDIA_GPU_NV44_QUADRO_NVS_285                                                                                     0x0165  /* Quadro NVS 285 */
#define NVIDIA_GPU_NV44M_GEFORCE_GO_6400_GEFORCE_GO_6400                                                                   0x0166  /* GeForce Go 6400 */
#define NVIDIA_GPU_NV44M_GEFORCE_GO_6200_GEFORCE_GO_6200_0167                                                              0x0167  /* GeForce Go 6200 */
#define NVIDIA_GPU_NV44M_GEFORCE_GO_6400_GEFORCE_GO_6400_0168                                                              0x0168  /* GeForce Go 6400 */
#define NVIDIA_GPU_NV44_GEFORCE_6250                                                                                       0x0169  /* GeForce 6250 */
#define NVIDIA_GPU_NV44_GEFORCE_7100_GS                                                                                    0x016a  /* GeForce 7100 GS */
#define NVIDIA_GPU_NV44_NV44_NV44                                                                                          0x016d  /* NV44 */
#define NVIDIA_GPU_NV44_NV44_NV44_016E                                                                                     0x016e  /* NV44 */
#define NVIDIA_GPU_NV44_NV44_NV44_016F                                                                                     0x016f  /* NV44 */
#define NVIDIA_GPU_NV17_GEFORCE4_MX_460                                                                                    0x0170  /* GeForce4 MX 460 */
#define NVIDIA_GPU_NV17_GEFORCE4_MX_440                                                                                    0x0171  /* GeForce4 MX 440 */
#define NVIDIA_GPU_NV17_GEFORCE4_MX_420                                                                                    0x0172  /* GeForce4 MX 420 */
#define NVIDIA_GPU_NV17_GEFORCE4_MX_440_SE                                                                                 0x0173  /* GeForce4 MX 440-SE */
#define NVIDIA_GPU_NV17M_GEFORCE4_440_GO                                                                                   0x0174  /* GeForce4 440 Go */
#define NVIDIA_GPU_NV17M_GEFORCE4_420_GO                                                                                   0x0175  /* GeForce4 420 Go */
#define NVIDIA_GPU_NV17M_GEFORCE4_420_GO_32M                                                                               0x0176  /* GeForce4 420 Go 32M */
#define NVIDIA_GPU_NV17M_GEFORCE4_460_GO                                                                                   0x0177  /* GeForce4 460 Go */
#define NVIDIA_GPU_NV17GL_QUADRO4_550_XGL_QUADRO4_550_XGL                                                                  0x0178  /* Quadro4 550 XGL */
#define NVIDIA_GPU_NV17M_GEFORCE4_440_GO_64M                                                                               0x0179  /* GeForce4 440 Go 64M */
#define NVIDIA_GPU_NV17GL_QUADRO_NVS                                                                                       0x017a  /* Quadro NVS */
#define NVIDIA_GPU_NV17GL_QUADRO4_550_XGL_QUADRO4_550_XGL_017B                                                             0x017b  /* Quadro4 550 XGL */
#define NVIDIA_GPU_NV17GL_QUADRO4_500_GOGL                                                                                 0x017c  /* Quadro4 500 GoGL */
#define NVIDIA_GPU_NV17_NV17                                                                                               0x017f  /* NV17 */
#define NVIDIA_GPU_NV18_GEFORCE4_MX_440_AGP_8X                                                                             0x0181  /* GeForce4 MX 440 AGP 8x */
#define NVIDIA_GPU_NV18_GEFORCE4_MX_440SE_AGP_8X                                                                           0x0182  /* GeForce4 MX 440SE AGP 8x */
#define NVIDIA_GPU_NV18_GEFORCE4_MX_420_AGP_8X                                                                             0x0183  /* GeForce4 MX 420 AGP 8x */
#define NVIDIA_GPU_NV18_GEFORCE4_MX                                                                                        0x0184  /* GeForce4 MX */
#define NVIDIA_GPU_NV18_GEFORCE4_MX_4000                                                                                   0x0185  /* GeForce4 MX 4000 */
#define NVIDIA_GPU_NV18M_GEFORCE4_448_GO_GEFORCE4_448_GO                                                                   0x0186  /* GeForce4 448 Go */
#define NVIDIA_GPU_NV18M_GEFORCE4_488_GO                                                                                   0x0187  /* GeForce4 488 Go */
#define NVIDIA_GPU_NV18GL_QUADRO4_580_XGL                                                                                  0x0188  /* Quadro4 580 XGL */
#define NVIDIA_GPU_NV18_GEFORCE4_MX_WITH_AGP8X_MAC                                                                         0x0189  /* GeForce4 MX with AGP8X (Mac) */
#define NVIDIA_GPU_NV18GL_QUADRO_NVS_280_SD                                                                                0x018a  /* Quadro NVS 280 SD */
#define NVIDIA_GPU_NV18GL_QUADRO4_380_XGL                                                                                  0x018b  /* Quadro4 380 XGL */
#define NVIDIA_GPU_NV18GL_QUADRO_NVS_50_PCI                                                                                0x018c  /* Quadro NVS 50 PCI */
#define NVIDIA_GPU_NV18M_GEFORCE4_448_GO_GEFORCE4_448_GO_018D                                                              0x018d  /* GeForce4 448 Go */
#define NVIDIA_GPU_G80_GEFORCE_8800_GTS_8800_GTX                                                                           0x0190  /* GeForce 8800 GTS / 8800 GTX */
#define NVIDIA_GPU_G80_GEFORCE_8800_GTX                                                                                    0x0191  /* GeForce 8800 GTX */
#define NVIDIA_GPU_G80_GEFORCE_8800_GTS_GEFORCE_8800_GTS                                                                   0x0192  /* GeForce 8800 GTS */
#define NVIDIA_GPU_G80_GEFORCE_8800_GTS_GEFORCE_8800_GTS_0193                                                              0x0193  /* GeForce 8800 GTS */
#define NVIDIA_GPU_G80_GEFORCE_8800_ULTRA                                                                                  0x0194  /* GeForce 8800 Ultra */
#define NVIDIA_GPU_G80GL_TESLA_C870                                                                                        0x0197  /* Tesla C870 */
#define NVIDIA_GPU_G80GL_QUADRO_FX_5600                                                                                    0x019d  /* Quadro FX 5600 */
#define NVIDIA_GPU_G80GL_QUADRO_FX_4600                                                                                    0x019e  /* Quadro FX 4600 */
#define NVIDIA_GPU_NFORCE_220_420_NV1A_GEFORCE2_MX                                                                         0x01a0  /* 220/420 NV1A [GeForce2 MX] */
#define NVIDIA_GPU_NFORCE_CPU_BRIDGE                                                                                       0x01a4  /* CPU bridge */
#define NVIDIA_GPU_NFORCE_420_MEMORY_CONTROLLER_DDR                                                                        0x01ab  /* 420 Memory Controller (DDR) */
#define NVIDIA_GPU_NFORCE_220_420_MEMORY_CONTROLLER_220_420_MEMORY_CONTROLLER                                              0x01ac  /* 220/420 Memory Controller */
#define NVIDIA_GPU_NFORCE_220_420_MEMORY_CONTROLLER_220_420_MEMORY_CONTROLLER_01AD                                         0x01ad  /* 220/420 Memory Controller */
#define NVIDIA_GPU_NFORCE_AUDIO_PROCESSING_UNIT_AUDIO_PROCESSING_UNIT_01B0                                                 0x01b0  /* Audio Processing Unit */
#define NVIDIA_GPU_NFORCE_AC97_AUDIO_CONTROLLER                                                                            0x01b1  /* AC'97 Audio Controller */
#define NVIDIA_GPU_NFORCE_ISA_BRIDGE                                                                                       0x01b2  /* ISA Bridge */
#define NVIDIA_GPU_NFORCE_PCI_SYSTEM_MANAGEMENT                                                                            0x01b4  /* PCI System Management */
#define NVIDIA_GPU_NFORCE_AGP_TO_PCI_BRIDGE                                                                                0x01b7  /* AGP to PCI Bridge */
#define NVIDIA_GPU_NFORCE_PCI_TO_PCI_BRIDGE                                                                                0x01b8  /* PCI-to-PCI bridge */
#define NVIDIA_GPU_NFORCE_IDE                                                                                              0x01bc  /* IDE */
#define NVIDIA_GPU_NFORCE_AC97_MODEM_CONTROLLER                                                                            0x01c1  /* AC'97 Modem Controller */
#define NVIDIA_GPU_NFORCE_USB_CONTROLLER                                                                                   0x01c2  /* USB Controller */
#define NVIDIA_GPU_NFORCE_ETHERNET_CONTROLLER                                                                              0x01c3  /* Ethernet Controller */
#define NVIDIA_GPU_G72_GEFORCE_7350_LE                                                                                     0x01d0  /* GeForce 7350 LE */
#define NVIDIA_GPU_G72_GEFORCE_7300_LE                                                                                     0x01d1  /* GeForce 7300 LE */
#define NVIDIA_GPU_G72_GEFORCE_7550_LE                                                                                     0x01d2  /* GeForce 7550 LE */
#define NVIDIA_GPU_G72_GEFORCE_7200_GS_7300_SE                                                                             0x01d3  /* GeForce 7200 GS / 7300 SE */
#define NVIDIA_GPU_G72_G72                                                                                                 0x01d5  /* G72 */
#define NVIDIA_GPU_G72M_GEFORCE_GO_7200                                                                                    0x01d6  /* GeForce Go 7200 */
#define NVIDIA_GPU_G72M_QUADRO_NVS_110M_GEFORCE_GO_7300                                                                    0x01d7  /* Quadro NVS 110M/GeForce Go 7300 */
#define NVIDIA_GPU_G72M_GEFORCE_GO_7400                                                                                    0x01d8  /* GeForce Go 7400 */
#define NVIDIA_GPU_G72M_GEFORCE_GO_7450                                                                                    0x01d9  /* GeForce Go 7450 */
#define NVIDIA_GPU_G72M_QUADRO_NVS_110M                                                                                    0x01da  /* Quadro NVS 110M */
#define NVIDIA_GPU_G72M_QUADRO_NVS_120M                                                                                    0x01db  /* Quadro NVS 120M */
#define NVIDIA_GPU_G72GLM_QUADRO_FX_350M                                                                                   0x01dc  /* Quadro FX 350M */
#define NVIDIA_GPU_G72_GEFORCE_7500_LE                                                                                     0x01dd  /* GeForce 7500 LE */
#define NVIDIA_GPU_G72GL_QUADRO_FX_350                                                                                     0x01de  /* Quadro FX 350 */
#define NVIDIA_GPU_G72_GEFORCE_7300_GS                                                                                     0x01df  /* GeForce 7300 GS */
#define NVIDIA_GPU_NFORCE2_IGP2                                                                                            0x01e0  /* IGP2 */
#define NVIDIA_GPU_NFORCE2_AGP                                                                                             0x01e8  /* AGP */
#define NVIDIA_GPU_NFORCE2_MEMORY_CONTROLLER_0                                                                             0x01ea  /* Memory Controller 0 */
#define NVIDIA_GPU_NFORCE2_MEMORY_CONTROLLER_1                                                                             0x01eb  /* Memory Controller 1 */
#define NVIDIA_GPU_NFORCE2_MEMORY_CONTROLLER_2                                                                             0x01ec  /* Memory Controller 2 */
#define NVIDIA_GPU_NFORCE2_MEMORY_CONTROLLER_3                                                                             0x01ed  /* Memory Controller 3 */
#define NVIDIA_GPU_NFORCE2_MEMORY_CONTROLLER_4                                                                             0x01ee  /* Memory Controller 4 */
#define NVIDIA_GPU_NFORCE2_MEMORY_CONTROLLER_5                                                                             0x01ef  /* Memory Controller 5 */
#define NVIDIA_GPU_NV1F_C17_GEFORCE4_MX_IGP                                                                                0x01f0  /* C17 [GeForce4 MX IGP] */
#define NVIDIA_GPU_NV20_GEFORCE3                                                                                           0x0200  /* GeForce3 */
#define NVIDIA_GPU_NV20_GEFORCE3_TI_200                                                                                    0x0201  /* GeForce3 Ti 200 */
#define NVIDIA_GPU_NV20_GEFORCE3_TI_500                                                                                    0x0202  /* GeForce3 Ti 500 */
#define NVIDIA_GPU_NV20GL_QUADRO_DCC                                                                                       0x0203  /* Quadro DCC */
#define NVIDIA_GPU_NV48_GEFORCE_6800                                                                                       0x0211  /* GeForce 6800 */
#define NVIDIA_GPU_NV48_GEFORCE_6800_LE                                                                                    0x0212  /* GeForce 6800 LE */
#define NVIDIA_GPU_NV48_GEFORCE_6800_GT                                                                                    0x0215  /* GeForce 6800 GT */
#define NVIDIA_GPU_NV48_GEFORCE_6800_XT                                                                                    0x0218  /* GeForce 6800 XT */
#define NVIDIA_GPU_NV44A_GEFORCE_6200                                                                                      0x0221  /* GeForce 6200 */
#define NVIDIA_GPU_NV44_GEFORCE_6200_A_LE                                                                                  0x0222  /* GeForce 6200 A-LE */
#define NVIDIA_GPU_NV44_NV44_NV44_0224                                                                                     0x0224  /* NV44 */
#define NVIDIA_GPU_C51PV_GEFORCE_6150                                                                                      0x0240  /* GeForce 6150 */
#define NVIDIA_GPU_C51_GEFORCE_6150_LE                                                                                     0x0241  /* GeForce 6150 LE */
#define NVIDIA_GPU_C51G_GEFORCE_6100                                                                                       0x0242  /* GeForce 6100 */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE                                                               0x0243  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_GEFORCE_GO_6150                                                                                     0x0244  /* GeForce Go 6150 */
#define NVIDIA_GPU_C51_QUADRO_NVS_210S_GEFORCE_6150LE                                                                      0x0245  /* Quadro NVS 210S/GeForce 6150LE */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0246                                                          0x0246  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_GEFORCE_GO_6100                                                                                     0x0247  /* GeForce Go 6100 */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0248                                                          0x0248  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0249                                                          0x0249  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_024A                                                          0x024a  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_024B                                                          0x024b  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_024C                                                          0x024c  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_024D                                                          0x024d  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_024E                                                          0x024e  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_024F                                                          0x024f  /* PCI Express Bridge */
#define NVIDIA_GPU_NV25_GEFORCE4_TI_4600                                                                                   0x0250  /* GeForce4 Ti 4600 */
#define NVIDIA_GPU_NV25_GEFORCE4_TI_4400                                                                                   0x0251  /* GeForce4 Ti 4400 */
#define NVIDIA_GPU_NV25_GEFORCE4_TI                                                                                        0x0252  /* GeForce4 Ti */
#define NVIDIA_GPU_NV25_GEFORCE4_TI_4200                                                                                   0x0253  /* GeForce4 Ti 4200 */
#define NVIDIA_GPU_NV25GL_QUADRO4_900_XGL                                                                                  0x0258  /* Quadro4 900 XGL */
#define NVIDIA_GPU_NV25GL_QUADRO4_750_XGL                                                                                  0x0259  /* Quadro4 750 XGL */
#define NVIDIA_GPU_NV25GL_QUADRO4_700_XGL                                                                                  0x025b  /* Quadro4 700 XGL */
#define NVIDIA_GPU_MCP51_LPC_BRIDGE_LPC_BRIDGE                                                                             0x0260  /* LPC Bridge */
#define NVIDIA_GPU_MCP51_LPC_BRIDGE_LPC_BRIDGE_0261                                                                        0x0261  /* LPC Bridge */
#define NVIDIA_GPU_MCP51_LPC_BRIDGE_LPC_BRIDGE_0262                                                                        0x0262  /* LPC Bridge */
#define NVIDIA_GPU_MCP51_LPC_BRIDGE_LPC_BRIDGE_0263                                                                        0x0263  /* LPC Bridge */
#define NVIDIA_GPU_MCP51_SMBUS                                                                                             0x0264  /* SMBus */
#define NVIDIA_GPU_MCP51_IDE                                                                                               0x0265  /* IDE */
#define NVIDIA_GPU_MCP51_SERIAL_ATA_CONTROLLER_SERIAL_ATA_CONTROLLER                                                       0x0266  /* Serial ATA Controller */
#define NVIDIA_GPU_MCP51_SERIAL_ATA_CONTROLLER_SERIAL_ATA_CONTROLLER_0267                                                  0x0267  /* Serial ATA Controller */
#define NVIDIA_GPU_MCP51_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER                                                           0x0268  /* Ethernet Controller */
#define NVIDIA_GPU_MCP51_ETHERNET_CONTROLLER_ETHERNET_CONTROLLER_0269                                                      0x0269  /* Ethernet Controller */
#define NVIDIA_GPU_MCP51_MCI                                                                                               0x026a  /* MCI */
#define NVIDIA_GPU_MCP51_AC97_AUDIO_CONTROLLER                                                                             0x026b  /* AC97 Audio Controller */
#define NVIDIA_GPU_MCP51_HIGH_DEFINITION_AUDIO                                                                             0x026c  /* High Definition Audio */
#define NVIDIA_GPU_MCP51_USB_CONTROLLER_USB_CONTROLLER                                                                     0x026d  /* USB Controller */
#define NVIDIA_GPU_MCP51_USB_CONTROLLER_USB_CONTROLLER_026E                                                                0x026e  /* USB Controller */
#define NVIDIA_GPU_MCP51_PCI_BRIDGE                                                                                        0x026f  /* PCI Bridge */
#define NVIDIA_GPU_MCP51_HOST_BRIDGE                                                                                       0x0270  /* Host Bridge */
#define NVIDIA_GPU_MCP51_PMU                                                                                               0x0271  /* PMU */
#define NVIDIA_GPU_MCP51_MEMORY_CONTROLLER_0                                                                               0x0272  /* Memory Controller 0 */
#define NVIDIA_GPU_C51_MEMORY_CONTROLLER_2                                                                                 0x027e  /* Memory Controller 2 */
#define NVIDIA_GPU_C51_MEMORY_CONTROLLER_3                                                                                 0x027f  /* Memory Controller 3 */
#define NVIDIA_GPU_NV28_GEFORCE4_TI_4800                                                                                   0x0280  /* GeForce4 Ti 4800 */
#define NVIDIA_GPU_NV28_GEFORCE4_TI_4200_AGP_8X                                                                            0x0281  /* GeForce4 Ti 4200 AGP 8x */
#define NVIDIA_GPU_NV28_GEFORCE4_TI_4800_SE                                                                                0x0282  /* GeForce4 Ti 4800 SE */
#define NVIDIA_GPU_NV28M_GEFORCE4_TI_4200_GO_AGP_8X                                                                        0x0286  /* GeForce4 Ti 4200 Go AGP 8x */
#define NVIDIA_GPU_NV28GL_QUADRO4_980_XGL                                                                                  0x0288  /* Quadro4 980 XGL */
#define NVIDIA_GPU_NV28GL_QUADRO4_780_XGL                                                                                  0x0289  /* Quadro4 780 XGL */
#define NVIDIA_GPU_NV28GLM_QUADRO4_GO700                                                                                   0x028c  /* Quadro4 Go700 */
#define NVIDIA_GPU_G71_GEFORCE_7900_GTX                                                                                    0x0290  /* GeForce 7900 GTX */
#define NVIDIA_GPU_G71_GEFORCE_7900_GT_GTO                                                                                 0x0291  /* GeForce 7900 GT/GTO */
#define NVIDIA_GPU_G71_GEFORCE_7900_GS                                                                                     0x0292  /* GeForce 7900 GS */
#define NVIDIA_GPU_G71_GEFORCE_7900_GX2                                                                                    0x0293  /* GeForce 7900 GX2 */
#define NVIDIA_GPU_G71_GEFORCE_7950_GX2                                                                                    0x0294  /* GeForce 7950 GX2 */
#define NVIDIA_GPU_G71_GEFORCE_7950_GT                                                                                     0x0295  /* GeForce 7950 GT */
#define NVIDIA_GPU_G71M_GEFORCE_GO_7950_GTX                                                                                0x0297  /* GeForce Go 7950 GTX */
#define NVIDIA_GPU_G71M_GEFORCE_GO_7900_GS                                                                                 0x0298  /* GeForce Go 7900 GS */
#define NVIDIA_GPU_G71M_GEFORCE_GO_7900_GTX                                                                                0x0299  /* GeForce Go 7900 GTX */
#define NVIDIA_GPU_G71GLM_QUADRO_FX_2500M                                                                                  0x029a  /* Quadro FX 2500M */
#define NVIDIA_GPU_G71GLM_QUADRO_FX_1500M                                                                                  0x029b  /* Quadro FX 1500M */
#define NVIDIA_GPU_G71GL_QUADRO_FX_5500                                                                                    0x029c  /* Quadro FX 5500 */
#define NVIDIA_GPU_G71GL_QUADRO_FX_3500                                                                                    0x029d  /* Quadro FX 3500 */
#define NVIDIA_GPU_G71GL_QUADRO_FX_1500                                                                                    0x029e  /* Quadro FX 1500 */
#define NVIDIA_GPU_G71GL_QUADRO_FX_4500_X2                                                                                 0x029f  /* Quadro FX 4500 X2 */
#define NVIDIA_GPU_NV2A_XGPU                                                                                               0x02a0  /* XGPU */
#define NVIDIA_GPU_MCPX_CPU_BRIDGE                                                                                         0x02a5  /* CPU Bridge */
#define NVIDIA_GPU_MCPX_MEMORY_CONTROLLER                                                                                  0x02a6  /* Memory Controller */
#define NVIDIA_GPU_G73_GEFORCE_7600_GT_AGP                                                                                 0x02e0  /* GeForce 7600 GT AGP */
#define NVIDIA_GPU_G73_GEFORCE_7600_GS_AGP                                                                                 0x02e1  /* GeForce 7600 GS AGP */
#define NVIDIA_GPU_G73_GEFORCE_7300_GT_AGP                                                                                 0x02e2  /* GeForce 7300 GT AGP */
#define NVIDIA_GPU_G71_GEFORCE_7900_GS_AGP                                                                                 0x02e3  /* GeForce 7900 GS AGP */
#define NVIDIA_GPU_G71_GEFORCE_7950_GT_AGP                                                                                 0x02e4  /* GeForce 7950 GT AGP */
#define NVIDIA_GPU_G71_GEFORCE_7600_GS_AGP                                                                                 0x02e5  /* GeForce 7600 GS AGP */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE                                                                             0x02f0  /* Host Bridge */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE_02F1                                                                        0x02f1  /* Host Bridge */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE_02F2                                                                        0x02f2  /* Host Bridge */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE_02F3                                                                        0x02f3  /* Host Bridge */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE_02F4                                                                        0x02f4  /* Host Bridge */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE_02F5                                                                        0x02f5  /* Host Bridge */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE_02F6                                                                        0x02f6  /* Host Bridge */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE_02F7                                                                        0x02f7  /* Host Bridge */
#define NVIDIA_GPU_C51_MEMORY_CONTROLLER_5                                                                                 0x02f8  /* Memory Controller 5 */
#define NVIDIA_GPU_C51_MEMORY_CONTROLLER_4                                                                                 0x02f9  /* Memory Controller 4 */
#define NVIDIA_GPU_C51_MEMORY_CONTROLLER_0                                                                                 0x02fa  /* Memory Controller 0 */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_02FB                                                          0x02fb  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_02FC                                                          0x02fc  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_02FD                                                          0x02fd  /* PCI Express Bridge */
#define NVIDIA_GPU_C51_MEMORY_CONTROLLER_1                                                                                 0x02fe  /* Memory Controller 1 */
#define NVIDIA_GPU_C51_HOST_BRIDGE_HOST_BRIDGE_02FF                                                                        0x02ff  /* Host Bridge */
#define NVIDIA_GPU_NV30_GEFORCE_FX                                                                                         0x0300  /* GeForce FX */
#define NVIDIA_GPU_NV30_GEFORCE_FX_5800_ULTRA                                                                              0x0301  /* GeForce FX 5800 Ultra */
#define NVIDIA_GPU_NV30_GEFORCE_FX_5800                                                                                    0x0302  /* GeForce FX 5800 */
#define NVIDIA_GPU_NV30GL_QUADRO_FX_2000                                                                                   0x0308  /* Quadro FX 2000 */
#define NVIDIA_GPU_NV30GL_QUADRO_FX_1000                                                                                   0x0309  /* Quadro FX 1000 */
#define NVIDIA_GPU_NV31_GEFORCE_FX_5600_ULTRA                                                                              0x0311  /* GeForce FX 5600 Ultra */
#define NVIDIA_GPU_NV31_GEFORCE_FX_5600                                                                                    0x0312  /* GeForce FX 5600 */
#define NVIDIA_GPU_NV31_GEFORCE_FX_5600XT                                                                                  0x0314  /* GeForce FX 5600XT */
#define NVIDIA_GPU_NV31M_NV31M                                                                                             0x0316  /* NV31M */
#define NVIDIA_GPU_NV31GL_NV31GL                                                                                           0x0318  /* NV31GL */
#define NVIDIA_GPU_NV31M_GEFORCE_FX_GO5600                                                                                 0x031a  /* GeForce FX Go5600 */
#define NVIDIA_GPU_NV31M_GEFORCE_FX_GO5650                                                                                 0x031b  /* GeForce FX Go5650 */
#define NVIDIA_GPU_NV31GLM_QUADRO_FX_GO700                                                                                 0x031c  /* Quadro FX Go700 */
#define NVIDIA_GPU_NV34_GEFORCE_FX_5200_GEFORCE_FX_5200                                                                    0x0320  /* GeForce FX 5200 */
#define NVIDIA_GPU_NV34_GEFORCE_FX_5200_ULTRA                                                                              0x0321  /* GeForce FX 5200 Ultra */
#define NVIDIA_GPU_NV34_GEFORCE_FX_5200_GEFORCE_FX_5200_0322                                                               0x0322  /* GeForce FX 5200 */
#define NVIDIA_GPU_NV34_GEFORCE_FX_5200LE                                                                                  0x0323  /* GeForce FX 5200LE */
#define NVIDIA_GPU_NV34M_GEFORCE_FX_GO5200_64M                                                                             0x0324  /* GeForce FX Go5200 64M */
#define NVIDIA_GPU_NV34M_GEFORCE_FX_GO5250                                                                                 0x0325  /* GeForce FX Go5250 */
#define NVIDIA_GPU_NV34_GEFORCE_FX_5500                                                                                    0x0326  /* GeForce FX 5500 */
#define NVIDIA_GPU_NV34_GEFORCE_FX_5100                                                                                    0x0327  /* GeForce FX 5100 */
#define NVIDIA_GPU_NV34M_GEFORCE_FX_GO5200_32M_64M                                                                         0x0328  /* GeForce FX Go5200 32M/64M */
#define NVIDIA_GPU_NV34M_GEFORCE_FX_GO5200                                                                                 0x0329  /* GeForce FX Go5200 */
#define NVIDIA_GPU_NV34GL_QUADRO_NVS_280_PCI                                                                               0x032a  /* Quadro NVS 280 PCI */
#define NVIDIA_GPU_NV34GL_QUADRO_FX_500_600_PCI                                                                            0x032b  /* Quadro FX 500/600 PCI */
#define NVIDIA_GPU_NV34M_GEFORCE_FX_GO5300_GO5350                                                                          0x032c  /* GeForce FX Go5300 / Go5350 */
#define NVIDIA_GPU_NV34M_GEFORCE_FX_GO5100                                                                                 0x032d  /* GeForce FX Go5100 */
#define NVIDIA_GPU_NV34_NV34                                                                                               0x032e  /* NV34 */
#define NVIDIA_GPU_NV34_GEFORCE_FX_5200_GEFORCE_FX_5200_032F                                                               0x032f  /* GeForce FX 5200 */
#define NVIDIA_GPU_NV35_GEFORCE_FX_5900_ULTRA                                                                              0x0330  /* GeForce FX 5900 Ultra */
#define NVIDIA_GPU_NV35_GEFORCE_FX_5900                                                                                    0x0331  /* GeForce FX 5900 */
#define NVIDIA_GPU_NV35_GEFORCE_FX_5900XT                                                                                  0x0332  /* GeForce FX 5900XT */
#define NVIDIA_GPU_NV38_GEFORCE_FX_5950_ULTRA                                                                              0x0333  /* GeForce FX 5950 Ultra */
#define NVIDIA_GPU_NV35_GEFORCE_FX_5900ZT                                                                                  0x0334  /* GeForce FX 5900ZT */
#define NVIDIA_GPU_NV35GL_QUADRO_FX_3000                                                                                   0x0338  /* Quadro FX 3000 */
#define NVIDIA_GPU_NV35GL_QUADRO_FX_700                                                                                    0x033f  /* Quadro FX 700 */
#define NVIDIA_GPU_NV36_GEFORCE_FX_5700_ULTRA                                                                              0x0341  /* GeForce FX 5700 Ultra */
#define NVIDIA_GPU_NV36_GEFORCE_FX_5700                                                                                    0x0342  /* GeForce FX 5700 */
#define NVIDIA_GPU_NV36_GEFORCE_FX_5700LE                                                                                  0x0343  /* GeForce FX 5700LE */
#define NVIDIA_GPU_NV36_GEFORCE_FX_5700VE                                                                                  0x0344  /* GeForce FX 5700VE */
#define NVIDIA_GPU_NV36M_GEFORCE_FX_GO5700_GEFORCE_FX_GO5700                                                               0x0347  /* GeForce FX Go5700 */
#define NVIDIA_GPU_NV36M_GEFORCE_FX_GO5700_GEFORCE_FX_GO5700_0348                                                          0x0348  /* GeForce FX Go5700 */
#define NVIDIA_GPU_NV36_QUADRO_FX_GO1000                                                                                   0x034c  /* Quadro FX Go1000 */
#define NVIDIA_GPU_NV36_NV36                                                                                               0x034d  /* NV36 */
#define NVIDIA_GPU_NV36GL_QUADRO_FX_1100                                                                                   0x034e  /* Quadro FX 1100 */
#define NVIDIA_GPU_MCP55_LPC_BRIDGE_LPC_BRIDGE                                                                             0x0360  /* LPC Bridge */
#define NVIDIA_GPU_MCP55_LPC_BRIDGE_LPC_BRIDGE_0361                                                                        0x0361  /* LPC Bridge */
#define NVIDIA_GPU_MCP55_LPC_BRIDGE_LPC_BRIDGE_0362                                                                        0x0362  /* LPC Bridge */
#define NVIDIA_GPU_MCP55_LPC_BRIDGE_LPC_BRIDGE_0363                                                                        0x0363  /* LPC Bridge */
#define NVIDIA_GPU_MCP55_LPC_BRIDGE_LPC_BRIDGE_0364                                                                        0x0364  /* LPC Bridge */
#define NVIDIA_GPU_MCP55_LPC_BRIDGE_LPC_BRIDGE_0365                                                                        0x0365  /* LPC Bridge */
#define NVIDIA_GPU_MCP55_LPC_BRIDGE_LPC_BRIDGE_0366                                                                        0x0366  /* LPC Bridge */
#define NVIDIA_GPU_MCP55_LPC_BRIDGE_LPC_BRIDGE_0367                                                                        0x0367  /* LPC Bridge */
#define NVIDIA_GPU_MCP55_SMBUS_CONTROLLER                                                                                  0x0368  /* SMBus Controller */
#define NVIDIA_GPU_MCP55_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                               0x0369  /* Memory Controller */
#define NVIDIA_GPU_MCP55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_036A                                                          0x036a  /* Memory Controller */
#define NVIDIA_GPU_MCP55_SMU                                                                                               0x036b  /* SMU */
#define NVIDIA_GPU_MCP55_USB_CONTROLLER_USB_CONTROLLER                                                                     0x036c  /* USB Controller */
#define NVIDIA_GPU_MCP55_USB_CONTROLLER_USB_CONTROLLER_036D                                                                0x036d  /* USB Controller */
#define NVIDIA_GPU_MCP55_IDE                                                                                               0x036e  /* IDE */
#define NVIDIA_GPU_MCP55_PCI_BRIDGE                                                                                        0x0370  /* PCI bridge */
#define NVIDIA_GPU_MCP55_HIGH_DEFINITION_AUDIO                                                                             0x0371  /* High Definition Audio */
#define NVIDIA_GPU_MCP55_ETHERNET_ETHERNET                                                                                 0x0372  /* Ethernet */
#define NVIDIA_GPU_MCP55_ETHERNET_ETHERNET_0373                                                                            0x0373  /* Ethernet */
#define NVIDIA_GPU_MCP55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE                                                             0x0374  /* PCI Express bridge */
#define NVIDIA_GPU_MCP55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0375                                                        0x0375  /* PCI Express bridge */
#define NVIDIA_GPU_MCP55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0376                                                        0x0376  /* PCI Express bridge */
#define NVIDIA_GPU_MCP55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0377                                                        0x0377  /* PCI Express bridge */
#define NVIDIA_GPU_MCP55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0378                                                        0x0378  /* PCI Express bridge */
#define NVIDIA_GPU_MCP55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_037A                                                          0x037a  /* Memory Controller */
#define NVIDIA_GPU_MCP55_SATA_CONTROLLER_SATA_CONTROLLER                                                                   0x037e  /* SATA Controller */
#define NVIDIA_GPU_MCP55_SATA_CONTROLLER_SATA_CONTROLLER_037F                                                              0x037f  /* SATA Controller */
#define NVIDIA_GPU_G73_GEFORCE_7650_GS_GEFORCE_7650_GS                                                                     0x038b  /* GeForce 7650 GS */
#define NVIDIA_GPU_G73_GEFORCE_7650_GS_GEFORCE_7650_GS_0390                                                                0x0390  /* GeForce 7650 GS */
#define NVIDIA_GPU_G73_GEFORCE_7600_GT                                                                                     0x0391  /* GeForce 7600 GT */
#define NVIDIA_GPU_G73_GEFORCE_7600_GS                                                                                     0x0392  /* GeForce 7600 GS */
#define NVIDIA_GPU_G73_GEFORCE_7300_GT_GEFORCE_7300_GT                                                                     0x0393  /* GeForce 7300 GT */
#define NVIDIA_GPU_G73_GEFORCE_7600_LE                                                                                     0x0394  /* GeForce 7600 LE */
#define NVIDIA_GPU_G73_GEFORCE_7300_GT_GEFORCE_7300_GT_0395                                                                0x0395  /* GeForce 7300 GT */
#define NVIDIA_GPU_G73_G73_G73                                                                                             0x0396  /* G73 */
#define NVIDIA_GPU_G73M_GEFORCE_GO_7700                                                                                    0x0397  /* GeForce Go 7700 */
#define NVIDIA_GPU_G73M_GEFORCE_GO_7600                                                                                    0x0398  /* GeForce Go 7600 */
#define NVIDIA_GPU_G73M_GEFORCE_GO_7600_GT                                                                                 0x0399  /* GeForce Go 7600 GT */
#define NVIDIA_GPU_G73M_QUADRO_NVS_300M                                                                                    0x039a  /* Quadro NVS 300M */
#define NVIDIA_GPU_G73M_GEFORCE_GO_7900_SE                                                                                 0x039b  /* GeForce Go 7900 SE */
#define NVIDIA_GPU_G73GLM_QUADRO_FX_550M                                                                                   0x039c  /* Quadro FX 550M */
#define NVIDIA_GPU_G73_G73_G73_039D                                                                                        0x039d  /* G73 */
#define NVIDIA_GPU_G73GL_QUADRO_FX_560                                                                                     0x039e  /* Quadro FX 560 */
#define NVIDIA_GPU_G73_G73_G73_039F                                                                                        0x039f  /* G73 */
#define NVIDIA_GPU_C55_HOST_BRIDGE_HOST_BRIDGE                                                                             0x03a0  /* Host Bridge */
#define NVIDIA_GPU_C55_HOST_BRIDGE_HOST_BRIDGE_03A1                                                                        0x03a1  /* Host Bridge */
#define NVIDIA_GPU_C55_HOST_BRIDGE_HOST_BRIDGE_03A2                                                                        0x03a2  /* Host Bridge */
#define NVIDIA_GPU_C55_HOST_BRIDGE_HOST_BRIDGE_03A3                                                                        0x03a3  /* Host Bridge */
#define NVIDIA_GPU_C55_HOST_BRIDGE_HOST_BRIDGE_03A4                                                                        0x03a4  /* Host Bridge */
#define NVIDIA_GPU_C55_HOST_BRIDGE_HOST_BRIDGE_03A5                                                                        0x03a5  /* Host Bridge */
#define NVIDIA_GPU_C55_HOST_BRIDGE_HOST_BRIDGE_03A6                                                                        0x03a6  /* Host Bridge */
#define NVIDIA_GPU_C55_HOST_BRIDGE_HOST_BRIDGE_03A7                                                                        0x03a7  /* Host Bridge */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                                 0x03a8  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03A9                                                            0x03a9  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03AA                                                            0x03aa  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03AB                                                            0x03ab  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03AC                                                            0x03ac  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03AD                                                            0x03ad  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03AE                                                            0x03ae  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03AF                                                            0x03af  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03B0                                                            0x03b0  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03B1                                                            0x03b1  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03B2                                                            0x03b2  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03B3                                                            0x03b3  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03B4                                                            0x03b4  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03B5                                                            0x03b5  /* Memory Controller */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03B6                                                            0x03b6  /* Memory Controller */
#define NVIDIA_GPU_C55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE                                                               0x03b7  /* PCI Express bridge */
#define NVIDIA_GPU_C55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_03B8                                                          0x03b8  /* PCI Express bridge */
#define NVIDIA_GPU_C55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_03B9                                                          0x03b9  /* PCI Express bridge */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03BA                                                            0x03ba  /* Memory Controller */
#define NVIDIA_GPU_C55_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_03BB                                                          0x03bb  /* PCI Express bridge */
#define NVIDIA_GPU_C55_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03BC                                                            0x03bc  /* Memory Controller */
#define NVIDIA_GPU_C61_GEFORCE_6150SE_NFORCE_430                                                                           0x03d0  /* GeForce 6150SE nForce 430 */
#define NVIDIA_GPU_C61_GEFORCE_6100_NFORCE_405                                                                             0x03d1  /* GeForce 6100 nForce 405 */
#define NVIDIA_GPU_C61_GEFORCE_6100_NFORCE_400                                                                             0x03d2  /* GeForce 6100 nForce 400 */
#define NVIDIA_GPU_C61_GEFORCE_6100_NFORCE_420                                                                             0x03d5  /* GeForce 6100 nForce 420 */
#define NVIDIA_GPU_C61_GEFORCE_7025_NFORCE_630A                                                                            0x03d6  /* GeForce 7025 / nForce 630a */
#define NVIDIA_GPU_MCP61_LPC_BRIDGE_LPC_BRIDGE                                                                             0x03e0  /* LPC Bridge */
#define NVIDIA_GPU_MCP61_LPC_BRIDGE_LPC_BRIDGE_03E1                                                                        0x03e1  /* LPC Bridge */
#define NVIDIA_GPU_MCP61_HOST_BRIDGE                                                                                       0x03e2  /* Host Bridge */
#define NVIDIA_GPU_MCP61_LPC_BRIDGE_LPC_BRIDGE_03E3                                                                        0x03e3  /* LPC Bridge */
#define NVIDIA_GPU_MCP61_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO                                                       0x03e4  /* High Definition Audio */
#define NVIDIA_GPU_MCP61_ETHERNET_ETHERNET                                                                                 0x03e5  /* Ethernet */
#define NVIDIA_GPU_MCP61_ETHERNET_ETHERNET_03E6                                                                            0x03e6  /* Ethernet */
#define NVIDIA_GPU_MCP61_SATA_CONTROLLER_SATA_CONTROLLER                                                                   0x03e7  /* SATA Controller */
#define NVIDIA_GPU_MCP61_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE                                                             0x03e8  /* PCI Express bridge */
#define NVIDIA_GPU_MCP61_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_03E9                                                        0x03e9  /* PCI Express bridge */
#define NVIDIA_GPU_MCP61_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                               0x03ea  /* Memory Controller */
#define NVIDIA_GPU_MCP61_SMBUS                                                                                             0x03eb  /* SMBus */
#define NVIDIA_GPU_MCP61_IDE                                                                                               0x03ec  /* IDE */
#define NVIDIA_GPU_MCP61_ETHERNET_ETHERNET_03EE                                                                            0x03ee  /* Ethernet */
#define NVIDIA_GPU_MCP61_ETHERNET_ETHERNET_03EF                                                                            0x03ef  /* Ethernet */
#define NVIDIA_GPU_MCP61_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO_03F0                                                  0x03f0  /* High Definition Audio */
#define NVIDIA_GPU_MCP61_USB_1_1_CONTROLLER                                                                                0x03f1  /* USB 1.1 Controller */
#define NVIDIA_GPU_MCP61_USB_2_0_CONTROLLER                                                                                0x03f2  /* USB 2.0 Controller */
#define NVIDIA_GPU_MCP61_PCI_BRIDGE                                                                                        0x03f3  /* PCI bridge */
#define NVIDIA_GPU_MCP61_SMU                                                                                               0x03f4  /* SMU */
#define NVIDIA_GPU_MCP61_MEMORY_CONTROLLER_MEMORY_CONTROLLER_03F5                                                          0x03f5  /* Memory Controller */
#define NVIDIA_GPU_MCP61_SATA_CONTROLLER_SATA_CONTROLLER_03F6                                                              0x03f6  /* SATA Controller */
#define NVIDIA_GPU_MCP61_SATA_CONTROLLER_SATA_CONTROLLER_03F7                                                              0x03f7  /* SATA Controller */
#define NVIDIA_GPU_G84_GEFORCE_8600_GTS                                                                                    0x0400  /* GeForce 8600 GTS */
#define NVIDIA_GPU_G84_GEFORCE_8600_GT_GEFORCE_8600_GT                                                                     0x0401  /* GeForce 8600 GT */
#define NVIDIA_GPU_G84_GEFORCE_8600_GT_GEFORCE_8600_GT_0402                                                                0x0402  /* GeForce 8600 GT */
#define NVIDIA_GPU_G84_GEFORCE_8600_GS                                                                                     0x0403  /* GeForce 8600 GS */
#define NVIDIA_GPU_G84_GEFORCE_8400_GS                                                                                     0x0404  /* GeForce 8400 GS */
#define NVIDIA_GPU_G84M_GEFORCE_9500M_GS                                                                                   0x0405  /* GeForce 9500M GS */
#define NVIDIA_GPU_G84_GEFORCE_8300_GS                                                                                     0x0406  /* GeForce 8300 GS */
#define NVIDIA_GPU_G84M_GEFORCE_8600M_GT                                                                                   0x0407  /* GeForce 8600M GT */
#define NVIDIA_GPU_G84M_GEFORCE_9650M_GS                                                                                   0x0408  /* GeForce 9650M GS */
#define NVIDIA_GPU_G84M_GEFORCE_8700M_GT                                                                                   0x0409  /* GeForce 8700M GT */
#define NVIDIA_GPU_G84GL_QUADRO_FX_370                                                                                     0x040a  /* Quadro FX 370 */
#define NVIDIA_GPU_G84GLM_QUADRO_NVS_320M                                                                                  0x040b  /* Quadro NVS 320M */
#define NVIDIA_GPU_G84GLM_QUADRO_FX_570M                                                                                   0x040c  /* Quadro FX 570M */
#define NVIDIA_GPU_G84GLM_QUADRO_FX_1600M                                                                                  0x040d  /* Quadro FX 1600M */
#define NVIDIA_GPU_G84GL_QUADRO_FX_570                                                                                     0x040e  /* Quadro FX 570 */
#define NVIDIA_GPU_G84GL_QUADRO_FX_1700                                                                                    0x040f  /* Quadro FX 1700 */
#define NVIDIA_GPU_G92_GEFORCE_GT_330                                                                                      0x0410  /* GeForce GT 330 */
#define NVIDIA_GPU_G92_GEFORCE_9800_GT_GEFORCE_9800_GT                                                                     0x0414  /* GeForce 9800 GT */
#define NVIDIA_GPU_G92_GEFORCE_GT_330_OEM                                                                                  0x0418  /* GeForce GT 330 OEM */
#define NVIDIA_GPU_G86_GEFORCE_8400_SE                                                                                     0x0420  /* GeForce 8400 SE */
#define NVIDIA_GPU_G86_GEFORCE_8500_GT                                                                                     0x0421  /* GeForce 8500 GT */
#define NVIDIA_GPU_G86_GEFORCE_8400_GS_GEFORCE_8400_GS                                                                     0x0422  /* GeForce 8400 GS */
#define NVIDIA_GPU_G86_GEFORCE_8300_GS                                                                                     0x0423  /* GeForce 8300 GS */
#define NVIDIA_GPU_G86_GEFORCE_8400_GS_GEFORCE_8400_GS_0424                                                                0x0424  /* GeForce 8400 GS */
#define NVIDIA_GPU_G86M_GEFORCE_8600M_GS                                                                                   0x0425  /* GeForce 8600M GS */
#define NVIDIA_GPU_G86M_GEFORCE_8400M_GT                                                                                   0x0426  /* GeForce 8400M GT */
#define NVIDIA_GPU_G86M_GEFORCE_8400M_GS                                                                                   0x0427  /* GeForce 8400M GS */
#define NVIDIA_GPU_G86M_GEFORCE_8400M_G                                                                                    0x0428  /* GeForce 8400M G */
#define NVIDIA_GPU_G86M_QUADRO_NVS_140M                                                                                    0x0429  /* Quadro NVS 140M */
#define NVIDIA_GPU_G86M_QUADRO_NVS_130M                                                                                    0x042a  /* Quadro NVS 130M */
#define NVIDIA_GPU_G86M_QUADRO_NVS_135M                                                                                    0x042b  /* Quadro NVS 135M */
#define NVIDIA_GPU_G86_GEFORCE_9400_GT                                                                                     0x042c  /* GeForce 9400 GT */
#define NVIDIA_GPU_G86GLM_QUADRO_FX_360M                                                                                   0x042d  /* Quadro FX 360M */
#define NVIDIA_GPU_G86M_GEFORCE_9300M_G                                                                                    0x042e  /* GeForce 9300M G */
#define NVIDIA_GPU_G86_QUADRO_NVS_290                                                                                      0x042f  /* Quadro NVS 290 */
#define NVIDIA_GPU_MCP65_LPC_BRIDGE_LPC_BRIDGE                                                                             0x0440  /* LPC Bridge */
#define NVIDIA_GPU_MCP65_LPC_BRIDGE_LPC_BRIDGE_0441                                                                        0x0441  /* LPC Bridge */
#define NVIDIA_GPU_MCP65_LPC_BRIDGE_LPC_BRIDGE_0442                                                                        0x0442  /* LPC Bridge */
#define NVIDIA_GPU_MCP65_LPC_BRIDGE_LPC_BRIDGE_0443                                                                        0x0443  /* LPC Bridge */
#define NVIDIA_GPU_MCP65_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                               0x0444  /* Memory Controller */
#define NVIDIA_GPU_MCP65_MEMORY_CONTROLLER_MEMORY_CONTROLLER_0445                                                          0x0445  /* Memory Controller */
#define NVIDIA_GPU_MCP65_SMBUS                                                                                             0x0446  /* SMBus */
#define NVIDIA_GPU_MCP65_SMU                                                                                               0x0447  /* SMU */
#define NVIDIA_GPU_MCP65_IDE                                                                                               0x0448  /* IDE */
#define NVIDIA_GPU_MCP65_PCI_BRIDGE                                                                                        0x0449  /* PCI bridge */
#define NVIDIA_GPU_MCP65_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO                                                       0x044a  /* High Definition Audio */
#define NVIDIA_GPU_MCP65_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO_044B                                                  0x044b  /* High Definition Audio */
#define NVIDIA_GPU_MCP65_AHCI_CONTROLLER_AHCI_CONTROLLER                                                                   0x044c  /* AHCI Controller */
#define NVIDIA_GPU_MCP65_AHCI_CONTROLLER_AHCI_CONTROLLER_044D                                                              0x044d  /* AHCI Controller */
#define NVIDIA_GPU_MCP65_AHCI_CONTROLLER_AHCI_CONTROLLER_044E                                                              0x044e  /* AHCI Controller */
#define NVIDIA_GPU_MCP65_AHCI_CONTROLLER_AHCI_CONTROLLER_044F                                                              0x044f  /* AHCI Controller */
#define NVIDIA_GPU_MCP65_ETHERNET_ETHERNET                                                                                 0x0450  /* Ethernet */
#define NVIDIA_GPU_MCP65_ETHERNET_ETHERNET_0451                                                                            0x0451  /* Ethernet */
#define NVIDIA_GPU_MCP65_ETHERNET_ETHERNET_0452                                                                            0x0452  /* Ethernet */
#define NVIDIA_GPU_MCP65_ETHERNET_ETHERNET_0453                                                                            0x0453  /* Ethernet */
#define NVIDIA_GPU_MCP65_USB_1_1_OHCI_CONTROLLER                                                                           0x0454  /* USB 1.1 OHCI Controller */
#define NVIDIA_GPU_MCP65_USB_2_0_EHCI_CONTROLLER                                                                           0x0455  /* USB 2.0 EHCI Controller */
#define NVIDIA_GPU_MCP65_USB_CONTROLLER_USB_CONTROLLER                                                                     0x0456  /* USB Controller */
#define NVIDIA_GPU_MCP65_USB_CONTROLLER_USB_CONTROLLER_0457                                                                0x0457  /* USB Controller */
#define NVIDIA_GPU_MCP65_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE                                                             0x0458  /* PCI Express bridge */
#define NVIDIA_GPU_MCP65_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0459                                                        0x0459  /* PCI Express bridge */
#define NVIDIA_GPU_MCP65_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_045A                                                        0x045a  /* PCI Express bridge */
#define NVIDIA_GPU_MCP65_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_045B                                                        0x045b  /* PCI Express bridge */
#define NVIDIA_GPU_MCP65_SATA_CONTROLLER_SATA_CONTROLLER                                                                   0x045c  /* SATA Controller */
#define NVIDIA_GPU_MCP65_SATA_CONTROLLER_SATA_CONTROLLER_045D                                                              0x045d  /* SATA Controller */
#define NVIDIA_GPU_MCP65_SATA_CONTROLLER_SATA_CONTROLLER_045E                                                              0x045e  /* SATA Controller */
#define NVIDIA_GPU_MCP65_SATA_CONTROLLER_SATA_CONTROLLER_045F                                                              0x045f  /* SATA Controller */
#define NVIDIA_GPU_C67_GEFORCE_7150M_NFORCE_630M                                                                           0x0531  /* GeForce 7150M / nForce 630M */
#define NVIDIA_GPU_C67_GEFORCE_7000M_NFORCE_610M                                                                           0x0533  /* GeForce 7000M / nForce 610M */
#define NVIDIA_GPU_C68_GEFORCE_7050_PV_NFORCE_630A_GEFORCE_7050_PV_NFORCE_630A                                             0x053a  /* GeForce 7050 PV / nForce 630a */
#define NVIDIA_GPU_C68_GEFORCE_7050_PV_NFORCE_630A_GEFORCE_7050_PV_NFORCE_630A_053B                                        0x053b  /* GeForce 7050 PV / nForce 630a */
#define NVIDIA_GPU_C68_GEFORCE_7025_NFORCE_630A                                                                            0x053e  /* GeForce 7025 / nForce 630a */
#define NVIDIA_GPU_MCP67_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                               0x0541  /* Memory Controller */
#define NVIDIA_GPU_MCP67_SMBUS                                                                                             0x0542  /* SMBus */
#define NVIDIA_GPU_MCP67_CO_PROCESSOR                                                                                      0x0543  /* Co-processor */
#define NVIDIA_GPU_MCP67_MEMORY_CONTROLLER_MEMORY_CONTROLLER_0547                                                          0x0547  /* Memory Controller */
#define NVIDIA_GPU_MCP67_ISA_BRIDGE                                                                                        0x0548  /* ISA Bridge */
#define NVIDIA_GPU_MCP67_ETHERNET_ETHERNET                                                                                 0x054c  /* Ethernet */
#define NVIDIA_GPU_MCP67_ETHERNET_ETHERNET_054D                                                                            0x054d  /* Ethernet */
#define NVIDIA_GPU_MCP67_ETHERNET_ETHERNET_054E                                                                            0x054e  /* Ethernet */
#define NVIDIA_GPU_MCP67_ETHERNET_ETHERNET_054F                                                                            0x054f  /* Ethernet */
#define NVIDIA_GPU_MCP67_AHCI_CONTROLLER_AHCI_CONTROLLER                                                                   0x0550  /* AHCI Controller */
#define NVIDIA_GPU_MCP67_AHCI_CONTROLLER_AHCI_CONTROLLER_0554                                                              0x0554  /* AHCI Controller */
#define NVIDIA_GPU_MCP67_SATA_CONTROLLER                                                                                   0x0555  /* SATA Controller */
#define NVIDIA_GPU_MCP67_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO                                                       0x055c  /* High Definition Audio */
#define NVIDIA_GPU_MCP67_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO_055D                                                  0x055d  /* High Definition Audio */
#define NVIDIA_GPU_MCP67_OHCI_USB_1_1_CONTROLLER                                                                           0x055e  /* OHCI USB 1.1 Controller */
#define NVIDIA_GPU_MCP67_EHCI_USB_2_0_CONTROLLER                                                                           0x055f  /* EHCI USB 2.0 Controller */
#define NVIDIA_GPU_MCP67_IDE_CONTROLLER                                                                                    0x0560  /* IDE Controller */
#define NVIDIA_GPU_MCP67_PCI_BRIDGE                                                                                        0x0561  /* PCI Bridge */
#define NVIDIA_GPU_MCP67_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE                                                             0x0562  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP67_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0563                                                        0x0563  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200                                                                        0x0568  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0569                                                                   0x0569  /* GeForce 8200 */
#define NVIDIA_GPU_MCP73_NFORCE_630I                                                                                       0x056a  /* nForce 630i */
#define NVIDIA_GPU_MCP73_IDE_CONTROLLER                                                                                    0x056c  /* IDE Controller */
#define NVIDIA_GPU_MCP73_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE                                                             0x056d  /* PCI Express bridge */
#define NVIDIA_GPU_MCP73_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_056E                                                        0x056e  /* PCI Express bridge */
#define NVIDIA_GPU_MCP73_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_056F                                                        0x056f  /* PCI Express bridge */
#define NVIDIA_GPU_NF200_PCIE_2_0_SWITCH                                                                                   0x05b1  /* PCIe 2.0 switch */
#define NVIDIA_GPU_NF200_PCIE_2_0_SWITCH_FOR_GTX_295                                                                       0x05b8  /* PCIe 2.0 switch for GTX 295 */
#define NVIDIA_GPU_NF200_PCIE_2_0_SWITCH_FOR_QUADRO_PLEX_S4_TESLA_S870_TESLA_S1070_TESLA_S2050                             0x05be  /* PCIe 2.0 switch for Quadro Plex S4 / Tesla S870 / Tesla S1070 / Tesla S2050 */
#define NVIDIA_GPU_GT200B_GEFORCE_GTX_295                                                                                  0x05e0  /* GeForce GTX 295 */
#define NVIDIA_GPU_GT200_GEFORCE_GTX_280_GEFORCE_GTX_280                                                                   0x05e1  /* GeForce GTX 280 */
#define NVIDIA_GPU_GT200_GEFORCE_GTX_260_GEFORCE_GTX_260                                                                   0x05e2  /* GeForce GTX 260 */
#define NVIDIA_GPU_GT200B_GEFORCE_GTX_285                                                                                  0x05e3  /* GeForce GTX 285 */
#define NVIDIA_GPU_GT200B_GEFORCE_GTX_275                                                                                  0x05e6  /* GeForce GTX 275 */
#define NVIDIA_GPU_GT200GL_TESLA_C1060_M1060                                                                               0x05e7  /* Tesla C1060 / M1060 */
#define NVIDIA_GPU_GT200_GEFORCE_GTX_260_GEFORCE_GTX_260_05EA                                                              0x05ea  /* GeForce GTX 260 */
#define NVIDIA_GPU_GT200_GEFORCE_GTX_295                                                                                   0x05eb  /* GeForce GTX 295 */
#define NVIDIA_GPU_GT200GL_QUADRO_PLEX_2200_D2                                                                             0x05ed  /* Quadro Plex 2200 D2 */
#define NVIDIA_GPU_GT200_GEFORCE_GTX_280_GEFORCE_GTX_280_05F1                                                              0x05f1  /* GeForce GTX 280 */
#define NVIDIA_GPU_GT200_GEFORCE_GTX_260_GEFORCE_GTX_260_05F2                                                              0x05f2  /* GeForce GTX 260 */
#define NVIDIA_GPU_GT200GL_QUADRO_PLEX_2200_S4                                                                             0x05f8  /* Quadro Plex 2200 S4 */
#define NVIDIA_GPU_GT200GL_QUADRO_CX                                                                                       0x05f9  /* Quadro CX */
#define NVIDIA_GPU_GT200GL_QUADRO_FX_5800                                                                                  0x05fd  /* Quadro FX 5800 */
#define NVIDIA_GPU_GT200GL_QUADRO_FX_4800                                                                                  0x05fe  /* Quadro FX 4800 */
#define NVIDIA_GPU_GT200GL_QUADRO_FX_3800                                                                                  0x05ff  /* Quadro FX 3800 */
#define NVIDIA_GPU_G92_GEFORCE_8800_GTS_512                                                                                0x0600  /* GeForce 8800 GTS 512 */
#define NVIDIA_GPU_G92_GEFORCE_9800_GT_GEFORCE_9800_GT_0601                                                                0x0601  /* GeForce 9800 GT */
#define NVIDIA_GPU_G92_GEFORCE_8800_GT_GEFORCE_8800_GT                                                                     0x0602  /* GeForce 8800 GT */
#define NVIDIA_GPU_G92_GEFORCE_GT_230_OEM                                                                                  0x0603  /* GeForce GT 230 OEM */
#define NVIDIA_GPU_G92_GEFORCE_9800_GX2                                                                                    0x0604  /* GeForce 9800 GX2 */
#define NVIDIA_GPU_G92_GEFORCE_9800_GT_GEFORCE_9800_GT_0605                                                                0x0605  /* GeForce 9800 GT */
#define NVIDIA_GPU_G92_GEFORCE_8800_GS_GEFORCE_8800_GS                                                                     0x0606  /* GeForce 8800 GS */
#define NVIDIA_GPU_G92_GEFORCE_GTS_240                                                                                     0x0607  /* GeForce GTS 240 */
#define NVIDIA_GPU_G92M_GEFORCE_9800M_GTX_GEFORCE_9800M_GTX                                                                0x0608  /* GeForce 9800M GTX */
#define NVIDIA_GPU_G92M_GEFORCE_8800M_GTS                                                                                  0x0609  /* GeForce 8800M GTS */
#define NVIDIA_GPU_G92M_GEFORCE_GTX_280M                                                                                   0x060a  /* GeForce GTX 280M */
#define NVIDIA_GPU_G92M_GEFORCE_9800M_GT                                                                                   0x060b  /* GeForce 9800M GT */
#define NVIDIA_GPU_G92M_GEFORCE_8800M_GTX                                                                                  0x060c  /* GeForce 8800M GTX */
#define NVIDIA_GPU_G92_GEFORCE_8800_GS_GEFORCE_8800_GS_060D                                                                0x060d  /* GeForce 8800 GS */
#define NVIDIA_GPU_G92M_GEFORCE_GTX_285M                                                                                   0x060f  /* GeForce GTX 285M */
#define NVIDIA_GPU_G92_GEFORCE_9600_GSO                                                                                    0x0610  /* GeForce 9600 GSO */
#define NVIDIA_GPU_G92_GEFORCE_8800_GT_GEFORCE_8800_GT_0611                                                                0x0611  /* GeForce 8800 GT */
#define NVIDIA_GPU_G92_GEFORCE_9800_GTX_9800_GTX                                                                           0x0612  /* GeForce 9800 GTX / 9800 GTX+ */
#define NVIDIA_GPU_G92_GEFORCE_9800_GTX                                                                                    0x0613  /* GeForce 9800 GTX+ */
#define NVIDIA_GPU_G92_GEFORCE_9800_GT_GEFORCE_9800_GT_0614                                                                0x0614  /* GeForce 9800 GT */
#define NVIDIA_GPU_G92_GEFORCE_GTS_250                                                                                     0x0615  /* GeForce GTS 250 */
#define NVIDIA_GPU_G92M_GEFORCE_9800M_GTX_GEFORCE_9800M_GTX_0617                                                           0x0617  /* GeForce 9800M GTX */
#define NVIDIA_GPU_G92M_GEFORCE_GTX_260M                                                                                   0x0618  /* GeForce GTX 260M */
#define NVIDIA_GPU_G92GL_QUADRO_FX_4700_X2                                                                                 0x0619  /* Quadro FX 4700 X2 */
#define NVIDIA_GPU_G92GL_QUADRO_FX_3700                                                                                    0x061a  /* Quadro FX 3700 */
#define NVIDIA_GPU_G92GL_QUADRO_VX_200                                                                                     0x061b  /* Quadro VX 200 */
#define NVIDIA_GPU_G92GLM_QUADRO_FX_3600M                                                                                  0x061c  /* Quadro FX 3600M */
#define NVIDIA_GPU_G92GLM_QUADRO_FX_2800M                                                                                  0x061d  /* Quadro FX 2800M */
#define NVIDIA_GPU_G92GLM_QUADRO_FX_3700M                                                                                  0x061e  /* Quadro FX 3700M */
#define NVIDIA_GPU_G92GLM_QUADRO_FX_3800M                                                                                  0x061f  /* Quadro FX 3800M */
#define NVIDIA_GPU_G94_GEFORCE_9800_GT                                                                                     0x0620  /* GeForce 9800 GT */
#define NVIDIA_GPU_G94_GEFORCE_GT_230                                                                                      0x0621  /* GeForce GT 230 */
#define NVIDIA_GPU_G94_GEFORCE_9600_GT_GEFORCE_9600_GT                                                                     0x0622  /* GeForce 9600 GT */
#define NVIDIA_GPU_G94_GEFORCE_9600_GS                                                                                     0x0623  /* GeForce 9600 GS */
#define NVIDIA_GPU_G94_GEFORCE_9600_GT_GREEN_EDITION                                                                       0x0624  /* GeForce 9600 GT Green Edition */
#define NVIDIA_GPU_G94_GEFORCE_9600_GSO_512                                                                                0x0625  /* GeForce 9600 GSO 512 */
#define NVIDIA_GPU_G94_GEFORCE_GT_130                                                                                      0x0626  /* GeForce GT 130 */
#define NVIDIA_GPU_G94_GEFORCE_GT_140                                                                                      0x0627  /* GeForce GT 140 */
#define NVIDIA_GPU_G94M_GEFORCE_9800M_GTS_GEFORCE_9800M_GTS                                                                0x0628  /* GeForce 9800M GTS */
#define NVIDIA_GPU_G94M_GEFORCE_9700M_GTS                                                                                  0x062a  /* GeForce 9700M GTS */
#define NVIDIA_GPU_G94M_GEFORCE_9800M_GS                                                                                   0x062b  /* GeForce 9800M GS */
#define NVIDIA_GPU_G94M_GEFORCE_9800M_GTS_GEFORCE_9800M_GTS_062C                                                           0x062c  /* GeForce 9800M GTS */
#define NVIDIA_GPU_G94_GEFORCE_9600_GT_GEFORCE_9600_GT_062D                                                                0x062d  /* GeForce 9600 GT */
#define NVIDIA_GPU_G94_GEFORCE_9600_GT_GEFORCE_9600_GT_062E                                                                0x062e  /* GeForce 9600 GT */
#define NVIDIA_GPU_G94_GEFORCE_9800_S                                                                                      0x062f  /* GeForce 9800 S */
#define NVIDIA_GPU_G94_GEFORCE_9600_GT_GEFORCE_9600_GT_0630                                                                0x0630  /* GeForce 9600 GT */
#define NVIDIA_GPU_G94M_GEFORCE_GTS_160M                                                                                   0x0631  /* GeForce GTS 160M */
#define NVIDIA_GPU_G94M_GEFORCE_GTS_150M                                                                                   0x0632  /* GeForce GTS 150M */
#define NVIDIA_GPU_G94_GEFORCE_GT_220                                                                                      0x0633  /* GeForce GT 220 */
#define NVIDIA_GPU_G94_GEFORCE_9600_GSO                                                                                    0x0635  /* GeForce 9600 GSO */
#define NVIDIA_GPU_G94_GEFORCE_9600_GT_GEFORCE_9600_GT_0637                                                                0x0637  /* GeForce 9600 GT */
#define NVIDIA_GPU_G94GL_QUADRO_FX_1800                                                                                    0x0638  /* Quadro FX 1800 */
#define NVIDIA_GPU_G94GLM_QUADRO_FX_2700M                                                                                  0x063a  /* Quadro FX 2700M */
#define NVIDIA_GPU_G94_GEFORCE_9600_GE                                                                                     0x063f  /* GeForce 9600 GE */
#define NVIDIA_GPU_G96C_GEFORCE_9500_GT                                                                                    0x0640  /* GeForce 9500 GT */
#define NVIDIA_GPU_G96C_GEFORCE_9400_GT_GEFORCE_9400_GT                                                                    0x0641  /* GeForce 9400 GT */
#define NVIDIA_GPU_G96_D9M_10                                                                                              0x0642  /* D9M-10 */
#define NVIDIA_GPU_G96_GEFORCE_9500_GT                                                                                     0x0643  /* GeForce 9500 GT */
#define NVIDIA_GPU_G96_GEFORCE_9500_GS                                                                                     0x0644  /* GeForce 9500 GS */
#define NVIDIA_GPU_G96C_GEFORCE_9500_GS                                                                                    0x0645  /* GeForce 9500 GS */
#define NVIDIA_GPU_G96C_GEFORCE_GT_120                                                                                     0x0646  /* GeForce GT 120 */
#define NVIDIA_GPU_G96CM_GEFORCE_9600M_GT_GEFORCE_9600M_GT                                                                 0x0647  /* GeForce 9600M GT */
#define NVIDIA_GPU_G96CM_GEFORCE_9600M_GS                                                                                  0x0648  /* GeForce 9600M GS */
#define NVIDIA_GPU_G96CM_GEFORCE_9600M_GT_GEFORCE_9600M_GT_0649                                                            0x0649  /* GeForce 9600M GT */
#define NVIDIA_GPU_G96M_GEFORCE_9700M_GT                                                                                   0x064a  /* GeForce 9700M GT */
#define NVIDIA_GPU_G96M_GEFORCE_9500M_G                                                                                    0x064b  /* GeForce 9500M G */
#define NVIDIA_GPU_G96CM_GEFORCE_9650M_GT                                                                                  0x064c  /* GeForce 9650M GT */
#define NVIDIA_GPU_G96C_GEFORCE_9600_GSO_9800_GT                                                                           0x064e  /* GeForce 9600 GSO / 9800 GT */
#define NVIDIA_GPU_G96CM_GEFORCE_G_110M                                                                                    0x0651  /* GeForce G 110M */
#define NVIDIA_GPU_G96CM_GEFORCE_GT_130M                                                                                   0x0652  /* GeForce GT 130M */
#define NVIDIA_GPU_G96CM_GEFORCE_GT_120M                                                                                   0x0653  /* GeForce GT 120M */
#define NVIDIA_GPU_G96CM_GEFORCE_GT_220M                                                                                   0x0654  /* GeForce GT 220M */
#define NVIDIA_GPU_G96_GEFORCE_GT_120_MAC_EDITION_GEFORCE_GT_120_MAC_EDITION                                               0x0655  /* GeForce GT 120 Mac Edition */
#define NVIDIA_GPU_G96_GEFORCE_GT_120_MAC_EDITION_GEFORCE_GT_120_MAC_EDITION_0656                                          0x0656  /* GeForce GT 120 Mac Edition */
#define NVIDIA_GPU_G96GL_QUADRO_FX_380                                                                                     0x0658  /* Quadro FX 380 */
#define NVIDIA_GPU_G96CGL_QUADRO_FX_580                                                                                    0x0659  /* Quadro FX 580 */
#define NVIDIA_GPU_G96GLM_QUADRO_FX_1700M                                                                                  0x065a  /* Quadro FX 1700M */
#define NVIDIA_GPU_G96C_GEFORCE_9400_GT_GEFORCE_9400_GT_065B                                                               0x065b  /* GeForce 9400 GT */
#define NVIDIA_GPU_G96GLM_QUADRO_FX_770M                                                                                   0x065c  /* Quadro FX 770M */
#define NVIDIA_GPU_G96_GEFORCE_9500_GA_9600_GT_GTS_250                                                                     0x065d  /* GeForce 9500 GA / 9600 GT / GTS 250 */
#define NVIDIA_GPU_G96C_GEFORCE_G210                                                                                       0x065f  /* GeForce G210 */
#define NVIDIA_GPU_GF100_GEFORCE_GTX_480_GEFORCE_GTX_480                                                                   0x06c0  /* GeForce GTX 480 */
#define NVIDIA_GPU_GF100_GEFORCE_GTX_465                                                                                   0x06c4  /* GeForce GTX 465 */
#define NVIDIA_GPU_GF100M_GEFORCE_GTX_480M                                                                                 0x06ca  /* GeForce GTX 480M */
#define NVIDIA_GPU_GF100_GEFORCE_GTX_480_GEFORCE_GTX_480_06CB                                                              0x06cb  /* GeForce GTX 480 */
#define NVIDIA_GPU_GF100_GEFORCE_GTX_470                                                                                   0x06cd  /* GeForce GTX 470 */
#define NVIDIA_GPU_GF100GL_GF100GL                                                                                         0x06d0  /* GF100GL */
#define NVIDIA_GPU_GF100GL_TESLA_C2050_C2070                                                                               0x06d1  /* Tesla C2050 / C2070 */
#define NVIDIA_GPU_GF100GL_TESLA_M2070                                                                                     0x06d2  /* Tesla M2070 */
#define NVIDIA_GPU_GF100GL_QUADRO_6000_QUADRO_6000                                                                         0x06d8  /* Quadro 6000 */
#define NVIDIA_GPU_GF100GL_QUADRO_5000                                                                                     0x06d9  /* Quadro 5000 */
#define NVIDIA_GPU_GF100GLM_QUADRO_5000M                                                                                   0x06da  /* Quadro 5000M */
#define NVIDIA_GPU_GF100GL_QUADRO_6000_QUADRO_6000_06DC                                                                    0x06dc  /* Quadro 6000 */
#define NVIDIA_GPU_GF100GL_QUADRO_4000                                                                                     0x06dd  /* Quadro 4000 */
#define NVIDIA_GPU_GF100GL_TESLA_T20_PROCESSOR                                                                             0x06de  /* Tesla T20 Processor */
#define NVIDIA_GPU_GF100GL_TESLA_M2070_Q                                                                                   0x06df  /* Tesla M2070-Q */
#define NVIDIA_GPU_G98_GEFORCE_9300_GE                                                                                     0x06e0  /* GeForce 9300 GE */
#define NVIDIA_GPU_G98_GEFORCE_9300_GS                                                                                     0x06e1  /* GeForce 9300 GS */
#define NVIDIA_GPU_G98_GEFORCE_8400                                                                                        0x06e2  /* GeForce 8400 */
#define NVIDIA_GPU_G98_GEFORCE_8300_GS                                                                                     0x06e3  /* GeForce 8300 GS */
#define NVIDIA_GPU_G98_GEFORCE_8400_GS_REV_2                                                                               0x06e4  /* GeForce 8400 GS Rev. 2 */
#define NVIDIA_GPU_G98M_GEFORCE_9300M_GS_GEFORCE_9300M_GS                                                                  0x06e5  /* GeForce 9300M GS */
#define NVIDIA_GPU_G98_GEFORCE_G_100                                                                                       0x06e6  /* GeForce G 100 */
#define NVIDIA_GPU_G98_GEFORCE_9300_SE                                                                                     0x06e7  /* GeForce 9300 SE */
#define NVIDIA_GPU_G98M_GEFORCE_9200M_GS                                                                                   0x06e8  /* GeForce 9200M GS */
#define NVIDIA_GPU_G98M_GEFORCE_9300M_GS_GEFORCE_9300M_GS_06E9                                                             0x06e9  /* GeForce 9300M GS */
#define NVIDIA_GPU_G98M_QUADRO_NVS_150M                                                                                    0x06ea  /* Quadro NVS 150M */
#define NVIDIA_GPU_G98M_QUADRO_NVS_160M                                                                                    0x06eb  /* Quadro NVS 160M */
#define NVIDIA_GPU_G98M_GEFORCE_G_105M_GEFORCE_G_105M                                                                      0x06ec  /* GeForce G 105M */
#define NVIDIA_GPU_G98_GEFORCE_9600_GT_9800_GT                                                                             0x06ed  /* GeForce 9600 GT / 9800 GT */
#define NVIDIA_GPU_G98_GEFORCE_9600_GT_9800_GT_GT_240                                                                      0x06ee  /* GeForce 9600 GT / 9800 GT / GT 240 */
#define NVIDIA_GPU_G98M_GEFORCE_G_103M                                                                                     0x06ef  /* GeForce G 103M */
#define NVIDIA_GPU_G98M_GEFORCE_G_105M_GEFORCE_G_105M_06F1                                                                 0x06f1  /* GeForce G 105M */
#define NVIDIA_GPU_G98_QUADRO_NVS_420                                                                                      0x06f8  /* Quadro NVS 420 */
#define NVIDIA_GPU_G98GL_QUADRO_FX_370_LP                                                                                  0x06f9  /* Quadro FX 370 LP */
#define NVIDIA_GPU_G98_QUADRO_NVS_450                                                                                      0x06fa  /* Quadro NVS 450 */
#define NVIDIA_GPU_G98GLM_QUADRO_FX_370M                                                                                   0x06fb  /* Quadro FX 370M */
#define NVIDIA_GPU_G98_QUADRO_NVS_295                                                                                      0x06fd  /* Quadro NVS 295 */
#define NVIDIA_GPU_G98_HICX16_GRAPHICS                                                                                     0x06ff  /* HICx16 + Graphics */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0751                                                                   0x0751  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0752                                                                   0x0752  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0753                                                                   0x0753  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0754                                                                   0x0754  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0759                                                                   0x0759  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_075A                                                                   0x075a  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_075B                                                                   0x075b  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_075C                                                                   0x075c  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_075D                                                                   0x075d  /* GeForce 8200 */
#define NVIDIA_GPU_MCP77_ETHERNET_ETHERNET                                                                                 0x0760  /* Ethernet */
#define NVIDIA_GPU_MCP77_ETHERNET_ETHERNET_0761                                                                            0x0761  /* Ethernet */
#define NVIDIA_GPU_MCP77_ETHERNET_ETHERNET_0762                                                                            0x0762  /* Ethernet */
#define NVIDIA_GPU_MCP77_ETHERNET_ETHERNET_0763                                                                            0x0763  /* Ethernet */
#define NVIDIA_GPU_MCP72XE_MCP72P_MCP78U_MCP78S_HIGH_DEFINITION_AUDIO                                                      0x0774  /* High Definition Audio */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0778                                                                   0x0778  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_077A                                                                   0x077a  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_077B                                                                   0x077b  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_077C                                                                   0x077c  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_077D                                                                   0x077d  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_077E                                                                   0x077e  /* GeForce 8200 */
#define NVIDIA_GPU_MCP73_HOST_BRIDGE_HOST_BRIDGE                                                                           0x07c0  /* Host Bridge */
#define NVIDIA_GPU_MCP73_HOST_BRIDGE_HOST_BRIDGE_07C1                                                                      0x07c1  /* Host Bridge */
#define NVIDIA_GPU_MCP73_HOST_BRIDGE_HOST_BRIDGE_07C2                                                                      0x07c2  /* Host Bridge */
#define NVIDIA_GPU_MCP73_HOST_BRIDGE_HOST_BRIDGE_07C3                                                                      0x07c3  /* Host Bridge */
#define NVIDIA_GPU_MCP73_HOST_BRIDGE_HOST_BRIDGE_07C5                                                                      0x07c5  /* Host Bridge */
#define NVIDIA_GPU_MCP73_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                               0x07c8  /* Memory Controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER                                          0x07cb  /* 610i/630i memory controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER_07CD                                     0x07cd  /* 610i/630i memory controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER_07CE                                     0x07ce  /* 610i/630i memory controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER_07CF                                     0x07cf  /* 610i/630i memory controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER_07D0                                     0x07d0  /* 610i/630i memory controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER_07D1                                     0x07d1  /* 610i/630i memory controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER_07D2                                     0x07d2  /* 610i/630i memory controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER_07D3                                     0x07d3  /* 610i/630i memory controller */
#define NVIDIA_GPU_NFORCE_610I_630I_MEMORY_CONTROLLER_610I_630I_MEMORY_CONTROLLER_07D6                                     0x07d6  /* 610i/630i memory controller */
#define NVIDIA_GPU_MCP73_LPC_BRIDGE                                                                                        0x07d7  /* LPC Bridge */
#define NVIDIA_GPU_MCP73_SMBUS                                                                                             0x07d8  /* SMBus */
#define NVIDIA_GPU_MCP73_MEMORY_CONTROLLER_MEMORY_CONTROLLER_07D9                                                          0x07d9  /* Memory Controller */
#define NVIDIA_GPU_MCP73_CO_PROCESSOR                                                                                      0x07da  /* Co-processor */
#define NVIDIA_GPU_MCP73_ETHERNET_ETHERNET                                                                                 0x07dc  /* Ethernet */
#define NVIDIA_GPU_MCP73_ETHERNET_ETHERNET_07DD                                                                            0x07dd  /* Ethernet */
#define NVIDIA_GPU_MCP73_ETHERNET_ETHERNET_07DE                                                                            0x07de  /* Ethernet */
#define NVIDIA_GPU_MCP73_ETHERNET_ETHERNET_07DF                                                                            0x07df  /* Ethernet */
#define NVIDIA_GPU_C73_GEFORCE_7150_NFORCE_630I                                                                            0x07e0  /* GeForce 7150 / nForce 630i */
#define NVIDIA_GPU_C73_GEFORCE_7100_NFORCE_630I                                                                            0x07e1  /* GeForce 7100 / nForce 630i */
#define NVIDIA_GPU_C73_GEFORCE_7050_NFORCE_630I                                                                            0x07e2  /* GeForce 7050 / nForce 630i */
#define NVIDIA_GPU_C73_GEFORCE_7050_NFORCE_610I                                                                            0x07e3  /* GeForce 7050 / nForce 610i */
#define NVIDIA_GPU_C73_GEFORCE_7100_NFORCE_620I                                                                            0x07e5  /* GeForce 7100 / nForce 620i */
#define NVIDIA_GPU_MCP73_SATA_CONTROLLER_IDE_MODE                                                                          0x07f0  /* SATA Controller (IDE mode) */
#define NVIDIA_GPU_GEFORCE_7100_NFORCE_630I_SATA                                                                           0x07f4  /* 7100/nForce 630i SATA */
#define NVIDIA_GPU_MCP73_SATA_RAID_CONTROLLER                                                                              0x07f8  /* SATA RAID Controller */
#define NVIDIA_GPU_MCP73_HIGH_DEFINITION_AUDIO                                                                             0x07fc  /* High Definition Audio */
#define NVIDIA_GPU_MCP73_OHCI_USB_1_1_CONTROLLER                                                                           0x07fe  /* OHCI USB 1.1 Controller */
#define NVIDIA_GPU_C77_GEFORCE_8200M                                                                                       0x0840  /* GeForce 8200M */
#define NVIDIA_GPU_C77_GEFORCE_9100M_G                                                                                     0x0844  /* GeForce 9100M G */
#define NVIDIA_GPU_C77_GEFORCE_8200M_G                                                                                     0x0845  /* GeForce 8200M G */
#define NVIDIA_GPU_C77_GEFORCE_9200                                                                                        0x0846  /* GeForce 9200 */
#define NVIDIA_GPU_C78_GEFORCE_9100                                                                                        0x0847  /* GeForce 9100 */
#define NVIDIA_GPU_C77_GEFORCE_8300                                                                                        0x0848  /* GeForce 8300 */
#define NVIDIA_GPU_C77_GEFORCE_8200_GEFORCE_8200                                                                           0x0849  /* GeForce 8200 */
#define NVIDIA_GPU_C77_NFORCE_730A                                                                                         0x084a  /* nForce 730a */
#define NVIDIA_GPU_C77_GEFORCE_8200_GEFORCE_8200_084B                                                                      0x084b  /* GeForce 8200 */
#define NVIDIA_GPU_C77_NFORCE_780A_980A_SLI                                                                                0x084c  /* nForce 780a/980a SLI */
#define NVIDIA_GPU_C77_NFORCE_750A_SLI                                                                                     0x084d  /* nForce 750a SLI */
#define NVIDIA_GPU_C77_GEFORCE_8100_NFORCE_720A                                                                            0x084f  /* GeForce 8100 / nForce 720a */
#define NVIDIA_GPU_C79_GEFORCE_9300_GEFORCE_9300                                                                           0x0860  /* GeForce 9300 */
#define NVIDIA_GPU_C79_GEFORCE_9400_GEFORCE_9400                                                                           0x0861  /* GeForce 9400 */
#define NVIDIA_GPU_C79_GEFORCE_9400M_G_GEFORCE_9400M_G                                                                     0x0862  /* GeForce 9400M G */
#define NVIDIA_GPU_C79_GEFORCE_9400M_GEFORCE_9400M                                                                         0x0863  /* GeForce 9400M */
#define NVIDIA_GPU_C79_GEFORCE_9300_GEFORCE_9300_0864                                                                      0x0864  /* GeForce 9300 */
#define NVIDIA_GPU_C79_GEFORCE_9300_ION                                                                                    0x0865  /* GeForce 9300 / ION */
#define NVIDIA_GPU_C79_GEFORCE_9400M_G_GEFORCE_9400M_G_0866                                                                0x0866  /* GeForce 9400M G */
#define NVIDIA_GPU_C79_GEFORCE_9400_GEFORCE_9400_0867                                                                      0x0867  /* GeForce 9400 */
#define NVIDIA_GPU_C79_NFORCE_760I_SLI                                                                                     0x0868  /* nForce 760i SLI */
#define NVIDIA_GPU_MCP7A_GEFORCE_9400                                                                                      0x0869  /* GeForce 9400 */
#define NVIDIA_GPU_C79_GEFORCE_9400_GEFORCE_9400_086A                                                                      0x086a  /* GeForce 9400 */
#define NVIDIA_GPU_C79_GEFORCE_9300_NFORCE_730I                                                                            0x086c  /* GeForce 9300 / nForce 730i */
#define NVIDIA_GPU_C79_GEFORCE_9200_GEFORCE_9200                                                                           0x086d  /* GeForce 9200 */
#define NVIDIA_GPU_C79_GEFORCE_9100M_G                                                                                     0x086e  /* GeForce 9100M G */
#define NVIDIA_GPU_MCP79_GEFORCE_8200M_G                                                                                   0x086f  /* GeForce 8200M G */
#define NVIDIA_GPU_C79_GEFORCE_9400M_GEFORCE_9400M_0870                                                                    0x0870  /* GeForce 9400M */
#define NVIDIA_GPU_C79_GEFORCE_9200_GEFORCE_9200_0871                                                                      0x0871  /* GeForce 9200 */
#define NVIDIA_GPU_C79_GEFORCE_G102M_GEFORCE_G102M                                                                         0x0872  /* GeForce G102M */
#define NVIDIA_GPU_C79_GEFORCE_G102M_GEFORCE_G102M_0873                                                                    0x0873  /* GeForce G102M */
#define NVIDIA_GPU_C79_ION_ION                                                                                             0x0874  /* ION */
#define NVIDIA_GPU_C79_GEFORCE_9400M_ION                                                                                   0x0876  /* GeForce 9400M / ION */
#define NVIDIA_GPU_C79_GEFORCE_9400_GEFORCE_9400_087A                                                                      0x087a  /* GeForce 9400 */
#define NVIDIA_GPU_C79_ION_ION_087D                                                                                        0x087d  /* ION */
#define NVIDIA_GPU_C79_ION_LE_ION_LE                                                                                       0x087e  /* ION LE */
#define NVIDIA_GPU_C79_ION_LE_ION_LE_087F                                                                                  0x087f  /* ION LE */
#define NVIDIA_GPU_MCP89_GEFORCE_320M_GEFORCE_320M                                                                         0x08a0  /* GeForce 320M */
#define NVIDIA_GPU_MCP89_GEFORCE_320M_GEFORCE_320M_08A2                                                                    0x08a2  /* GeForce 320M */
#define NVIDIA_GPU_MCP89_GEFORCE_320M_GEFORCE_320M_08A3                                                                    0x08a3  /* GeForce 320M */
#define NVIDIA_GPU_MCP89_GEFORCE_320M_GEFORCE_320M_08A4                                                                    0x08a4  /* GeForce 320M */
#define NVIDIA_GPU_MCP89_GEFORCE_320M_GEFORCE_320M_08A5                                                                    0x08a5  /* GeForce 320M */
#define NVIDIA_GPU_GT216_GEFORCE_GT_220                                                                                    0x0a20  /* GeForce GT 220 */
#define NVIDIA_GPU_GT216M_GEFORCE_GT_330M_GEFORCE_GT_330M                                                                  0x0a21  /* GeForce GT 330M */
#define NVIDIA_GPU_GT216_GEFORCE_315                                                                                       0x0a22  /* GeForce 315 */
#define NVIDIA_GPU_GT216_GEFORCE_210                                                                                       0x0a23  /* GeForce 210 */
#define NVIDIA_GPU_GT216_GEFORCE_405_GEFORCE_405                                                                           0x0a24  /* GeForce 405 */
#define NVIDIA_GPU_GT216_GEFORCE_405_GEFORCE_405_0A26                                                                      0x0a26  /* GeForce 405 */
#define NVIDIA_GPU_GT216_GEFORCE_405_GEFORCE_405_0A27                                                                      0x0a27  /* GeForce 405 */
#define NVIDIA_GPU_GT216M_GEFORCE_GT_230M_GEFORCE_GT_230M                                                                  0x0a28  /* GeForce GT 230M */
#define NVIDIA_GPU_GT216M_GEFORCE_GT_330M_GEFORCE_GT_330M_0A29                                                             0x0a29  /* GeForce GT 330M */
#define NVIDIA_GPU_GT216M_GEFORCE_GT_230M_GEFORCE_GT_230M_0A2A                                                             0x0a2a  /* GeForce GT 230M */
#define NVIDIA_GPU_GT216M_GEFORCE_GT_330M_GEFORCE_GT_330M_0A2B                                                             0x0a2b  /* GeForce GT 330M */
#define NVIDIA_GPU_GT216M_NVS_5100M                                                                                        0x0a2c  /* NVS 5100M */
#define NVIDIA_GPU_GT216M_GEFORCE_GT_320M                                                                                  0x0a2d  /* GeForce GT 320M */
#define NVIDIA_GPU_GT216_GEFORCE_505                                                                                       0x0a30  /* GeForce 505 */
#define NVIDIA_GPU_GT216_GEFORCE_GT_415                                                                                    0x0a32  /* GeForce GT 415 */
#define NVIDIA_GPU_GT216M_GEFORCE_GT_240M                                                                                  0x0a34  /* GeForce GT 240M */
#define NVIDIA_GPU_GT216M_GEFORCE_GT_325M                                                                                  0x0a35  /* GeForce GT 325M */
#define NVIDIA_GPU_GT216GL_QUADRO_400                                                                                      0x0a38  /* Quadro 400 */
#define NVIDIA_GPU_GT216GLM_QUADRO_FX_880M                                                                                 0x0a3c  /* Quadro FX 880M */
#define NVIDIA_GPU_GT218_GEFORCE_G210                                                                                      0x0a60  /* GeForce G210 */
#define NVIDIA_GPU_GT218_GEFORCE_205                                                                                       0x0a62  /* GeForce 205 */
#define NVIDIA_GPU_GT218_GEFORCE_310_GEFORCE_310                                                                           0x0a63  /* GeForce 310 */
#define NVIDIA_GPU_GT218_ION                                                                                               0x0a64  /* ION */
#define NVIDIA_GPU_GT218_GEFORCE_210                                                                                       0x0a65  /* GeForce 210 */
#define NVIDIA_GPU_GT218_GEFORCE_310_GEFORCE_310_0A66                                                                      0x0a66  /* GeForce 310 */
#define NVIDIA_GPU_GT218_GEFORCE_315                                                                                       0x0a67  /* GeForce 315 */
#define NVIDIA_GPU_GT218M_GEFORCE_G_105M_GEFORCE_G_105M                                                                    0x0a68  /* GeForce G 105M */
#define NVIDIA_GPU_GT218M_GEFORCE_G_105M_GEFORCE_G_105M_0A69                                                               0x0a69  /* GeForce G 105M */
#define NVIDIA_GPU_GT218M_NVS_2100M                                                                                        0x0a6a  /* NVS 2100M */
#define NVIDIA_GPU_GT218M_NVS_3100M                                                                                        0x0a6c  /* NVS 3100M */
#define NVIDIA_GPU_GT218M_GEFORCE_305M_GEFORCE_305M                                                                        0x0a6e  /* GeForce 305M */
#define NVIDIA_GPU_GT218M_ION                                                                                              0x0a6f  /* ION */
#define NVIDIA_GPU_GT218M_GEFORCE_310M_GEFORCE_310M                                                                        0x0a70  /* GeForce 310M */
#define NVIDIA_GPU_GT218M_GEFORCE_305M_GEFORCE_305M_0A71                                                                   0x0a71  /* GeForce 305M */
#define NVIDIA_GPU_GT218M_GEFORCE_310M_GEFORCE_310M_0A72                                                                   0x0a72  /* GeForce 310M */
#define NVIDIA_GPU_GT218M_GEFORCE_305M_GEFORCE_305M_0A73                                                                   0x0a73  /* GeForce 305M */
#define NVIDIA_GPU_GT218M_GEFORCE_G210M                                                                                    0x0a74  /* GeForce G210M */
#define NVIDIA_GPU_GT218M_GEFORCE_310M_GEFORCE_310M_0A75                                                                   0x0a75  /* GeForce 310M */
#define NVIDIA_GPU_GT218M_ION_2                                                                                            0x0a76  /* ION 2 */
#define NVIDIA_GPU_GT218GL_QUADRO_FX_380_LP                                                                                0x0a78  /* Quadro FX 380 LP */
#define NVIDIA_GPU_GT218M_GEFORCE_315M                                                                                     0x0a7a  /* GeForce 315M */
#define NVIDIA_GPU_GT218_GEFORCE_505                                                                                       0x0a7b  /* GeForce 505 */
#define NVIDIA_GPU_GT218GLM_QUADRO_FX_380M                                                                                 0x0a7c  /* Quadro FX 380M */
#define NVIDIA_GPU_MCP79_HOST_BRIDGE_HOST_BRIDGE                                                                           0x0a80  /* Host Bridge */
#define NVIDIA_GPU_MCP79_HOST_BRIDGE_HOST_BRIDGE_0A81                                                                      0x0a81  /* Host Bridge */
#define NVIDIA_GPU_MCP79_HOST_BRIDGE_HOST_BRIDGE_0A82                                                                      0x0a82  /* Host Bridge */
#define NVIDIA_GPU_MCP79_HOST_BRIDGE_HOST_BRIDGE_0A83                                                                      0x0a83  /* Host Bridge */
#define NVIDIA_GPU_MCP79_HOST_BRIDGE_HOST_BRIDGE_0A84                                                                      0x0a84  /* Host Bridge */
#define NVIDIA_GPU_MCP79_HOST_BRIDGE_HOST_BRIDGE_0A85                                                                      0x0a85  /* Host Bridge */
#define NVIDIA_GPU_MCP79_HOST_BRIDGE_HOST_BRIDGE_0A86                                                                      0x0a86  /* Host Bridge */
#define NVIDIA_GPU_MCP79_HOST_BRIDGE_HOST_BRIDGE_0A87                                                                      0x0a87  /* Host Bridge */
#define NVIDIA_GPU_MCP79_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                               0x0a88  /* Memory Controller */
#define NVIDIA_GPU_MCP79_MEMORY_CONTROLLER_MEMORY_CONTROLLER_0A89                                                          0x0a89  /* Memory Controller */
#define NVIDIA_GPU_MCP79_MEMORY_CONTROLLER_MEMORY_CONTROLLER_0A98                                                          0x0a98  /* Memory Controller */
#define NVIDIA_GPU_MCP79_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE                                                             0x0aa0  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP79_SMBUS                                                                                             0x0aa2  /* SMBus */
#define NVIDIA_GPU_MCP79_CO_PROCESSOR                                                                                      0x0aa3  /* Co-processor */
#define NVIDIA_GPU_MCP79_MEMORY_CONTROLLER_MEMORY_CONTROLLER_0AA4                                                          0x0aa4  /* Memory Controller */
#define NVIDIA_GPU_MCP79_OHCI_USB_1_1_CONTROLLER_OHCI_USB_1_1_CONTROLLER                                                   0x0aa5  /* OHCI USB 1.1 Controller */
#define NVIDIA_GPU_MCP79_EHCI_USB_2_0_CONTROLLER_EHCI_USB_2_0_CONTROLLER                                                   0x0aa6  /* EHCI USB 2.0 Controller */
#define NVIDIA_GPU_MCP79_OHCI_USB_1_1_CONTROLLER_OHCI_USB_1_1_CONTROLLER_0AA7                                              0x0aa7  /* OHCI USB 1.1 Controller */
#define NVIDIA_GPU_MCP79_OHCI_USB_1_1_CONTROLLER_OHCI_USB_1_1_CONTROLLER_0AA8                                              0x0aa8  /* OHCI USB 1.1 Controller */
#define NVIDIA_GPU_MCP79_EHCI_USB_2_0_CONTROLLER_EHCI_USB_2_0_CONTROLLER_0AA9                                              0x0aa9  /* EHCI USB 2.0 Controller */
#define NVIDIA_GPU_MCP79_EHCI_USB_2_0_CONTROLLER_EHCI_USB_2_0_CONTROLLER_0AAA                                              0x0aaa  /* EHCI USB 2.0 Controller */
#define NVIDIA_GPU_MCP79_PCI_BRIDGE                                                                                        0x0aab  /* PCI Bridge */
#define NVIDIA_GPU_MCP79_LPC_BRIDGE_LPC_BRIDGE                                                                             0x0aac  /* LPC Bridge */
#define NVIDIA_GPU_MCP79_LPC_BRIDGE_LPC_BRIDGE_0AAD                                                                        0x0aad  /* LPC Bridge */
#define NVIDIA_GPU_MCP79_LPC_BRIDGE_LPC_BRIDGE_0AAE                                                                        0x0aae  /* LPC Bridge */
#define NVIDIA_GPU_MCP79_LPC_BRIDGE_LPC_BRIDGE_0AAF                                                                        0x0aaf  /* LPC Bridge */
#define NVIDIA_GPU_MCP79_ETHERNET_ETHERNET                                                                                 0x0ab0  /* Ethernet */
#define NVIDIA_GPU_MCP79_ETHERNET_ETHERNET_0AB1                                                                            0x0ab1  /* Ethernet */
#define NVIDIA_GPU_MCP79_ETHERNET_ETHERNET_0AB2                                                                            0x0ab2  /* Ethernet */
#define NVIDIA_GPU_MCP79_ETHERNET_ETHERNET_0AB3                                                                            0x0ab3  /* Ethernet */
#define NVIDIA_GPU_MCP79_SATA_CONTROLLER_SATA_CONTROLLER                                                                   0x0ab4  /* SATA Controller */
#define NVIDIA_GPU_MCP79_SATA_CONTROLLER_SATA_CONTROLLER_0AB5                                                              0x0ab5  /* SATA Controller */
#define NVIDIA_GPU_MCP79_SATA_CONTROLLER_SATA_CONTROLLER_0AB6                                                              0x0ab6  /* SATA Controller */
#define NVIDIA_GPU_MCP79_SATA_CONTROLLER_SATA_CONTROLLER_0AB7                                                              0x0ab7  /* SATA Controller */
#define NVIDIA_GPU_MCP79_AHCI_CONTROLLER_AHCI_CONTROLLER                                                                   0x0ab8  /* AHCI Controller */
#define NVIDIA_GPU_MCP79_AHCI_CONTROLLER_AHCI_CONTROLLER_0AB9                                                              0x0ab9  /* AHCI Controller */
#define NVIDIA_GPU_MCP79_AHCI_CONTROLLER_AHCI_CONTROLLER_0ABA                                                              0x0aba  /* AHCI Controller */
#define NVIDIA_GPU_MCP79_AHCI_CONTROLLER_AHCI_CONTROLLER_0ABB                                                              0x0abb  /* AHCI Controller */
#define NVIDIA_GPU_MCP79_RAID_CONTROLLER_RAID_CONTROLLER                                                                   0x0abc  /* RAID Controller */
#define NVIDIA_GPU_MCP79_RAID_CONTROLLER_RAID_CONTROLLER_0ABD                                                              0x0abd  /* RAID Controller */
#define NVIDIA_GPU_MCP79_RAID_CONTROLLER_RAID_CONTROLLER_0ABE                                                              0x0abe  /* RAID Controller */
#define NVIDIA_GPU_MCP79_RAID_CONTROLLER_RAID_CONTROLLER_0ABF                                                              0x0abf  /* RAID Controller */
#define NVIDIA_GPU_MCP79_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO                                                       0x0ac0  /* High Definition Audio */
#define NVIDIA_GPU_MCP79_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO_0AC1                                                  0x0ac1  /* High Definition Audio */
#define NVIDIA_GPU_MCP79_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO_0AC2                                                  0x0ac2  /* High Definition Audio */
#define NVIDIA_GPU_MCP79_HIGH_DEFINITION_AUDIO_HIGH_DEFINITION_AUDIO_0AC3                                                  0x0ac3  /* High Definition Audio */
#define NVIDIA_GPU_MCP79_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0AC4                                                        0x0ac4  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP79_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0AC5                                                        0x0ac5  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP79_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0AC6                                                        0x0ac6  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP79_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0AC7                                                        0x0ac7  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP79_PCI_EXPRESS_BRIDGE_PCI_EXPRESS_BRIDGE_0AC8                                                        0x0ac8  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0AD0                                                                   0x0ad0  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0AD4                                                                   0x0ad4  /* GeForce 8200 */
#define NVIDIA_GPU_MCP78S_GEFORCE_8200_GEFORCE_8200_0AD8                                                                   0x0ad8  /* GeForce 8200 */
#define NVIDIA_GPU_GT216_HDMI_AUDIO_CONTROLLER                                                                             0x0be2  /* HDMI Audio Controller */
#define NVIDIA_GPU_HIGH_DEFINITION_AUDIO_CONTROLLER_DEFINITION_AUDIO_CONTROLLER                                            0x0be3  /* Definition Audio Controller */
#define NVIDIA_GPU_HIGH_DEFINITION_AUDIO_CONTROLLER_DEFINITION_AUDIO_CONTROLLER_0BE4                                       0x0be4  /* Definition Audio Controller */
#define NVIDIA_GPU_GF100_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0be5  /* High Definition Audio Controller */
#define NVIDIA_GPU_GF106_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0be9  /* High Definition Audio Controller */
#define NVIDIA_GPU_GF108_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0bea  /* High Definition Audio Controller */
#define NVIDIA_GPU_GF104_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0beb  /* High Definition Audio Controller */
#define NVIDIA_GPU_GF116_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0bee  /* High Definition Audio Controller */
#define NVIDIA_GPU_TEGRA2_PCIE_X4_BRIDGE                                                                                   0x0bf0  /* PCIe x4 Bridge */
#define NVIDIA_GPU_TEGRA2_PCIE_X2_BRIDGE                                                                                   0x0bf1  /* PCIe x2 Bridge */
#define NVIDIA_GPU_GT215_GEFORCE_GT_330_GEFORCE_GT_330                                                                     0x0ca0  /* GeForce GT 330 */
#define NVIDIA_GPU_GT215_GEFORCE_GT_320                                                                                    0x0ca2  /* GeForce GT 320 */
#define NVIDIA_GPU_GT215_GEFORCE_GT_240                                                                                    0x0ca3  /* GeForce GT 240 */
#define NVIDIA_GPU_GT215_GEFORCE_GT_340                                                                                    0x0ca4  /* GeForce GT 340 */
#define NVIDIA_GPU_GT215_GEFORCE_GT_220                                                                                    0x0ca5  /* GeForce GT 220 */
#define NVIDIA_GPU_GT215_GEFORCE_GT_330_GEFORCE_GT_330_0CA7                                                                0x0ca7  /* GeForce GT 330 */
#define NVIDIA_GPU_GT215M_GEFORCE_GTS_260M                                                                                 0x0ca8  /* GeForce GTS 260M */
#define NVIDIA_GPU_GT215M_GEFORCE_GTS_250M                                                                                 0x0ca9  /* GeForce GTS 250M */
#define NVIDIA_GPU_GT215_GEFORCE_GT_220_315                                                                                0x0cac  /* GeForce GT 220/315 */
#define NVIDIA_GPU_GT215M_GEFORCE_GT_335M                                                                                  0x0caf  /* GeForce GT 335M */
#define NVIDIA_GPU_GT215M_GEFORCE_GTS_350M                                                                                 0x0cb0  /* GeForce GTS 350M */
#define NVIDIA_GPU_GT215M_GEFORCE_GTS_360M                                                                                 0x0cb1  /* GeForce GTS 360M */
#define NVIDIA_GPU_GT215GLM_QUADRO_FX_1800M                                                                                0x0cbc  /* Quadro FX 1800M */
#define NVIDIA_GPU_MCP89_HOST_BRIDGE                                                                                       0x0d60  /* HOST Bridge */
#define NVIDIA_GPU_MCP89_MEMORY_CONTROLLER_MEMORY_CONTROLLER                                                               0x0d68  /* Memory Controller */
#define NVIDIA_GPU_MCP89_MEMORY_CONTROLLER_MEMORY_CONTROLLER_0D69                                                          0x0d69  /* Memory Controller */
#define NVIDIA_GPU_MCP89_PCI_EXPRESS_BRIDGE                                                                                0x0d76  /* PCI Express Bridge */
#define NVIDIA_GPU_MCP89_SMBUS                                                                                             0x0d79  /* SMBus */
#define NVIDIA_GPU_MCP89_CO_PROCESSOR                                                                                      0x0d7a  /* Co-Processor */
#define NVIDIA_GPU_MCP89_MEMORY_CONTROLLER_MEMORY_CONTROLLER_0D7B                                                          0x0d7b  /* Memory Controller */
#define NVIDIA_GPU_MCP89_ETHERNET                                                                                          0x0d7d  /* Ethernet */
#define NVIDIA_GPU_MCP89_LPC_BRIDGE                                                                                        0x0d80  /* LPC Bridge */
#define NVIDIA_GPU_MCP89_SATA_CONTROLLER                                                                                   0x0d85  /* SATA Controller */
#define NVIDIA_GPU_MCP89_SATA_CONTROLLER_AHCI_MODE_SATA_CONTROLLER_AHCI_MODE                                               0x0d88  /* SATA Controller (AHCI mode) */
#define NVIDIA_GPU_MCP89_SATA_CONTROLLER_AHCI_MODE_SATA_CONTROLLER_AHCI_MODE_0D89                                          0x0d89  /* SATA Controller (AHCI mode) */
#define NVIDIA_GPU_MCP89_SATA_CONTROLLER_RAID_MODE                                                                         0x0d8d  /* SATA Controller (RAID mode) */
#define NVIDIA_GPU_MCP89_HIGH_DEFINITION_AUDIO                                                                             0x0d94  /* High Definition Audio */
#define NVIDIA_GPU_MCP89_OHCI_USB_1_1_CONTROLLER                                                                           0x0d9c  /* OHCI USB 1.1 Controller */
#define NVIDIA_GPU_MCP89_EHCI_USB_2_0_CONTROLLER                                                                           0x0d9d  /* EHCI USB 2.0 Controller */
#define NVIDIA_GPU_GF106_GEFORCE_GT_440                                                                                    0x0dc0  /* GeForce GT 440 */
#define NVIDIA_GPU_GF106_GEFORCE_GTS_450                                                                                   0x0dc4  /* GeForce GTS 450 */
#define NVIDIA_GPU_GF106_GEFORCE_GTS_450_OEM_GEFORCE_GTS_450_OEM                                                           0x0dc5  /* GeForce GTS 450 OEM */
#define NVIDIA_GPU_GF106_GEFORCE_GTS_450_OEM_GEFORCE_GTS_450_OEM_0DC6                                                      0x0dc6  /* GeForce GTS 450 OEM */
#define NVIDIA_GPU_GF106M_GEFORCE_GT_555M_GEFORCE_GT_555M                                                                  0x0dcd  /* GeForce GT 555M */
#define NVIDIA_GPU_GF106M_GEFORCE_GT_555M_GEFORCE_GT_555M_0DCE                                                             0x0dce  /* GeForce GT 555M */
#define NVIDIA_GPU_GF106M_GEFORCE_GTX_460M                                                                                 0x0dd1  /* GeForce GTX 460M */
#define NVIDIA_GPU_GF106M_GEFORCE_GT_445M                                                                                  0x0dd2  /* GeForce GT 445M */
#define NVIDIA_GPU_GF106M_GEFORCE_GT_435M                                                                                  0x0dd3  /* GeForce GT 435M */
#define NVIDIA_GPU_GF106M_GEFORCE_GT_550M                                                                                  0x0dd6  /* GeForce GT 550M */
#define NVIDIA_GPU_GF106GL_QUADRO_2000                                                                                     0x0dd8  /* Quadro 2000 */
#define NVIDIA_GPU_GF106GLM_QUADRO_2000M                                                                                   0x0dda  /* Quadro 2000M */
#define NVIDIA_GPU_GF108_GEFORCE_GT_440                                                                                    0x0de0  /* GeForce GT 440 */
#define NVIDIA_GPU_GF108_GEFORCE_GT_430                                                                                    0x0de1  /* GeForce GT 430 */
#define NVIDIA_GPU_GF108_GEFORCE_GT_420                                                                                    0x0de2  /* GeForce GT 420 */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_635M                                                                                  0x0de3  /* GeForce GT 635M */
#define NVIDIA_GPU_GF108_GEFORCE_GT_520                                                                                    0x0de4  /* GeForce GT 520 */
#define NVIDIA_GPU_GF108_GEFORCE_GT_530                                                                                    0x0de5  /* GeForce GT 530 */
#define NVIDIA_GPU_GF108_GEFORCE_GT_610_GEFORCE_GT_610                                                                     0x0de7  /* GeForce GT 610 */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_620M                                                                                  0x0de8  /* GeForce GT 620M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_620M_630M_635M_640M_LE                                                                0x0de9  /* GeForce GT 620M/630M/635M/640M LE */
#define NVIDIA_GPU_GF108M_GEFORCE_610M                                                                                     0x0dea  /* GeForce 610M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_555M                                                                                  0x0deb  /* GeForce GT 555M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_525M_GEFORCE_GT_525M                                                                  0x0dec  /* GeForce GT 525M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_520M_GEFORCE_GT_520M                                                                  0x0ded  /* GeForce GT 520M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_415M                                                                                  0x0dee  /* GeForce GT 415M */
#define NVIDIA_GPU_GF108M_NVS_5400M                                                                                        0x0def  /* NVS 5400M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_425M                                                                                  0x0df0  /* GeForce GT 425M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_420M_GEFORCE_GT_420M                                                                  0x0df1  /* GeForce GT 420M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_435M                                                                                  0x0df2  /* GeForce GT 435M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_420M_GEFORCE_GT_420M_0DF3                                                             0x0df3  /* GeForce GT 420M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_540M                                                                                  0x0df4  /* GeForce GT 540M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_525M_GEFORCE_GT_525M_0DF5                                                             0x0df5  /* GeForce GT 525M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_550M                                                                                  0x0df6  /* GeForce GT 550M */
#define NVIDIA_GPU_GF108M_GEFORCE_GT_520M_GEFORCE_GT_520M_0DF7                                                             0x0df7  /* GeForce GT 520M */
#define NVIDIA_GPU_GF108GL_QUADRO_600                                                                                      0x0df8  /* Quadro 600 */
#define NVIDIA_GPU_GF108GLM_QUADRO_500M                                                                                    0x0df9  /* Quadro 500M */
#define NVIDIA_GPU_GF108GLM_QUADRO_1000M                                                                                   0x0dfa  /* Quadro 1000M */
#define NVIDIA_GPU_GF108GLM_NVS_5200M                                                                                      0x0dfc  /* NVS 5200M */
#define NVIDIA_GPU_GF119_HDMI_AUDIO_CONTROLLER                                                                             0x0e08  /* HDMI Audio Controller */
#define NVIDIA_GPU_GF110_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0e09  /* High Definition Audio Controller */
#define NVIDIA_GPU_GK104_HDMI_AUDIO_CONTROLLER                                                                             0x0e0a  /* HDMI Audio Controller */
#define NVIDIA_GPU_GK106_HDMI_AUDIO_CONTROLLER                                                                             0x0e0b  /* HDMI Audio Controller */
#define NVIDIA_GPU_GF114_HDMI_AUDIO_CONTROLLER                                                                             0x0e0c  /* HDMI Audio Controller */
#define NVIDIA_GPU_GK208_HDMI_DP_AUDIO_CONTROLLER                                                                          0x0e0f  /* HDMI/DP Audio Controller */
#define NVIDIA_GPU_TEGRAK1_PCIE_X4_BRIDGE                                                                                  0x0e12  /* PCIe x4 Bridge */
#define NVIDIA_GPU_TEGRAK1_PCIE_X1_BRIDGE                                                                                  0x0e13  /* PCIe x1 Bridge */
#define NVIDIA_GPU_GK110_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0e1a  /* High Definition Audio Controller */
#define NVIDIA_GPU_GK107_HDMI_AUDIO_CONTROLLER                                                                             0x0e1b  /* HDMI Audio Controller */
#define NVIDIA_GPU_TEGRA3_PCIE_X4_BRIDGE                                                                                   0x0e1c  /* PCIe x4 Bridge */
#define NVIDIA_GPU_TEGRA3_PCIE_X2_BRIDGE                                                                                   0x0e1d  /* PCIe x2 Bridge */
#define NVIDIA_GPU_GF104_GEFORCE_GTX_460                                                                                   0x0e22  /* GeForce GTX 460 */
#define NVIDIA_GPU_GF104_GEFORCE_GTX_460_SE                                                                                0x0e23  /* GeForce GTX 460 SE */
#define NVIDIA_GPU_GF104_GEFORCE_GTX_460_OEM                                                                               0x0e24  /* GeForce GTX 460 OEM */
#define NVIDIA_GPU_GF104M_GEFORCE_GTX_470M                                                                                 0x0e30  /* GeForce GTX 470M */
#define NVIDIA_GPU_GF104M_GEFORCE_GTX_485M                                                                                 0x0e31  /* GeForce GTX 485M */
#define NVIDIA_GPU_GF104GLM_QUADRO_3000M                                                                                   0x0e3a  /* Quadro 3000M */
#define NVIDIA_GPU_GF104GLM_QUADRO_4000M                                                                                   0x0e3b  /* Quadro 4000M */
#define NVIDIA_GPU_GF108_GEFORCE_GT_630                                                                                    0x0f00  /* GeForce GT 630 */
#define NVIDIA_GPU_GF108_GEFORCE_GT_620                                                                                    0x0f01  /* GeForce GT 620 */
#define NVIDIA_GPU_GF108_GEFORCE_GT_730_GEFORCE_GT_730                                                                     0x0f02  /* GeForce GT 730 */
#define NVIDIA_GPU_GF108_GEFORCE_GT_610_GEFORCE_GT_610_0F03                                                                0x0f03  /* GeForce GT 610 */
#define NVIDIA_GPU_GF108_GEFORCE_GT_730_GEFORCE_GT_730_0F06                                                                0x0f06  /* GeForce GT 730 */
#define NVIDIA_GPU_GK11X_GK11X_FPGA                                                                                        0x0fa0  /* GK11x_FPGA */
#define NVIDIA_GPU_GK11X_GK11X                                                                                             0x0fa5  /* GK11x */
#define NVIDIA_GPU_GK11X_TEGRA_ON_X86_PEATRANS                                                                             0x0fa7  /* Tegra on x86 (PEATRANS) */
#define NVIDIA_GPU_TEGRA_X1_PCIE_X4_ROOT_COMPLEX                                                                           0x0fae  /* X1 PCIe x4 Root Complex */
#define NVIDIA_GPU_TEGRA_X1_PCIE_X1_ROOT_COMPLEX                                                                           0x0faf  /* X1 PCIe x1 Root Complex */
#define NVIDIA_GPU_GM200_HIGH_DEFINITION_AUDIO                                                                             0x0fb0  /* High Definition Audio */
#define NVIDIA_GPU_GP108_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0fb8  /* High Definition Audio Controller */
#define NVIDIA_GPU_GP107GL_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                0x0fb9  /* High Definition Audio Controller */
#define NVIDIA_GPU_GM206_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0fba  /* High Definition Audio Controller */
#define NVIDIA_GPU_GM204_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x0fbb  /* High Definition Audio Controller */
#define NVIDIA_GPU_GM107_HIGH_DEFINITION_AUDIO_CONTROLLER_GEFORCE_940MX                                                    0x0fbc  /* High Definition Audio Controller [GeForce 940MX] */
#define NVIDIA_GPU_GK107_GEFORCE_GT_640_OEM                                                                                0x0fc0  /* GeForce GT 640 OEM */
#define NVIDIA_GPU_GK107_GEFORCE_GT_640                                                                                    0x0fc1  /* GeForce GT 640 */
#define NVIDIA_GPU_GK107_GEFORCE_GT_630_OEM                                                                                0x0fc2  /* GeForce GT 630 OEM */
#define NVIDIA_GPU_GK107_D14P1_15                                                                                          0x0fc4  /* D14P1-15 */
#define NVIDIA_GPU_GK107_GEFORCE_GT_1030                                                                                   0x0fc5  /* GeForce GT 1030 */
#define NVIDIA_GPU_GK107_GEFORCE_GTX_650                                                                                   0x0fc6  /* GeForce GTX 650 */
#define NVIDIA_GPU_GK107_GEFORCE_GT_740                                                                                    0x0fc8  /* GeForce GT 740 */
#define NVIDIA_GPU_GK107_GEFORCE_GT_730                                                                                    0x0fc9  /* GeForce GT 730 */
#define NVIDIA_GPU_GK107_EXK107                                                                                            0x0fcb  /* EXK107 */
#define NVIDIA_GPU_GK107_GEFORCE_GT_720                                                                                    0x0fcc  /* GeForce GT 720 */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_755M                                                                                  0x0fcd  /* GeForce GT 755M */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_640M_LE_GEFORCE_GT_640M_LE                                                            0x0fce  /* GeForce GT 640M LE */
#define NVIDIA_GPU_GK107_GEN3_ESI                                                                                          0x0fcf  /* GEN3 ESI */
#define NVIDIA_GPU_GK107_NB1G                                                                                              0x0fd0  /* NB1G */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_650M                                                                                  0x0fd1  /* GeForce GT 650M */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_640M                                                                                  0x0fd2  /* GeForce GT 640M */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_640M_LE_GEFORCE_GT_640M_LE_0FD3                                                       0x0fd3  /* GeForce GT 640M LE */
#define NVIDIA_GPU_GK107M_GEFORCE_GTX_660M                                                                                 0x0fd4  /* GeForce GTX 660M */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_650M_MAC_EDITION                                                                      0x0fd5  /* GeForce GT 650M Mac Edition */
#define NVIDIA_GPU_GK107M_N13P_GS_W                                                                                        0x0fd6  /* N13P-GS-W */
#define NVIDIA_GPU_GK107_GK107_GTX                                                                                         0x0fd7  /* GK107-GTX */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_640M_MAC_EDITION                                                                      0x0fd8  /* GeForce GT 640M Mac Edition */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_645M                                                                                  0x0fd9  /* GeForce GT 645M */
#define NVIDIA_GPU_GK107_GK107_ES_A1                                                                                       0x0fda  /* GK107-ES-A1 */
#define NVIDIA_GPU_GK107_GK107_ESP_A1                                                                                      0x0fdb  /* GK107-ESP-A1 */
#define NVIDIA_GPU_GK107_GK107_INT22_A1                                                                                    0x0fdc  /* GK107-INT22-A1 */
#define NVIDIA_GPU_GK107_GK107_INT11_A1                                                                                    0x0fdd  /* GK107-INT11-A1 */
#define NVIDIA_GPU_GK107_GK107_ES_KA_E1                                                                                    0x0fde  /* GK107-ES-KA-E1 */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_740M                                                                                  0x0fdf  /* GeForce GT 740M */
#define NVIDIA_GPU_GK107M_GEFORCE_GTX_660M_MAC_EDITION                                                                     0x0fe0  /* GeForce GTX 660M Mac Edition */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_730M                                                                                  0x0fe1  /* GeForce GT 730M */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_745M_GEFORCE_GT_745M                                                                  0x0fe2  /* GeForce GT 745M */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_745M_GEFORCE_GT_745M_0FE3                                                             0x0fe3  /* GeForce GT 745M */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_750M                                                                                  0x0fe4  /* GeForce GT 750M */
#define NVIDIA_GPU_GK107_GEFORCE_K340_USM                                                                                  0x0fe5  /* GeForce K340 USM */
#define NVIDIA_GPU_GK107_GRID_K1_NVS_USM                                                                                   0x0fe6  /* GRID K1 NVS USM */
#define NVIDIA_GPU_GK107GL_GRID_K100_VGPU                                                                                  0x0fe7  /* GRID K100 vGPU */
#define NVIDIA_GPU_GK107M_N14P_GS                                                                                          0x0fe8  /* N14P-GS */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_750M_MAC_EDITION                                                                      0x0fe9  /* GeForce GT 750M Mac Edition */
#define NVIDIA_GPU_GK107M_GEFORCE_GT_755M_MAC_EDITION                                                                      0x0fea  /* GeForce GT 755M Mac Edition */
#define NVIDIA_GPU_GK107M_GEFORCE_710A                                                                                     0x0fec  /* GeForce 710A */
#define NVIDIA_GPU_GK107M_GEFORCE_820M                                                                                     0x0fed  /* GeForce 820M */
#define NVIDIA_GPU_GK107M_GEFORCE_810M                                                                                     0x0fee  /* GeForce 810M */
#define NVIDIA_GPU_GK107GL_GRID_K340                                                                                       0x0fef  /* GRID K340 */
#define NVIDIA_GPU_GK107_NB1Q                                                                                              0x0ff0  /* NB1Q */
#define NVIDIA_GPU_GK107_NVS_1000                                                                                          0x0ff1  /* NVS 1000 */
#define NVIDIA_GPU_GK107GL_GRID_K1                                                                                         0x0ff2  /* GRID K1 */
#define NVIDIA_GPU_GK107GL_QUADRO_K420                                                                                     0x0ff3  /* Quadro K420 */
#define NVIDIA_GPU_GK107GL_GRID_K1_TESLA_USM                                                                               0x0ff5  /* GRID K1 Tesla USM */
#define NVIDIA_GPU_GK107GLM_QUADRO_K1100M                                                                                  0x0ff6  /* Quadro K1100M */
#define NVIDIA_GPU_GK107GL_GRID_K140Q_VGPU                                                                                 0x0ff7  /* GRID K140Q vGPU */
#define NVIDIA_GPU_GK107GLM_QUADRO_K500M                                                                                   0x0ff8  /* Quadro K500M */
#define NVIDIA_GPU_GK107GL_QUADRO_K2000D                                                                                   0x0ff9  /* Quadro K2000D */
#define NVIDIA_GPU_GK107GL_QUADRO_K600                                                                                     0x0ffa  /* Quadro K600 */
#define NVIDIA_GPU_GK107GLM_QUADRO_K2000M                                                                                  0x0ffb  /* Quadro K2000M */
#define NVIDIA_GPU_GK107GLM_QUADRO_K1000M                                                                                  0x0ffc  /* Quadro K1000M */
#define NVIDIA_GPU_GK107_NVS_510                                                                                           0x0ffd  /* NVS 510 */
#define NVIDIA_GPU_GK107GL_QUADRO_K2000                                                                                    0x0ffe  /* Quadro K2000 */
#define NVIDIA_GPU_GK107GL_QUADRO_410                                                                                      0x0fff  /* Quadro 410 */
#define NVIDIA_GPU_GK110B_GEFORCE_GTX_TITAN_Z                                                                              0x1001  /* GeForce GTX TITAN Z */
#define NVIDIA_GPU_GK110_GEFORCE_GTX_TITAN_LE                                                                              0x1003  /* GeForce GTX Titan LE */
#define NVIDIA_GPU_GK110_GEFORCE_GTX_780                                                                                   0x1004  /* GeForce GTX 780 */
#define NVIDIA_GPU_GK110_GEFORCE_GTX_TITAN                                                                                 0x1005  /* GeForce GTX TITAN */
#define NVIDIA_GPU_GK110_GEFORCE_GTX_780_REV_2                                                                             0x1007  /* GeForce GTX 780 Rev. 2 */
#define NVIDIA_GPU_GK110_GEFORCE_GTX_780_TI_6GB                                                                            0x1008  /* GeForce GTX 780 Ti 6GB */
#define NVIDIA_GPU_GK110B_GEFORCE_GTX_780_TI                                                                               0x100a  /* GeForce GTX 780 Ti */
#define NVIDIA_GPU_GK110B_GEFORCE_GTX_TITAN_BLACK                                                                          0x100c  /* GeForce GTX TITAN Black */
#define NVIDIA_GPU_GK110GL_TESLA_K20X_TESLA_K20X                                                                           0x101e  /* Tesla K20X */
#define NVIDIA_GPU_GK110GL_TESLA_K20                                                                                       0x101f  /* Tesla K20 */
#define NVIDIA_GPU_GK110GL_TESLA_K20X_TESLA_K20X_1020                                                                      0x1020  /* Tesla K20X */
#define NVIDIA_GPU_GK110GL_TESLA_K20XM                                                                                     0x1021  /* Tesla K20Xm */
#define NVIDIA_GPU_GK110GL_TESLA_K20C                                                                                      0x1022  /* Tesla K20c */
#define NVIDIA_GPU_GK110BGL_TESLA_K40M                                                                                     0x1023  /* Tesla K40m */
#define NVIDIA_GPU_GK180GL_TESLA_K40C                                                                                      0x1024  /* Tesla K40c */
#define NVIDIA_GPU_GK110GL_TESLA_K20S                                                                                      0x1026  /* Tesla K20s */
#define NVIDIA_GPU_GK110BGL_TESLA_K40ST                                                                                    0x1027  /* Tesla K40st */
#define NVIDIA_GPU_GK110GL_TESLA_K20M                                                                                      0x1028  /* Tesla K20m */
#define NVIDIA_GPU_GK110BGL_TESLA_K40S                                                                                     0x1029  /* Tesla K40s */
#define NVIDIA_GPU_GK110BGL_TESLA_K40T                                                                                     0x102a  /* Tesla K40t */
#define NVIDIA_GPU_GK210GL_TESLA_K80                                                                                       0x102d  /* Tesla K80 */
#define NVIDIA_GPU_GK110BGL_TESLA_K40D                                                                                     0x102e  /* Tesla K40d */
#define NVIDIA_GPU_GK110BGL_TESLA_STELLA_SOLO                                                                              0x102f  /* Tesla Stella Solo */
#define NVIDIA_GPU_GK110GL_QUADRO_K6000                                                                                    0x103a  /* Quadro K6000 */
#define NVIDIA_GPU_GK110GL_QUADRO_K5200                                                                                    0x103c  /* Quadro K5200 */
#define NVIDIA_GPU_GK110BGL_TESLA_STELLA_SXM                                                                               0x103f  /* Tesla Stella SXM */
#define NVIDIA_GPU_GF119_GEFORCE_GT_520                                                                                    0x1040  /* GeForce GT 520 */
#define NVIDIA_GPU_GF119_GEFORCE_510                                                                                       0x1042  /* GeForce 510 */
#define NVIDIA_GPU_GF119_GF119                                                                                             0x1045  /* GF119 */
#define NVIDIA_GPU_GF119_GEFORCE_605                                                                                       0x1048  /* GeForce 605 */
#define NVIDIA_GPU_GF119_GEFORCE_GT_620_OEM                                                                                0x1049  /* GeForce GT 620 OEM */
#define NVIDIA_GPU_GF119_GEFORCE_GT_610                                                                                    0x104a  /* GeForce GT 610 */
#define NVIDIA_GPU_GF119_GEFORCE_GT_625_OEM                                                                                0x104b  /* GeForce GT 625 OEM */
#define NVIDIA_GPU_GF119_GEFORCE_GT_705                                                                                    0x104c  /* GeForce GT 705 */
#define NVIDIA_GPU_GF119_GEFORCE_GT_710                                                                                    0x104d  /* GeForce GT 710 */
#define NVIDIA_GPU_GF119M_GEFORCE_GT_520M_GEFORCE_GT_520M                                                                  0x1050  /* GeForce GT 520M */
#define NVIDIA_GPU_GF119M_GEFORCE_GT_520MX                                                                                 0x1051  /* GeForce GT 520MX */
#define NVIDIA_GPU_GF119M_GEFORCE_GT_520M_GEFORCE_GT_520M_1052                                                             0x1052  /* GeForce GT 520M */
#define NVIDIA_GPU_GF119M_GEFORCE_410M_GEFORCE_410M                                                                        0x1054  /* GeForce 410M */
#define NVIDIA_GPU_GF119M_GEFORCE_410M_GEFORCE_410M_1055                                                                   0x1055  /* GeForce 410M */
#define NVIDIA_GPU_GF119M_NVS_4200M                                                                                        0x1056  /* NVS 4200M */
#define NVIDIA_GPU_GF119M_QUADRO_NVS_4200M                                                                                 0x1057  /* Quadro NVS 4200M */
#define NVIDIA_GPU_GF119M_GEFORCE_610M_GEFORCE_610M                                                                        0x1058  /* GeForce 610M */
#define NVIDIA_GPU_GF119M_GEFORCE_610M_GEFORCE_610M_1059                                                                   0x1059  /* GeForce 610M */
#define NVIDIA_GPU_GF119M_GEFORCE_610M_GEFORCE_610M_105A                                                                   0x105a  /* GeForce 610M */
#define NVIDIA_GPU_GF119M_GEFORCE_705M                                                                                     0x105b  /* GeForce 705M */
#define NVIDIA_GPU_GF119_NVS_315                                                                                           0x107c  /* NVS 315 */
#define NVIDIA_GPU_GF119_NVS_310                                                                                           0x107d  /* NVS 310 */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_580_GEFORCE_GTX_580                                                                   0x1080  /* GeForce GTX 580 */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_570                                                                                   0x1081  /* GeForce GTX 570 */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_560_TI_OEM                                                                            0x1082  /* GeForce GTX 560 Ti OEM */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_560_OEM                                                                               0x1084  /* GeForce GTX 560 OEM */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_570_REV_2                                                                             0x1086  /* GeForce GTX 570 Rev. 2 */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_560_TI_448_CORES                                                                      0x1087  /* GeForce GTX 560 Ti 448 Cores */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_590                                                                                   0x1088  /* GeForce GTX 590 */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_580_REV_2                                                                             0x1089  /* GeForce GTX 580 Rev. 2 */
#define NVIDIA_GPU_GF110_GEFORCE_GTX_580_GEFORCE_GTX_580_108B                                                              0x108b  /* GeForce GTX 580 */
#define NVIDIA_GPU_GF110GL_TESLA_C2090                                                                                     0x108e  /* Tesla C2090 */
#define NVIDIA_GPU_GF110GL_TESLA_M2090                                                                                     0x1091  /* Tesla M2090 */
#define NVIDIA_GPU_GF110GL_TESLA_M2075                                                                                     0x1094  /* Tesla M2075 */
#define NVIDIA_GPU_GF110GL_TESLA_C2050_C2075                                                                               0x1096  /* Tesla C2050 / C2075 */
#define NVIDIA_GPU_GF100GLM_QUADRO_5010M                                                                                   0x109a  /* Quadro 5010M */
#define NVIDIA_GPU_GF100GL_QUADRO_7000                                                                                     0x109b  /* Quadro 7000 */
#define NVIDIA_GPU_GT218_GEFORCE_9300_GS_REV_2                                                                             0x10c0  /* GeForce 9300 GS Rev. 2 */
#define NVIDIA_GPU_GT218_GEFORCE_8400_GS_REV_3                                                                             0x10c3  /* GeForce 8400 GS Rev. 3 */
#define NVIDIA_GPU_GT218_GEFORCE_405                                                                                       0x10c5  /* GeForce 405 */
#define NVIDIA_GPU_GT218_NVS_300                                                                                           0x10d8  /* NVS 300 */
#define NVIDIA_GPU_PARKER_PCIE_X4_ROOT_COMPLEX                                                                             0x10e5  /* PCIe x4 Root Complex */
#define NVIDIA_GPU_PARKER_PCIE_X1_ROOT_COMPLEX                                                                             0x10e6  /* PCIe x1 Root Complex */
#define NVIDIA_GPU_GP102_HDMI_AUDIO_CONTROLLER                                                                             0x10ef  /* HDMI Audio Controller */
#define NVIDIA_GPU_GP104_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x10f0  /* High Definition Audio Controller */
#define NVIDIA_GPU_GP106_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x10f1  /* High Definition Audio Controller */
#define NVIDIA_GPU_TU102_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x10f7  /* High Definition Audio Controller */
#define NVIDIA_GPU_TU104_HD_AUDIO_CONTROLLER                                                                               0x10f8  /* HD Audio Controller */
#define NVIDIA_GPU_TU106_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x10f9  /* High Definition Audio Controller */
#define NVIDIA_GPU_GF117M_GEFORCE_610M_710M_810M_820M_GT_620M_625M_630M_720M                                               0x1140  /* GeForce 610M/710M/810M/820M / GT 620M/625M/630M/720M */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_680                                                                                   0x1180  /* GeForce GTX 680 */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_760_TI                                                                                0x1182  /* GeForce GTX 760 Ti */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_660_TI_GEFORCE_GTX_660_TI                                                             0x1183  /* GeForce GTX 660 Ti */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_770                                                                                   0x1184  /* GeForce GTX 770 */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_660_OEM                                                                               0x1185  /* GeForce GTX 660 OEM */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_660_TI_GEFORCE_GTX_660_TI_1186                                                        0x1186  /* GeForce GTX 660 Ti */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_760                                                                                   0x1187  /* GeForce GTX 760 */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_690                                                                                   0x1188  /* GeForce GTX 690 */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_670                                                                                   0x1189  /* GeForce GTX 670 */
#define NVIDIA_GPU_GK104GL_GRID_K520                                                                                       0x118a  /* GRID K520 */
#define NVIDIA_GPU_GK104GL_GRID_K2_GEFORCE_USM                                                                             0x118b  /* GRID K2 GeForce USM */
#define NVIDIA_GPU_GK104_GRID_K2_NVS_USM                                                                                   0x118c  /* GRID K2 NVS USM */
#define NVIDIA_GPU_GK104GL_GRID_K200_VGPU                                                                                  0x118d  /* GRID K200 vGPU */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_760_OEM                                                                               0x118e  /* GeForce GTX 760 OEM */
#define NVIDIA_GPU_GK104GL_TESLA_K10                                                                                       0x118f  /* Tesla K10 */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_760_REV_2                                                                             0x1191  /* GeForce GTX 760 Rev. 2 */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_760_TI_OEM                                                                            0x1193  /* GeForce GTX 760 Ti OEM */
#define NVIDIA_GPU_GK104GL_TESLA_K8                                                                                        0x1194  /* Tesla K8 */
#define NVIDIA_GPU_GK104_GEFORCE_GTX_660_REV_2                                                                             0x1195  /* GeForce GTX 660 Rev. 2 */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_880M                                                                                 0x1198  /* GeForce GTX 880M */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_870M_GEFORCE_GTX_870M                                                                0x1199  /* GeForce GTX 870M */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_860M                                                                                 0x119a  /* GeForce GTX 860M */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_775M_MAC_EDITION                                                                     0x119d  /* GeForce GTX 775M Mac Edition */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_780M_MAC_EDITION                                                                     0x119e  /* GeForce GTX 780M Mac Edition */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_780M                                                                                 0x119f  /* GeForce GTX 780M */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_680M                                                                                 0x11a0  /* GeForce GTX 680M */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_670MX                                                                                0x11a1  /* GeForce GTX 670MX */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_675MX_MAC_EDITION                                                                    0x11a2  /* GeForce GTX 675MX Mac Edition */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_680MX                                                                                0x11a3  /* GeForce GTX 680MX */
#define NVIDIA_GPU_GK104_GK104_ESA_GK104_ESA                                                                               0x11a4  /* GK104-ESA */
#define NVIDIA_GPU_GK104_GK104_ESA_GK104_ESA_11A5                                                                          0x11a5  /* GK104-ESA */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_675MX                                                                                0x11a7  /* GeForce GTX 675MX */
#define NVIDIA_GPU_GK104GLM_QUADRO_K5100M_QUADRO_K5100M                                                                    0x11a8  /* Quadro K5100M */
#define NVIDIA_GPU_GK104M_GEFORCE_GTX_870M_GEFORCE_GTX_870M_11A9                                                           0x11a9  /* GeForce GTX 870M */
#define NVIDIA_GPU_GK104_GK104_INT                                                                                         0x11aa  /* GK104-INT */
#define NVIDIA_GPU_GK104_GK104_CS                                                                                          0x11ac  /* GK104-CS */
#define NVIDIA_GPU_GK104GLM_GRID_ICECUBE                                                                                   0x11af  /* GRID IceCube */
#define NVIDIA_GPU_GK104GL_GRID_K240Q_K260Q_VGPU                                                                           0x11b0  /* GRID K240Q / K260Q vGPU */
#define NVIDIA_GPU_GK104GL_GRID_K2_TESLA_USM                                                                               0x11b1  /* GRID K2 Tesla USM */
#define NVIDIA_GPU_GK104GL_QUADRO_K4200                                                                                    0x11b4  /* Quadro K4200 */
#define NVIDIA_GPU_GK104GLM_QUADRO_K3100M                                                                                  0x11b6  /* Quadro K3100M */
#define NVIDIA_GPU_GK104GLM_QUADRO_K4100M                                                                                  0x11b7  /* Quadro K4100M */
#define NVIDIA_GPU_GK104GLM_QUADRO_K5100M_QUADRO_K5100M_11B8                                                               0x11b8  /* Quadro K5100M */
#define NVIDIA_GPU_GK104GLM_GK104GLM                                                                                       0x11b9  /* GK104GLM */
#define NVIDIA_GPU_GK104GL_QUADRO_K5000                                                                                    0x11ba  /* Quadro K5000 */
#define NVIDIA_GPU_GK104GL_QUADRO_4100                                                                                     0x11bb  /* Quadro 4100 */
#define NVIDIA_GPU_GK104GLM_QUADRO_K5000M                                                                                  0x11bc  /* Quadro K5000M */
#define NVIDIA_GPU_GK104GLM_QUADRO_K4000M                                                                                  0x11bd  /* Quadro K4000M */
#define NVIDIA_GPU_GK104GLM_QUADRO_K3000M                                                                                  0x11be  /* Quadro K3000M */
#define NVIDIA_GPU_GK104GL_GRID_K2                                                                                         0x11bf  /* GRID K2 */
#define NVIDIA_GPU_GK106_GEFORCE_GTX_660                                                                                   0x11c0  /* GeForce GTX 660 */
#define NVIDIA_GPU_GK106_D14P2_30                                                                                          0x11c1  /* D14P2-30 */
#define NVIDIA_GPU_GK106_GEFORCE_GTX_650_TI_BOOST                                                                          0x11c2  /* GeForce GTX 650 Ti Boost */
#define NVIDIA_GPU_GK106_GEFORCE_GTX_650_TI_OEM                                                                            0x11c3  /* GeForce GTX 650 Ti OEM */
#define NVIDIA_GPU_GK106_GEFORCE_GTX_645_OEM                                                                               0x11c4  /* GeForce GTX 645 OEM */
#define NVIDIA_GPU_GK106_GEFORCE_GT_740_GEFORCE_GT_740                                                                     0x11c5  /* GeForce GT 740 */
#define NVIDIA_GPU_GK106_GEFORCE_GTX_650_TI                                                                                0x11c6  /* GeForce GTX 650 Ti */
#define NVIDIA_GPU_GK106_GEFORCE_GTX_750_TI                                                                                0x11c7  /* GeForce GTX 750 Ti */
#define NVIDIA_GPU_GK106_GEFORCE_GTX_650_OEM                                                                               0x11c8  /* GeForce GTX 650 OEM */
#define NVIDIA_GPU_GK106_GEFORCE_GT_740_GEFORCE_GT_740_11CB                                                                0x11cb  /* GeForce GT 740 */
#define NVIDIA_GPU_GK106_GK106_INT353                                                                                      0x11d0  /* GK106-INT353 */
#define NVIDIA_GPU_GK106_GK106_INT343                                                                                      0x11d1  /* GK106-INT343 */
#define NVIDIA_GPU_GK106_GK106_INT232                                                                                      0x11d2  /* GK106-INT232 */
#define NVIDIA_GPU_GK106_GK106_ES                                                                                          0x11d3  /* GK106-ES */
#define NVIDIA_GPU_GK106M_GEFORCE_GTX_770M                                                                                 0x11e0  /* GeForce GTX 770M */
#define NVIDIA_GPU_GK106M_GEFORCE_GTX_765M_GEFORCE_GTX_765M                                                                0x11e1  /* GeForce GTX 765M */
#define NVIDIA_GPU_GK106M_GEFORCE_GTX_765M_GEFORCE_GTX_765M_11E2                                                           0x11e2  /* GeForce GTX 765M */
#define NVIDIA_GPU_GK106M_GEFORCE_GTX_760M                                                                                 0x11e3  /* GeForce GTX 760M */
#define NVIDIA_GPU_GK106M_GK106M                                                                                           0x11e7  /* GK106M */
#define NVIDIA_GPU_GK106GL_QUADRO_K4000                                                                                    0x11fa  /* Quadro K4000 */
#define NVIDIA_GPU_GK106GLM_QUADRO_K2100M                                                                                  0x11fc  /* Quadro K2100M */
#define NVIDIA_GPU_GK106_NB1Q                                                                                              0x11ff  /* NB1Q */
#define NVIDIA_GPU_GF114_GEFORCE_GTX_560_TI                                                                                0x1200  /* GeForce GTX 560 Ti */
#define NVIDIA_GPU_GF114_GEFORCE_GTX_560                                                                                   0x1201  /* GeForce GTX 560 */
#define NVIDIA_GPU_GF114_GEFORCE_GTX_560_TI_OEM                                                                            0x1202  /* GeForce GTX 560 Ti OEM */
#define NVIDIA_GPU_GF114_GEFORCE_GTX_460_SE_V2                                                                             0x1203  /* GeForce GTX 460 SE v2 */
#define NVIDIA_GPU_GF114_GEFORCE_GTX_460_V2                                                                                0x1205  /* GeForce GTX 460 v2 */
#define NVIDIA_GPU_GF114_GEFORCE_GTX_555                                                                                   0x1206  /* GeForce GTX 555 */
#define NVIDIA_GPU_GF114_GEFORCE_GT_645_OEM                                                                                0x1207  /* GeForce GT 645 OEM */
#define NVIDIA_GPU_GF114_GEFORCE_GTX_560_SE                                                                                0x1208  /* GeForce GTX 560 SE */
#define NVIDIA_GPU_GF114M_GEFORCE_GTX_570M                                                                                 0x1210  /* GeForce GTX 570M */
#define NVIDIA_GPU_GF114M_GEFORCE_GTX_580M                                                                                 0x1211  /* GeForce GTX 580M */
#define NVIDIA_GPU_GF114M_GEFORCE_GTX_675M                                                                                 0x1212  /* GeForce GTX 675M */
#define NVIDIA_GPU_GF114M_GEFORCE_GTX_670M                                                                                 0x1213  /* GeForce GTX 670M */
#define NVIDIA_GPU_GF116_GEFORCE_GT_545_OEM                                                                                0x1241  /* GeForce GT 545 OEM */
#define NVIDIA_GPU_GF116_GEFORCE_GT_545                                                                                    0x1243  /* GeForce GT 545 */
#define NVIDIA_GPU_GF116_GEFORCE_GTX_550_TI                                                                                0x1244  /* GeForce GTX 550 Ti */
#define NVIDIA_GPU_GF116_GEFORCE_GTS_450_REV_2                                                                             0x1245  /* GeForce GTS 450 Rev. 2 */
#define NVIDIA_GPU_GF116M_GEFORCE_GT_550M                                                                                  0x1246  /* GeForce GT 550M */
#define NVIDIA_GPU_GF116M_GEFORCE_GT_555M_635M_GEFORCE_GT_555M_635M                                                        0x1247  /* GeForce GT 555M/635M */
#define NVIDIA_GPU_GF116M_GEFORCE_GT_555M_635M_GEFORCE_GT_555M_635M_1248                                                   0x1248  /* GeForce GT 555M/635M */
#define NVIDIA_GPU_GF116_GEFORCE_GTS_450_REV_3                                                                             0x1249  /* GeForce GTS 450 Rev. 3 */
#define NVIDIA_GPU_GF116_GEFORCE_GT_640_OEM                                                                                0x124b  /* GeForce GT 640 OEM */
#define NVIDIA_GPU_GF116M_GEFORCE_GT_555M_635M_GEFORCE_GT_555M_635M_124D                                                   0x124d  /* GeForce GT 555M/635M */
#define NVIDIA_GPU_GF116M_GEFORCE_GT_560M                                                                                  0x1251  /* GeForce GT 560M */
#define NVIDIA_GPU_GK208_GEFORCE_GT_635                                                                                    0x1280  /* GeForce GT 635 */
#define NVIDIA_GPU_GK208_GEFORCE_GT_710_GEFORCE_GT_710                                                                     0x1281  /* GeForce GT 710 */
#define NVIDIA_GPU_GK208_GEFORCE_GT_640_REV_2                                                                              0x1282  /* GeForce GT 640 Rev. 2 */
#define NVIDIA_GPU_GK208_D15M2_10                                                                                          0x1283  /* D15M2-10 */
#define NVIDIA_GPU_GK208_GEFORCE_GT_630_REV_2                                                                              0x1284  /* GeForce GT 630 Rev. 2 */
#define NVIDIA_GPU_GK208_GK208_100                                                                                         0x1285  /* GK208-100 */
#define NVIDIA_GPU_GK208_GEFORCE_GT_720                                                                                    0x1286  /* GeForce GT 720 */
#define NVIDIA_GPU_GK208B_GEFORCE_GT_730                                                                                   0x1287  /* GeForce GT 730 */
#define NVIDIA_GPU_GK208B_GEFORCE_GT_720                                                                                   0x1288  /* GeForce GT 720 */
#define NVIDIA_GPU_GK208_GEFORCE_GT_710_GEFORCE_GT_710_1289                                                                0x1289  /* GeForce GT 710 */
#define NVIDIA_GPU_GK208B_GK208B_GK208B                                                                                    0x128a  /* GK208B */
#define NVIDIA_GPU_GK208B_GEFORCE_GT_710                                                                                   0x128b  /* GeForce GT 710 */
#define NVIDIA_GPU_GK208B_GK208B_GK208B_128C                                                                               0x128c  /* GK208B */
#define NVIDIA_GPU_GK208M_GEFORCE_GT_730M_GEFORCE_GT_730M                                                                  0x1290  /* GeForce GT 730M */
#define NVIDIA_GPU_GK208M_GEFORCE_GT_735M                                                                                  0x1291  /* GeForce GT 735M */
#define NVIDIA_GPU_GK208M_GEFORCE_GT_740M_GEFORCE_GT_740M                                                                  0x1292  /* GeForce GT 740M */
#define NVIDIA_GPU_GK208M_GEFORCE_GT_730M_GEFORCE_GT_730M_1293                                                             0x1293  /* GeForce GT 730M */
#define NVIDIA_GPU_GK208M_GEFORCE_GT_740M_GEFORCE_GT_740M_1294                                                             0x1294  /* GeForce GT 740M */
#define NVIDIA_GPU_GK208M_GEFORCE_710M                                                                                     0x1295  /* GeForce 710M */
#define NVIDIA_GPU_GK208M_GEFORCE_825M                                                                                     0x1296  /* GeForce 825M */
#define NVIDIA_GPU_GK208M_GEFORCE_GT_720M                                                                                  0x1298  /* GeForce GT 720M */
#define NVIDIA_GPU_GK208BM_GEFORCE_920M                                                                                    0x1299  /* GeForce 920M */
#define NVIDIA_GPU_GK208BM_GEFORCE_910M                                                                                    0x129a  /* GeForce 910M */
#define NVIDIA_GPU_GK208_GK208                                                                                             0x12a0  /* GK208 */
#define NVIDIA_GPU_GK208_GK208_ES                                                                                          0x12ad  /* GK208-ES */
#define NVIDIA_GPU_GK208_GK208_CS1_C                                                                                       0x12ae  /* GK208-CS1-C */
#define NVIDIA_GPU_GK208_GK208_INT_GK208_INT                                                                               0x12af  /* GK208-INT */
#define NVIDIA_GPU_GK208_GK208_CS_Q                                                                                        0x12b0  /* GK208-CS-Q */
#define NVIDIA_GPU_GK208_GK208_INT_GK208_INT_12B1                                                                          0x12b1  /* GK208 INT */
#define NVIDIA_GPU_GK208GLM_QUADRO_K610M                                                                                   0x12b9  /* Quadro K610M */
#define NVIDIA_GPU_GK208GLM_QUADRO_K510M                                                                                   0x12ba  /* Quadro K510M */
#define NVIDIA_GPU_GK110_Q12U_1                                                                                            0x130b  /* Q12U-1 */
#define NVIDIA_GPU_GM108M_GEFORCE_830M                                                                                     0x1340  /* GeForce 830M */
#define NVIDIA_GPU_GM108M_GEFORCE_840M                                                                                     0x1341  /* GeForce 840M */
#define NVIDIA_GPU_GM108M_GEFORCE_845M                                                                                     0x1344  /* GeForce 845M */
#define NVIDIA_GPU_GM108M_GEFORCE_930M_GEFORCE_930M                                                                        0x1346  /* GeForce 930M */
#define NVIDIA_GPU_GM108M_GEFORCE_940M                                                                                     0x1347  /* GeForce 940M */
#define NVIDIA_GPU_GM108M_GEFORCE_945M_945A                                                                                0x1348  /* GeForce 945M / 945A */
#define NVIDIA_GPU_GM108M_GEFORCE_930M_GEFORCE_930M_1349                                                                   0x1349  /* GeForce 930M */
#define NVIDIA_GPU_GM108M_GEFORCE_940MX_GEFORCE_940MX                                                                      0x134b  /* GeForce 940MX */
#define NVIDIA_GPU_GM108M_GEFORCE_940MX_GEFORCE_940MX_134D                                                                 0x134d  /* GeForce 940MX */
#define NVIDIA_GPU_GM108M_GEFORCE_930MX                                                                                    0x134e  /* GeForce 930MX */
#define NVIDIA_GPU_GM108M_GEFORCE_920MX                                                                                    0x134f  /* GeForce 920MX */
#define NVIDIA_GPU_GM108GLM_QUADRO_K620M_QUADRO_M500M                                                                      0x137a  /* Quadro K620M / Quadro M500M */
#define NVIDIA_GPU_GM108GLM_QUADRO_M520_MOBILE                                                                             0x137b  /* Quadro M520 Mobile */
#define NVIDIA_GPU_GM108M_GEFORCE_940A                                                                                     0x137d  /* GeForce 940A */
#define NVIDIA_GPU_GM107_GEFORCE_GTX_750_TI                                                                                0x1380  /* GeForce GTX 750 Ti */
#define NVIDIA_GPU_GM107_GEFORCE_GTX_750                                                                                   0x1381  /* GeForce GTX 750 */
#define NVIDIA_GPU_GM107_GEFORCE_GTX_745                                                                                   0x1382  /* GeForce GTX 745 */
#define NVIDIA_GPU_GM107GL_GRID_M30                                                                                        0x1389  /* GRID M30 */
#define NVIDIA_GPU_GM107M_GEFORCE_845M_GEFORCE_845M                                                                        0x1390  /* GeForce 845M */
#define NVIDIA_GPU_GM107M_GEFORCE_GTX_850M                                                                                 0x1391  /* GeForce GTX 850M */
#define NVIDIA_GPU_GM107M_GEFORCE_GTX_860M                                                                                 0x1392  /* GeForce GTX 860M */
#define NVIDIA_GPU_GM107M_GEFORCE_840M                                                                                     0x1393  /* GeForce 840M */
#define NVIDIA_GPU_GM107M_GEFORCE_845M_GEFORCE_845M_1398                                                                   0x1398  /* GeForce 845M */
#define NVIDIA_GPU_GM107M_GEFORCE_945M                                                                                     0x1399  /* GeForce 945M */
#define NVIDIA_GPU_GM107M_GEFORCE_GTX_950M                                                                                 0x139a  /* GeForce GTX 950M */
#define NVIDIA_GPU_GM107M_GEFORCE_GTX_960M                                                                                 0x139b  /* GeForce GTX 960M */
#define NVIDIA_GPU_GM107M_GEFORCE_940M                                                                                     0x139c  /* GeForce 940M */
#define NVIDIA_GPU_GM107M_GEFORCE_GTX_750_TI                                                                               0x139d  /* GeForce GTX 750 Ti */
#define NVIDIA_GPU_GM204_GM107_INT52_GM107_INT52                                                                           0x13ad  /* GM107 INT52 */
#define NVIDIA_GPU_GM204_GM107_CS1_GM107_CS1                                                                               0x13ae  /* GM107 CS1 */
#define NVIDIA_GPU_GM107GLM_QUADRO_M2000M                                                                                  0x13b0  /* Quadro M2000M */
#define NVIDIA_GPU_GM107GLM_QUADRO_M1000M                                                                                  0x13b1  /* Quadro M1000M */
#define NVIDIA_GPU_GM107GLM_QUADRO_M600M                                                                                   0x13b2  /* Quadro M600M */
#define NVIDIA_GPU_GM107GLM_QUADRO_K2200M                                                                                  0x13b3  /* Quadro K2200M */
#define NVIDIA_GPU_GM107GLM_QUADRO_M620_MOBILE                                                                             0x13b4  /* Quadro M620 Mobile */
#define NVIDIA_GPU_GM107GLM_QUADRO_M1200_MOBILE                                                                            0x13b6  /* Quadro M1200 Mobile */
#define NVIDIA_GPU_GM107GL_NVS_810                                                                                         0x13b9  /* NVS 810 */
#define NVIDIA_GPU_GM107GL_QUADRO_K2200                                                                                    0x13ba  /* Quadro K2200 */
#define NVIDIA_GPU_GM107GL_QUADRO_K620                                                                                     0x13bb  /* Quadro K620 */
#define NVIDIA_GPU_GM107GL_QUADRO_K1200                                                                                    0x13bc  /* Quadro K1200 */
#define NVIDIA_GPU_GM107GL_TESLA_M10                                                                                       0x13bd  /* Tesla M10 */
#define NVIDIA_GPU_GM204_GM107_CS1_GM107_CS1_13BE                                                                          0x13be  /* GM107 CS1 */
#define NVIDIA_GPU_GM204_GM107_INT52_GM107_INT52_13BF                                                                      0x13bf  /* GM107 INT52 */
#define NVIDIA_GPU_GM204_GEFORCE_GTX_980                                                                                   0x13c0  /* GeForce GTX 980 */
#define NVIDIA_GPU_GM204_GM204_GM204                                                                                       0x13c1  /* GM204 */
#define NVIDIA_GPU_GM204_GEFORCE_GTX_970                                                                                   0x13c2  /* GeForce GTX 970 */
#define NVIDIA_GPU_GM204_GM204_GM204_13C3                                                                                  0x13c3  /* GM204 */
#define NVIDIA_GPU_GM204_D17U_20                                                                                           0x13c4  /* D17U-20 */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_980M_GEFORCE_GTX_980M                                                                0x13d7  /* GeForce GTX 980M */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_960_OEM_970M                                                                         0x13d8  /* GeForce GTX 960 OEM / 970M */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_965M_GEFORCE_GTX_965M                                                                0x13d9  /* GeForce GTX 965M */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_980_MOBILE_GEFORCE_GTX_980_MOBILE                                                    0x13da  /* GeForce GTX 980 Mobile */
#define NVIDIA_GPU_GM204_GRAPHICS_DEVICE_ES_A                                                                              0x13e4  /* Graphics Device ES-A */
#define NVIDIA_GPU_GM204GL_GEFORCE_GTX_980_ENGINEERING_SAMPLE                                                              0x13e7  /* GeForce GTX 980 Engineering Sample */
#define NVIDIA_GPU_GM204GL_QUADRO_M5000                                                                                    0x13f0  /* Quadro M5000 */
#define NVIDIA_GPU_GM204GL_QUADRO_M4000                                                                                    0x13f1  /* Quadro M4000 */
#define NVIDIA_GPU_GM204GL_TESLA_M60                                                                                       0x13f2  /* Tesla M60 */
#define NVIDIA_GPU_GM204GL_TESLA_M6                                                                                        0x13f3  /* Tesla M6 */
#define NVIDIA_GPU_GM204GLM_QUADRO_M5000M_M5000_SE                                                                         0x13f8  /* Quadro M5000M / M5000 SE */
#define NVIDIA_GPU_GM204GLM_QUADRO_M4000M                                                                                  0x13f9  /* Quadro M4000M */
#define NVIDIA_GPU_GM204GLM_QUADRO_M3000M                                                                                  0x13fa  /* Quadro M3000M */
#define NVIDIA_GPU_GM204GLM_QUADRO_M5500                                                                                   0x13fb  /* Quadro M5500 */
#define NVIDIA_GPU_GM206_GEFORCE_GTX_960                                                                                   0x1401  /* GeForce GTX 960 */
#define NVIDIA_GPU_GM206_GEFORCE_GTX_950                                                                                   0x1402  /* GeForce GTX 950 */
#define NVIDIA_GPU_GM206_GEFORCE_GTX_960_FAKE                                                                              0x1404  /* GeForce GTX 960 FAKE */
#define NVIDIA_GPU_GM206_GEFORCE_GTX_960_OEM                                                                               0x1406  /* GeForce GTX 960 OEM */
#define NVIDIA_GPU_GM206_GEFORCE_GTX_750_V2                                                                                0x1407  /* GeForce GTX 750 v2 */
#define NVIDIA_GPU_GM206M_GEFORCE_GTX_965M                                                                                 0x1427  /* GeForce GTX 965M */
#define NVIDIA_GPU_GM206GL_QUADRO_M2000                                                                                    0x1430  /* Quadro M2000 */
#define NVIDIA_GPU_GM206GL_TESLA_M4                                                                                        0x1431  /* Tesla M4 */
#define NVIDIA_GPU_GM206GLM_QUADRO_M2200_MOBILE                                                                            0x1436  /* Quadro M2200 Mobile */
#define NVIDIA_GPU_GP100_CMP_100_100                                                                                       0x15c2  /* CMP 100-100 */
#define NVIDIA_GPU_GP100GL_QUADRO_GP100                                                                                    0x15f0  /* Quadro GP100 */
#define NVIDIA_GPU_GP100GL_GP100GL                                                                                         0x15f1  /* GP100GL */
#define NVIDIA_GPU_GP100GL_TESLA_P100_PCIE_12GB                                                                            0x15f7  /* Tesla P100 PCIe 12GB */
#define NVIDIA_GPU_GP100GL_TESLA_P100_PCIE_16GB                                                                            0x15f8  /* Tesla P100 PCIe 16GB */
#define NVIDIA_GPU_GP100GL_TESLA_P100_SXM2_16GB                                                                            0x15f9  /* Tesla P100 SXM2 16GB */
#define NVIDIA_GPU_GP100GL_DGX_STATION_PH402_SKU_200                                                                       0x15fa  /* DGX Station / PH402 SKU 200 */
#define NVIDIA_GPU_GP100GL_GP100_SKU_200                                                                                   0x15fb  /* GP100 SKU 200 */
#define NVIDIA_GPU_GP100GL_TESLA_P100_DGXS_16GB                                                                            0x15fc  /* Tesla P100-DGXS-16GB */
#define NVIDIA_GPU_GP100GL_GP100_SKU_15FF                                                                                  0x15ff  /* GP100 SKU 15ff */
#define NVIDIA_GPU_GM204GL_GRID_M60_SERVICE_PROVIDER                                                                       0x1613  /* GRID M60 Service Provider */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_980M_GEFORCE_GTX_980M_1617                                                           0x1617  /* GeForce GTX 980M */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_970M                                                                                 0x1618  /* GeForce GTX 970M */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_965M_GEFORCE_GTX_965M_1619                                                           0x1619  /* GeForce GTX 965M */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_980_MOBILE_GEFORCE_GTX_980_MOBILE_161A                                               0x161a  /* GeForce GTX 980 Mobile */
#define NVIDIA_GPU_GM204M_GEFORCE_GTX_965M_GEFORCE_GTX_965M_1667                                                           0x1667  /* GeForce GTX 965M */
#define NVIDIA_GPU_GM204GLM_QUADRO_M2200_MOBILE                                                                            0x1676  /* Quadro M2200 Mobile */
#define NVIDIA_GPU_GP100_GP100_GP100                                                                                       0x1725  /* GP100 */
#define NVIDIA_GPU_GP100_GP100_GP100_172E                                                                                  0x172e  /* GP100 */
#define NVIDIA_GPU_GP100_GP100_GP100_172F                                                                                  0x172f  /* GP100 */
#define NVIDIA_GPU_GM108M_GEFORCE_MX130                                                                                    0x174d  /* GeForce MX130 */
#define NVIDIA_GPU_GM108M_GEFORCE_MX110                                                                                    0x174e  /* GeForce MX110 */
#define NVIDIA_GPU_GM107GL_GRID_M3_3020                                                                                    0x1789  /* GRID M3-3020 */
#define NVIDIA_GPU_GM107_GEFORCE_940MX                                                                                     0x179c  /* GeForce 940MX */
#define NVIDIA_GPU_GM200_GEFORCE_GTX_TITAN_X                                                                               0x17c2  /* GeForce GTX TITAN X */
#define NVIDIA_GPU_GM200_GEFORCE_GTX_980_TI                                                                                0x17c8  /* GeForce GTX 980 Ti */
#define NVIDIA_GPU_GM200GL_QUADRO_M6000                                                                                    0x17f0  /* Quadro M6000 */
#define NVIDIA_GPU_GM200GL_QUADRO_M6000_24GB                                                                               0x17f1  /* Quadro M6000 24GB */
#define NVIDIA_GPU_GM200GL_TESLA_M40                                                                                       0x17fd  /* Tesla M40 */
#define NVIDIA_GPU_TEGRA_PCIE_X8_ENDPOINT                                                                                  0x1ad0  /* PCIe x8 Endpoint */
#define NVIDIA_GPU_TEGRA_PCIE_X4_X8_ENDPOINT_ROOT_COMPLEX                                                                  0x1ad1  /* PCIe x4/x8 Endpoint/Root Complex */
#define NVIDIA_GPU_TEGRA_PCIE_X1_ROOT_COMPLEX                                                                              0x1ad2  /* PCIe x1 Root Complex */
#define NVIDIA_GPU_XAVIER_SATA_CONTROLLER                                                                                  0x1ad3  /* SATA Controller */
#define NVIDIA_GPU_TU102_USB_3_1_HOST_CONTROLLER                                                                           0x1ad6  /* USB 3.1 Host Controller */
#define NVIDIA_GPU_TU102_USB_TYPE_C_UCSI_CONTROLLER                                                                        0x1ad7  /* USB Type-C UCSI Controller */
#define NVIDIA_GPU_TU104_USB_3_1_HOST_CONTROLLER                                                                           0x1ad8  /* USB 3.1 Host Controller */
#define NVIDIA_GPU_TU104_USB_TYPE_C_UCSI_CONTROLLER                                                                        0x1ad9  /* USB Type-C UCSI Controller */
#define NVIDIA_GPU_TU106_USB_3_1_HOST_CONTROLLER                                                                           0x1ada  /* USB 3.1 Host Controller */
#define NVIDIA_GPU_TU106_USB_TYPE_C_UCSI_CONTROLLER                                                                        0x1adb  /* USB Type-C UCSI Controller */
#define NVIDIA_GPU_TU116_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x1aeb  /* High Definition Audio Controller */
#define NVIDIA_GPU_TU116_USB_3_1_HOST_CONTROLLER                                                                           0x1aec  /* USB 3.1 Host Controller */
#define NVIDIA_GPU_TU116_USB_TYPE_C_UCSI_CONTROLLER                                                                        0x1aed  /* USB Type-C UCSI Controller */
#define NVIDIA_GPU_GA102_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x1aef  /* High Definition Audio Controller */
#define NVIDIA_GPU_GA100_A100_NVSWITCH                                                                                     0x1af1  /* A100 NVSwitch */
#define NVIDIA_GPU_GP102_TITAN_X_PASCAL                                                                                    0x1b00  /* TITAN X Pascal */
#define NVIDIA_GPU_GP102_GEFORCE_GTX_1080_TI_10GB                                                                          0x1b01  /* GeForce GTX 1080 Ti 10GB */
#define NVIDIA_GPU_GP102_TITAN_XP                                                                                          0x1b02  /* TITAN Xp */
#define NVIDIA_GPU_GP102_GP102                                                                                             0x1b04  /* GP102 */
#define NVIDIA_GPU_GP102_GEFORCE_GTX_1080_TI                                                                               0x1b06  /* GeForce GTX 1080 Ti */
#define NVIDIA_GPU_GP102_P102_100                                                                                          0x1b07  /* P102-100 */
#define NVIDIA_GPU_GP102GL_QUADRO_P6000                                                                                    0x1b30  /* Quadro P6000 */
#define NVIDIA_GPU_GP102GL_TESLA_P40                                                                                       0x1b38  /* Tesla P40 */
#define NVIDIA_GPU_GP102GL_TESLA_P10                                                                                       0x1b39  /* Tesla P10 */
#define NVIDIA_GPU_GP102GL_GP102GL_GP102GL                                                                                 0x1b70  /* GP102GL */
#define NVIDIA_GPU_GP102GL_GP102GL_GP102GL_1B78                                                                            0x1b78  /* GP102GL */
#define NVIDIA_GPU_GP104_GEFORCE_GTX_1080                                                                                  0x1b80  /* GeForce GTX 1080 */
#define NVIDIA_GPU_GP104_GEFORCE_GTX_1070                                                                                  0x1b81  /* GeForce GTX 1070 */
#define NVIDIA_GPU_GP104_GEFORCE_GTX_1070_TI                                                                               0x1b82  /* GeForce GTX 1070 Ti */
#define NVIDIA_GPU_GP104_GEFORCE_GTX_1060_6GB                                                                              0x1b83  /* GeForce GTX 1060 6GB */
#define NVIDIA_GPU_GP104_GEFORCE_GTX_1060_3GB                                                                              0x1b84  /* GeForce GTX 1060 3GB */
#define NVIDIA_GPU_GP104_P104_100                                                                                          0x1b87  /* P104-100 */
#define NVIDIA_GPU_GP104M_GEFORCE_GTX_1080_MOBILE                                                                          0x1ba0  /* GeForce GTX 1080 Mobile */
#define NVIDIA_GPU_GP104M_GEFORCE_GTX_1070_MOBILE_GEFORCE_GTX_1070_MOBILE                                                  0x1ba1  /* GeForce GTX 1070 Mobile */
#define NVIDIA_GPU_GP104M_GEFORCE_GTX_1070_MOBILE_GEFORCE_GTX_1070_MOBILE_1BA2                                             0x1ba2  /* GeForce GTX 1070 Mobile */
#define NVIDIA_GPU_GP104M_GP104M_GP104M                                                                                    0x1ba9  /* GP104M */
#define NVIDIA_GPU_GP104M_GP104M_GP104M_1BAA                                                                               0x1baa  /* GP104M */
#define NVIDIA_GPU_GP104_GEFORCE_GTX_1070_ENGINEERING_SAMPLE                                                               0x1bad  /* GeForce GTX 1070 Engineering Sample */
#define NVIDIA_GPU_GP104GL_QUADRO_P5000                                                                                    0x1bb0  /* Quadro P5000 */
#define NVIDIA_GPU_GP104GL_QUADRO_P4000                                                                                    0x1bb1  /* Quadro P4000 */
#define NVIDIA_GPU_GP104GL_TESLA_P4                                                                                        0x1bb3  /* Tesla P4 */
#define NVIDIA_GPU_GP104GL_TESLA_P6                                                                                        0x1bb4  /* Tesla P6 */
#define NVIDIA_GPU_GP104GLM_QUADRO_P5200_MOBILE                                                                            0x1bb5  /* Quadro P5200 Mobile */
#define NVIDIA_GPU_GP104GLM_QUADRO_P5000_MOBILE                                                                            0x1bb6  /* Quadro P5000 Mobile */
#define NVIDIA_GPU_GP104GLM_QUADRO_P4000_MOBILE                                                                            0x1bb7  /* Quadro P4000 Mobile */
#define NVIDIA_GPU_GP104GLM_QUADRO_P3000_MOBILE                                                                            0x1bb8  /* Quadro P3000 Mobile */
#define NVIDIA_GPU_GP104GLM_QUADRO_P4200_MOBILE                                                                            0x1bb9  /* Quadro P4200 Mobile */
#define NVIDIA_GPU_GP104GLM_QUADRO_P3200_MOBILE                                                                            0x1bbb  /* Quadro P3200 Mobile */
#define NVIDIA_GPU_GP104_P104_101                                                                                          0x1bc7  /* P104-101 */
#define NVIDIA_GPU_GP104BM_GEFORCE_GTX_1080_MOBILE                                                                         0x1be0  /* GeForce GTX 1080 Mobile */
#define NVIDIA_GPU_GP104BM_GEFORCE_GTX_1070_MOBILE                                                                         0x1be1  /* GeForce GTX 1070 Mobile */
#define NVIDIA_GPU_GP106_GP106_GP106                                                                                       0x1c00  /* GP106 */
#define NVIDIA_GPU_GP106_GP106_GP106_1C01                                                                                  0x1c01  /* GP106 */
#define NVIDIA_GPU_GP106_GEFORCE_GTX_1060_3GB                                                                              0x1c02  /* GeForce GTX 1060 3GB */
#define NVIDIA_GPU_GP106_GEFORCE_GTX_1060_6GB                                                                              0x1c03  /* GeForce GTX 1060 6GB */
#define NVIDIA_GPU_GP106_GEFORCE_GTX_1060_5GB                                                                              0x1c04  /* GeForce GTX 1060 5GB */
#define NVIDIA_GPU_GP106_GEFORCE_GTX_1060_6GB_REV_2                                                                        0x1c06  /* GeForce GTX 1060 6GB Rev. 2 */
#define NVIDIA_GPU_GP106_P106_100                                                                                          0x1c07  /* P106-100 */
#define NVIDIA_GPU_GP106_P106_090                                                                                          0x1c09  /* P106-090 */
#define NVIDIA_GPU_GP106M_GEFORCE_GTX_1060_MOBILE                                                                          0x1c20  /* GeForce GTX 1060 Mobile */
#define NVIDIA_GPU_GP106M_GEFORCE_GTX_1050_TI_MOBILE                                                                       0x1c21  /* GeForce GTX 1050 Ti Mobile */
#define NVIDIA_GPU_GP106M_GEFORCE_GTX_1050_MOBILE                                                                          0x1c22  /* GeForce GTX 1050 Mobile */
#define NVIDIA_GPU_GP106M_GEFORCE_GTX_1060_MOBILE_REV_2                                                                    0x1c23  /* GeForce GTX 1060 Mobile Rev. 2 */
#define NVIDIA_GPU_GP106M_GP106M                                                                                           0x1c2d  /* GP106M */
#define NVIDIA_GPU_GP106GL_QUADRO_P2000                                                                                    0x1c30  /* Quadro P2000 */
#define NVIDIA_GPU_GP106GL_QUADRO_P2200                                                                                    0x1c31  /* Quadro P2200 */
#define NVIDIA_GPU_GP106M_QUADRO_P2000_MOBILE_DRIVE_PX_2_AUTOCHAUFFEUR                                                     0x1c35  /* Quadro P2000 Mobile / DRIVE PX 2 AutoChauffeur */
#define NVIDIA_GPU_GP106_P106M                                                                                             0x1c36  /* P106M */
#define NVIDIA_GPU_GP106BM_GEFORCE_GTX_1060_MOBILE_6GB                                                                     0x1c60  /* GeForce GTX 1060 Mobile 6GB */
#define NVIDIA_GPU_GP106BM_GEFORCE_GTX_1050_TI_MOBILE                                                                      0x1c61  /* GeForce GTX 1050 Ti Mobile */
#define NVIDIA_GPU_GP106BM_GEFORCE_GTX_1050_MOBILE                                                                         0x1c62  /* GeForce GTX 1050 Mobile */
#define NVIDIA_GPU_GP106GL_GP106GL                                                                                         0x1c70  /* GP106GL */
#define NVIDIA_GPU_GP107_GEFORCE_GTX_1050                                                                                  0x1c81  /* GeForce GTX 1050 */
#define NVIDIA_GPU_GP107_GEFORCE_GTX_1050_TI                                                                               0x1c82  /* GeForce GTX 1050 Ti */
#define NVIDIA_GPU_GP107_GEFORCE_GTX_1050_3GB                                                                              0x1c83  /* GeForce GTX 1050 3GB */
#define NVIDIA_GPU_GP107M_GEFORCE_GTX_1050_TI_MOBILE                                                                       0x1c8c  /* GeForce GTX 1050 Ti Mobile */
#define NVIDIA_GPU_GP107M_GEFORCE_GTX_1050_MOBILE_GEFORCE_GTX_1050_MOBILE                                                  0x1c8d  /* GeForce GTX 1050 Mobile */
#define NVIDIA_GPU_GP107M_GP107M                                                                                           0x1c8e  /* GP107M */
#define NVIDIA_GPU_GP107M_GEFORCE_GTX_1050_TI_MAX_Q                                                                        0x1c8f  /* GeForce GTX 1050 Ti Max-Q */
#define NVIDIA_GPU_GP107M_GEFORCE_MX150                                                                                    0x1c90  /* GeForce MX150 */
#define NVIDIA_GPU_GP107M_GEFORCE_GTX_1050_3_GB_MAX_Q                                                                      0x1c91  /* GeForce GTX 1050 3 GB Max-Q */
#define NVIDIA_GPU_GP107M_GEFORCE_GTX_1050_MOBILE_GEFORCE_GTX_1050_MOBILE_1C92                                             0x1c92  /* GeForce GTX 1050 Mobile */
#define NVIDIA_GPU_GP107M_GEFORCE_MX350_GEFORCE_MX350                                                                      0x1c94  /* GeForce MX350 */
#define NVIDIA_GPU_GP107M_GEFORCE_MX350_GEFORCE_MX350_1C96                                                                 0x1c96  /* GeForce MX350 */
#define NVIDIA_GPU_GP107GL_GP107GL_GP107GL                                                                                 0x1ca7  /* GP107GL */
#define NVIDIA_GPU_GP107GL_GP107GL_GP107GL_1CA8                                                                            0x1ca8  /* GP107GL */
#define NVIDIA_GPU_GP107GL_GP107GL_GP107GL_1CAA                                                                            0x1caa  /* GP107GL */
#define NVIDIA_GPU_GP107GL_QUADRO_P1000_QUADRO_P1000                                                                       0x1cb1  /* Quadro P1000 */
#define NVIDIA_GPU_GP107GL_QUADRO_P600                                                                                     0x1cb2  /* Quadro P600 */
#define NVIDIA_GPU_GP107GL_QUADRO_P400                                                                                     0x1cb3  /* Quadro P400 */
#define NVIDIA_GPU_GP107GL_QUADRO_P620                                                                                     0x1cb6  /* Quadro P620 */
#define NVIDIA_GPU_GP107GLM_QUADRO_P2000_MOBILE                                                                            0x1cba  /* Quadro P2000 Mobile */
#define NVIDIA_GPU_GP107GLM_QUADRO_P1000_MOBILE                                                                            0x1cbb  /* Quadro P1000 Mobile */
#define NVIDIA_GPU_GP107GLM_QUADRO_P600_MOBILE                                                                             0x1cbc  /* Quadro P600 Mobile */
#define NVIDIA_GPU_GP107GLM_QUADRO_P620                                                                                    0x1cbd  /* Quadro P620 */
#define NVIDIA_GPU_GP107BM_GEFORCE_GTX_1050_TI_MOBILE                                                                      0x1ccc  /* GeForce GTX 1050 Ti Mobile */
#define NVIDIA_GPU_GP107BM_GEFORCE_GTX_1050_MOBILE                                                                         0x1ccd  /* GeForce GTX 1050 Mobile */
#define NVIDIA_GPU_GP107GL_QUADRO_P2000                                                                                    0x1cfa  /* Quadro P2000 */
#define NVIDIA_GPU_GP107GL_QUADRO_P1000_QUADRO_P1000_1CFB                                                                  0x1cfb  /* Quadro P1000 */
#define NVIDIA_GPU_GP108_GEFORCE_GT_1030                                                                                   0x1d01  /* GeForce GT 1030 */
#define NVIDIA_GPU_GP108_GEFORCE_GT_1010                                                                                   0x1d02  /* GeForce GT 1010 */
#define NVIDIA_GPU_GP108M_GEFORCE_MX150_GEFORCE_MX150                                                                      0x1d10  /* GeForce MX150 */
#define NVIDIA_GPU_GP108M_GEFORCE_MX230                                                                                    0x1d11  /* GeForce MX230 */
#define NVIDIA_GPU_GP108M_GEFORCE_MX150_GEFORCE_MX150_1D12                                                                 0x1d12  /* GeForce MX150 */
#define NVIDIA_GPU_GP108M_GEFORCE_MX250                                                                                    0x1d13  /* GeForce MX250 */
#define NVIDIA_GPU_GP108M_GEFORCE_MX330                                                                                    0x1d16  /* GeForce MX330 */
#define NVIDIA_GPU_GP108GLM_QUADRO_P500_MOBILE                                                                             0x1d33  /* Quadro P500 Mobile */
#define NVIDIA_GPU_GP108GLM_QUADRO_P520                                                                                    0x1d34  /* Quadro P520 */
#define NVIDIA_GPU_GP108BM_GEFORCE_MX250                                                                                   0x1d52  /* GeForce MX250 */
#define NVIDIA_GPU_GP108BM_GEFORCE_MX330                                                                                   0x1d56  /* GeForce MX330 */
#define NVIDIA_GPU_GV100_TITAN_V                                                                                           0x1d81  /* TITAN V */
#define NVIDIA_GPU_GV100_CMP_100_200_CMP_100_200                                                                           0x1d83  /* CMP 100-200 */
#define NVIDIA_GPU_GV100_CMP_100_210_CMP_100_210                                                                           0x1d84  /* CMP 100-210 */
#define NVIDIA_GPU_GV100GL_TESLA_GV100_SXM2_16GB_SKU_890                                                                   0x1db0  /* Tesla GV100 SXM2-16GB SKU 890 */
#define NVIDIA_GPU_GV100GL_TESLA_V100_SXM2_16GB_TESLA_V100_SXM2_16GB                                                       0x1db1  /* Tesla V100 SXM2 16GB */
#define NVIDIA_GPU_GV100GL_TESLA_V100_DGXS_16GB                                                                            0x1db2  /* Tesla V100 DGXS 16GB */
#define NVIDIA_GPU_GV100GL_TESLA_V100_FHHL_16GB                                                                            0x1db3  /* Tesla V100 FHHL 16GB */
#define NVIDIA_GPU_GV100GL_TESLA_V100_PCIE_16GB                                                                            0x1db4  /* Tesla V100 PCIe 16GB */
#define NVIDIA_GPU_GV100GL_TESLA_V100_SXM2_32GB                                                                            0x1db5  /* Tesla V100 SXM2 32GB */
#define NVIDIA_GPU_GV100GL_TESLA_V100_PCIE_32GB                                                                            0x1db6  /* Tesla V100 PCIe 32GB */
#define NVIDIA_GPU_GV100GL_TESLA_V100_DGXS_32GB                                                                            0x1db7  /* Tesla V100 DGXS 32GB */
#define NVIDIA_GPU_GV100GL_TESLA_V100_SXM3_32GB                                                                            0x1db8  /* Tesla V100 SXM3 32GB */
#define NVIDIA_GPU_GV100GL_QUADRO_GV100                                                                                    0x1dba  /* Quadro GV100 */
#define NVIDIA_GPU_GV100GL_TESLA_GV100_DGX1_V                                                                              0x1dbd  /* Tesla GV100 DGX1-V */
#define NVIDIA_GPU_GV100_ENGINEERING_SAMPLE                                                                                0x1dbe  /* Engineering Sample */
#define NVIDIA_GPU_GV100_CMP_100_200_CMP_100_200_1DC1                                                                      0x1dc1  /* CMP 100-200 */
#define NVIDIA_GPU_GV100GL_TESLA_PG500_216                                                                                 0x1df0  /* Tesla PG500-216 */
#define NVIDIA_GPU_GV100GL_TESLA_PG503_216                                                                                 0x1df2  /* Tesla PG503-216 */
#define NVIDIA_GPU_GV100_CMP_100_210_CMP_100_210_1DF4                                                                      0x1df4  /* CMP 100-210 */
#define NVIDIA_GPU_GV100GL_TESLA_V100_SXM2_16GB_TESLA_V100_SXM2_16GB_1DF5                                                  0x1df5  /* Tesla V100 SXM2 16GB */
#define NVIDIA_GPU_GV100GL_TESLA_V100S_PCIE_32GB                                                                           0x1df6  /* Tesla V100S PCIe 32GB */
#define NVIDIA_GPU_TU102_TITAN_RTX                                                                                         0x1e02  /* TITAN RTX */
#define NVIDIA_GPU_TU102_GEFORCE_RTX_2080_TI_12GB                                                                          0x1e03  /* GeForce RTX 2080 Ti 12GB */
#define NVIDIA_GPU_TU102_GEFORCE_RTX_2080_TI                                                                               0x1e04  /* GeForce RTX 2080 Ti */
#define NVIDIA_GPU_TU102_GEFORCE_RTX_2080_TI_REV_A                                                                         0x1e07  /* GeForce RTX 2080 Ti Rev. A */
#define NVIDIA_GPU_TU102_CMP_50HX                                                                                          0x1e09  /* CMP 50HX */
#define NVIDIA_GPU_TU102_GEFORCE_RTX_2080_TI_ENGINEERING_SAMPLE                                                            0x1e2d  /* GeForce RTX 2080 Ti Engineering Sample */
#define NVIDIA_GPU_TU102_GEFORCE_RTX_2080_TI_12GB_ENGINEERING_SAMPLE                                                       0x1e2e  /* GeForce RTX 2080 Ti 12GB Engineering Sample */
#define NVIDIA_GPU_TU102GL_QUADRO_RTX_6000_8000                                                                            0x1e30  /* Quadro RTX 6000/8000 */
#define NVIDIA_GPU_TU102GL_TESLA_T10                                                                                       0x1e35  /* Tesla T10 */
#define NVIDIA_GPU_TU102GL_QUADRO_RTX_6000                                                                                 0x1e36  /* Quadro RTX 6000 */
#define NVIDIA_GPU_TU102GL_TESLA_T10_16GB_GRID_RTX_T10_2_T10_4_T10_8                                                       0x1e37  /* Tesla T10 16GB / GRID RTX T10-2/T10-4/T10-8 */
#define NVIDIA_GPU_TU102GL_TESLA_T40_24GB                                                                                  0x1e38  /* Tesla T40 24GB */
#define NVIDIA_GPU_TU102GL_TU102GL_TU102GL                                                                                 0x1e3c  /* TU102GL */
#define NVIDIA_GPU_TU102GL_TU102GL_TU102GL_1E3D                                                                            0x1e3d  /* TU102GL */
#define NVIDIA_GPU_TU102GL_TU102GL_TU102GL_1E3E                                                                            0x1e3e  /* TU102GL */
#define NVIDIA_GPU_TU102GL_QUADRO_RTX_6000_8000_1E78                                                                       0x1e78  /* Quadro RTX 6000/8000 */
#define NVIDIA_GPU_TU104_GEFORCE_RTX_2080_SUPER                                                                            0x1e81  /* GeForce RTX 2080 SUPER */
#define NVIDIA_GPU_TU104_GEFORCE_RTX_2080                                                                                  0x1e82  /* GeForce RTX 2080 */
#define NVIDIA_GPU_TU104_GEFORCE_RTX_2070_SUPER_GEFORCE_RTX_2070_SUPER                                                     0x1e84  /* GeForce RTX 2070 SUPER */
#define NVIDIA_GPU_TU104_GEFORCE_RTX_2080_REV_A                                                                            0x1e87  /* GeForce RTX 2080 Rev. A */
#define NVIDIA_GPU_TU104_GEFORCE_RTX_2060                                                                                  0x1e89  /* GeForce RTX 2060 */
#define NVIDIA_GPU_TU104M_GEFORCE_RTX_2080_MOBILE                                                                          0x1e90  /* GeForce RTX 2080 Mobile */
#define NVIDIA_GPU_TU104M_GEFORCE_RTX_2070_SUPER_MOBILE_MAX_Q                                                              0x1e91  /* GeForce RTX 2070 SUPER Mobile / Max-Q */
#define NVIDIA_GPU_TU104M_GEFORCE_RTX_2080_SUPER_MOBILE_MAX_Q                                                              0x1e93  /* GeForce RTX 2080 SUPER Mobile / Max-Q */
#define NVIDIA_GPU_TU104M_TU104M                                                                                           0x1eab  /* TU104M */
#define NVIDIA_GPU_TU104M_GEFORCE_GTX_2080_ENGINEERING_SAMPLE                                                              0x1eae  /* GeForce GTX 2080 Engineering Sample */
#define NVIDIA_GPU_TU104GL_QUADRO_RTX_5000                                                                                 0x1eb0  /* Quadro RTX 5000 */
#define NVIDIA_GPU_TU104GL_QUADRO_RTX_4000                                                                                 0x1eb1  /* Quadro RTX 4000 */
#define NVIDIA_GPU_TU104GL_T4G                                                                                             0x1eb4  /* T4G */
#define NVIDIA_GPU_TU104GLM_QUADRO_RTX_5000_MOBILE_MAX_Q                                                                   0x1eb5  /* Quadro RTX 5000 Mobile / Max-Q */
#define NVIDIA_GPU_TU104GLM_QUADRO_RTX_4000_MOBILE_MAX_Q                                                                   0x1eb6  /* Quadro RTX 4000 Mobile / Max-Q */
#define NVIDIA_GPU_TU104GL                                                                                                 0x1eb8  /* Tesla T4 */
#define NVIDIA_GPU_TU104GL_TU104GL_TU104GL                                                                                 0x1eb9  /* TU104GL */
#define NVIDIA_GPU_TU104GL_PG189_SKU600                                                                                    0x1eba  /* PG189 SKU600 */
#define NVIDIA_GPU_TU104GL_TU104GL_TU104GL_1EBE                                                                            0x1ebe  /* TU104GL */
#define NVIDIA_GPU_TU104_GEFORCE_RTX_2070_SUPER_GEFORCE_RTX_2070_SUPER_1EC2                                                0x1ec2  /* GeForce RTX 2070 SUPER */
#define NVIDIA_GPU_TU104_GEFORCE_RTX_2070_SUPER_GEFORCE_RTX_2070_SUPER_1EC7                                                0x1ec7  /* GeForce RTX 2070 SUPER */
#define NVIDIA_GPU_TU104BM_GEFORCE_RTX_2080_MOBILE                                                                         0x1ed0  /* GeForce RTX 2080 Mobile */
#define NVIDIA_GPU_TU104BM_GEFORCE_RTX_2070_SUPER_MOBILE_MAX_Q                                                             0x1ed1  /* GeForce RTX 2070 SUPER Mobile / Max-Q */
#define NVIDIA_GPU_TU104BM_GEFORCE_RTX_2080_SUPER_MOBILE_MAX_Q                                                             0x1ed3  /* GeForce RTX 2080 SUPER Mobile / Max-Q */
#define NVIDIA_GPU_TU104GLM_QUADRO_RTX_5000_MOBILE_REFRESH                                                                 0x1ef5  /* Quadro RTX 5000 Mobile Refresh */
#define NVIDIA_GPU_TU106_GEFORCE_RTX_2070                                                                                  0x1f02  /* GeForce RTX 2070 */
#define NVIDIA_GPU_TU106_GEFORCE_RTX_2060_12GB                                                                             0x1f03  /* GeForce RTX 2060 12GB */
#define NVIDIA_GPU_TU106_TU106                                                                                             0x1f04  /* TU106 */
#define NVIDIA_GPU_TU106_GEFORCE_RTX_2060_SUPER_GEFORCE_RTX_2060_SUPER                                                     0x1f06  /* GeForce RTX 2060 SUPER */
#define NVIDIA_GPU_TU106_GEFORCE_RTX_2070_REV_A                                                                            0x1f07  /* GeForce RTX 2070 Rev. A */
#define NVIDIA_GPU_TU106_GEFORCE_RTX_2060_REV_A                                                                            0x1f08  /* GeForce RTX 2060 Rev. A */
#define NVIDIA_GPU_TU106_GEFORCE_GTX_1660_SUPER                                                                            0x1f09  /* GeForce GTX 1660 SUPER */
#define NVIDIA_GPU_TU106_GEFORCE_GTX_1650                                                                                  0x1f0a  /* GeForce GTX 1650 */
#define NVIDIA_GPU_TU106_CMP_40HX                                                                                          0x1f0b  /* CMP 40HX */
#define NVIDIA_GPU_TU106M_GEFORCE_RTX_2070_MOBILE                                                                          0x1f10  /* GeForce RTX 2070 Mobile */
#define NVIDIA_GPU_TU106M_GEFORCE_RTX_2060_MOBILE_GEFORCE_RTX_2060_MOBILE                                                  0x1f11  /* GeForce RTX 2060 Mobile */
#define NVIDIA_GPU_TU106M_GEFORCE_RTX_2060_MAX_Q                                                                           0x1f12  /* GeForce RTX 2060 Max-Q */
#define NVIDIA_GPU_TU106M_GEFORCE_RTX_2070_MOBILE_MAX_Q_REFRESH                                                            0x1f14  /* GeForce RTX 2070 Mobile / Max-Q Refresh */
#define NVIDIA_GPU_TU106M_GEFORCE_RTX_2060_MOBILE_GEFORCE_RTX_2060_MOBILE_1F15                                             0x1f15  /* GeForce RTX 2060 Mobile */
#define NVIDIA_GPU_TU106M_TU106M                                                                                           0x1f2e  /* TU106M */
#define NVIDIA_GPU_TU106GLM_QUADRO_RTX_3000_MOBILE_MAX_Q                                                                   0x1f36  /* Quadro RTX 3000 Mobile / Max-Q */
#define NVIDIA_GPU_TU106_GEFORCE_RTX_2060_SUPER_GEFORCE_RTX_2060_SUPER_1F42                                                0x1f42  /* GeForce RTX 2060 SUPER */
#define NVIDIA_GPU_TU106_GEFORCE_RTX_2060_SUPER_GEFORCE_RTX_2060_SUPER_1F47                                                0x1f47  /* GeForce RTX 2060 SUPER */
#define NVIDIA_GPU_TU106BM_GEFORCE_RTX_2070_MOBILE_MAX_Q                                                                   0x1f50  /* GeForce RTX 2070 Mobile / Max-Q */
#define NVIDIA_GPU_TU106BM_GEFORCE_RTX_2060_MOBILE_GEFORCE_RTX_2060_MOBILE                                                 0x1f51  /* GeForce RTX 2060 Mobile */
#define NVIDIA_GPU_TU106BM_GEFORCE_RTX_2070_MOBILE                                                                         0x1f54  /* GeForce RTX 2070 Mobile */
#define NVIDIA_GPU_TU106BM_GEFORCE_RTX_2060_MOBILE_GEFORCE_RTX_2060_MOBILE_1F55                                            0x1f55  /* GeForce RTX 2060 Mobile */
#define NVIDIA_GPU_TU106GLM_QUADRO_RTX_3000_MOBILE_REFRESH                                                                 0x1f76  /* Quadro RTX 3000 Mobile Refresh */
#define NVIDIA_GPU_TU117_TU117                                                                                             0x1f81  /* TU117 */
#define NVIDIA_GPU_TU117_GEFORCE_GTX_1650                                                                                  0x1f82  /* GeForce GTX 1650 */
#define NVIDIA_GPU_TU117_GEFORCE_GTX_1630                                                                                  0x1f83  /* GeForce GTX 1630 */
#define NVIDIA_GPU_TU117M_GEFORCE_GTX_1650_MOBILE_MAX_Q_GEFORCE_GTX_1650_MOBILE_MAX_Q                                      0x1f91  /* GeForce GTX 1650 Mobile / Max-Q */
#define NVIDIA_GPU_TU117M_GEFORCE_GTX_1650_MOBILE_GEFORCE_GTX_1650_MOBILE                                                  0x1f92  /* GeForce GTX 1650 Mobile */
#define NVIDIA_GPU_TU117M_GEFORCE_GTX_1650_MOBILE_GEFORCE_GTX_1650_MOBILE_1F94                                             0x1f94  /* GeForce GTX 1650 Mobile */
#define NVIDIA_GPU_TU117M_GEFORCE_GTX_1650_TI_MOBILE                                                                       0x1f95  /* GeForce GTX 1650 Ti Mobile */
#define NVIDIA_GPU_TU117M_GEFORCE_GTX_1650_MOBILE_MAX_Q_GEFORCE_GTX_1650_MOBILE_MAX_Q_1F96                                 0x1f96  /* GeForce GTX 1650 Mobile / Max-Q */
#define NVIDIA_GPU_TU117M_GEFORCE_MX450_GEFORCE_MX450                                                                      0x1f97  /* GeForce MX450 */
#define NVIDIA_GPU_TU117M_GEFORCE_MX450_GEFORCE_MX450_1F98                                                                 0x1f98  /* GeForce MX450 */
#define NVIDIA_GPU_TU117M_GEFORCE_GTX_1650_MOBILE_MAX_Q_GEFORCE_GTX_1650_MOBILE_MAX_Q_1F99                                 0x1f99  /* GeForce GTX 1650 Mobile / Max-Q */
#define NVIDIA_GPU_TU117M_GEFORCE_MX450_GEFORCE_MX450_1F9C                                                                 0x1f9c  /* GeForce MX450 */
#define NVIDIA_GPU_TU117M_GEFORCE_GTX_1650_MOBILE_MAX_Q_GEFORCE_GTX_1650_MOBILE_MAX_Q_1F9D                                 0x1f9d  /* GeForce GTX 1650 Mobile / Max-Q */
#define NVIDIA_GPU_TU117M_GEFORCE_MX550_GEFORCE_MX550                                                                      0x1f9f  /* GeForce MX550 */
#define NVIDIA_GPU_TU117M_GEFORCE_MX550_GEFORCE_MX550_1FA0                                                                 0x1fa0  /* GeForce MX550 */
#define NVIDIA_GPU_TU117M_TU117M                                                                                           0x1fa1  /* TU117M */
#define NVIDIA_GPU_TU117GL_TU117GL_TU117GL                                                                                 0x1fae  /* TU117GL */
#define NVIDIA_GPU_TU117GLM_QUADRO_T1000_MOBILE                                                                            0x1fb0  /* Quadro T1000 Mobile */
#define NVIDIA_GPU_TU117GL_T600                                                                                            0x1fb1  /* T600 */
#define NVIDIA_GPU_TU117GLM_QUADRO_T400_MOBILE                                                                             0x1fb2  /* Quadro T400 Mobile */
#define NVIDIA_GPU_TU117GLM_T600_LAPTOP_GPU                                                                                0x1fb6  /* T600 Laptop GPU */
#define NVIDIA_GPU_TU117GLM_T550_LAPTOP_GPU                                                                                0x1fb7  /* T550 Laptop GPU */
#define NVIDIA_GPU_TU117GLM_QUADRO_T2000_MOBILE_MAX_Q                                                                      0x1fb8  /* Quadro T2000 Mobile / Max-Q */
#define NVIDIA_GPU_TU117GLM_QUADRO_T1000_MOBILE_QUADRO_T1000_MOBILE                                                        0x1fb9  /* Quadro T1000 Mobile */
#define NVIDIA_GPU_TU117GLM_T600_MOBILE                                                                                    0x1fba  /* T600 Mobile */
#define NVIDIA_GPU_TU117GLM_QUADRO_T500_MOBILE                                                                             0x1fbb  /* Quadro T500 Mobile */
#define NVIDIA_GPU_TU117GLM_T1200_LAPTOP_GPU                                                                               0x1fbc  /* T1200 Laptop GPU */
#define NVIDIA_GPU_TU117GL_TU117GL_TU117GL_1FBF                                                                            0x1fbf  /* TU117GL */
#define NVIDIA_GPU_TU117BM_GEFORCE_GTX_1650_MOBILE_REFRESH_GEFORCE_GTX_1650_MOBILE_REFRESH                                 0x1fd9  /* GeForce GTX 1650 Mobile Refresh */
#define NVIDIA_GPU_TU117BM_GEFORCE_GTX_1650_MOBILE_REFRESH_GEFORCE_GTX_1650_MOBILE_REFRESH_1FDD                            0x1fdd  /* GeForce GTX 1650 Mobile Refresh */
#define NVIDIA_GPU_TU117GL_T1000_8GB                                                                                       0x1ff0  /* T1000 8GB */
#define NVIDIA_GPU_TU117GL_T400_4GB_T400E                                                                                  0x1ff2  /* T400 4GB / T400E */
#define NVIDIA_GPU_TU117GLM_QUADRO_T1000_MOBILE_QUADRO_T1000_MOBILE_1FF9                                                   0x1ff9  /* Quadro T1000 Mobile */
#define NVIDIA_GPU_GA100_GA100_GA100                                                                                       0x2080  /* GA100 */
#define NVIDIA_GPU_GA100_GA100_GA100_2081                                                                                  0x2081  /* GA100 */
#define NVIDIA_GPU_GA100_CMP_170HX_CMP_170HX                                                                               0x2082  /* CMP 170HX */
#define NVIDIA_GPU_GA100_A100_SXM4_40GB                                                                                    0x20b0  /* A100 SXM4 40GB */
#define NVIDIA_GPU_GA100_A100_PCIE_40GB                                                                                    0x20b1  /* A100 PCIe 40GB */
#define NVIDIA_GPU_GA100_A100_SXM4_80GB                                                                                    0x20b2  /* A100 SXM4 80GB */
#define NVIDIA_GPU_GA100_A100_SXM_64GB                                                                                     0x20b3  /* A100-SXM-64GB */
#define NVIDIA_GPU_GA100_GA100_GA100_20B4                                                                                  0x20b4  /* GA100 */
#define NVIDIA_GPU_GA100_A100_PCIE_80GB                                                                                    0x20b5  /* A100 PCIe 80GB */
#define NVIDIA_GPU_GA100GL_PG506_232                                                                                       0x20b6  /* PG506-232 */
#define NVIDIA_GPU_GA100GL_A30_PCIE                                                                                        0x20b7  /* A30 PCIe */
#define NVIDIA_GPU_GA100_A100X                                                                                             0x20b8  /* A100X */
#define NVIDIA_GPU_GA100_A30X                                                                                              0x20b9  /* A30X */
#define NVIDIA_GPU_GA100_DRIVE_A100_PROD                                                                                   0x20bb  /* DRIVE A100 PROD */
#define NVIDIA_GPU_GA100_A800_SXM4_40GB                                                                                    0x20bd  /* A800 SXM4 40GB */
#define NVIDIA_GPU_GA100_GRID_A100A                                                                                        0x20be  /* GRID A100A */
#define NVIDIA_GPU_GA100_GRID_A100B                                                                                        0x20bf  /* GRID A100B */
#define NVIDIA_GPU_GA100_INITIAL_DEVID                                                                                     0x20c0  /* Initial DevID */
#define NVIDIA_GPU_GA100_CMP_170HX_CMP_170HX_20C2                                                                          0x20c2  /* CMP 170HX */
#define NVIDIA_GPU_GA100_A100_PG506_207                                                                                    0x20f0  /* A100-PG506-207 */
#define NVIDIA_GPU_GA100_A100_PCIE_40GB_20F1                                                                               0x20f1  /* A100 PCIe 40GB */
#define NVIDIA_GPU_GA100_A100_PG506_217                                                                                    0x20f2  /* A100-PG506-217 */
#define NVIDIA_GPU_GA100_A800_SXM4_80GB                                                                                    0x20f3  /* A800-SXM4-80GB */
#define NVIDIA_GPU_GA100_A800_80GB_PCIE                                                                                    0x20f5  /* A800 80GB PCIe */
#define NVIDIA_GPU_GA100_A800_40GB_PCIE                                                                                    0x20f6  /* A800 40GB PCIe */
#define NVIDIA_GPU_GA100_AX800_CONVERGED_ACCELERATOR                                                                       0x20fd  /* AX800 Converged Accelerator */
#define NVIDIA_GPU_GA100_INT_SKU                                                                                           0x20fe  /* INT SKU */
#define NVIDIA_GPU_GA100_GA100_GA100_20FF                                                                                  0x20ff  /* GA100 */
#define NVIDIA_GPU_TU116_GEFORCE_GTX_1660_TI                                                                               0x2182  /* GeForce GTX 1660 Ti */
#define NVIDIA_GPU_TU116_TU116_TU116                                                                                       0x2183  /* TU116 */
#define NVIDIA_GPU_TU116_GEFORCE_GTX_1660                                                                                  0x2184  /* GeForce GTX 1660 */
#define NVIDIA_GPU_TU116_PG160_SKU18                                                                                       0x2186  /* PG160 SKU18 */
#define NVIDIA_GPU_TU116_GEFORCE_GTX_1650_SUPER                                                                            0x2187  /* GeForce GTX 1650 SUPER */
#define NVIDIA_GPU_TU116_GEFORCE_GTX_1650                                                                                  0x2188  /* GeForce GTX 1650 */
#define NVIDIA_GPU_TU116_CMP_30HX                                                                                          0x2189  /* CMP 30HX */
#define NVIDIA_GPU_TU116M_GEFORCE_GTX_1660_TI_MOBILE                                                                       0x2191  /* GeForce GTX 1660 Ti Mobile */
#define NVIDIA_GPU_TU116M_GEFORCE_GTX_1650_TI_MOBILE                                                                       0x2192  /* GeForce GTX 1650 Ti Mobile */
#define NVIDIA_GPU_TU116GL_TU116GL_TU116GL                                                                                 0x21ae  /* TU116GL */
#define NVIDIA_GPU_TU116GL_TU116GL_TU116GL_21BF                                                                            0x21bf  /* TU116GL */
#define NVIDIA_GPU_TU116_TU116_TU116_21C2                                                                                  0x21c2  /* TU116 */
#define NVIDIA_GPU_TU116_TU116_TU116_21C3                                                                                  0x21c3  /* TU116 */
#define NVIDIA_GPU_TU116_GEFORCE_GTX_1660_SUPER                                                                            0x21c4  /* GeForce GTX 1660 SUPER */
#define NVIDIA_GPU_TU116BM_GEFORCE_GTX_1660_TI_MOBILE                                                                      0x21d1  /* GeForce GTX 1660 Ti Mobile */
#define NVIDIA_GPU_GA102_GA102                                                                                             0x2200  /* GA102 */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3090_TI                                                                               0x2203  /* GeForce RTX 3090 Ti */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3090                                                                                  0x2204  /* GeForce RTX 3090 */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3080_TI_20GB                                                                          0x2205  /* GeForce RTX 3080 Ti 20GB */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3080                                                                                  0x2206  /* GeForce RTX 3080 */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3070_TI                                                                               0x2207  /* GeForce RTX 3070 Ti */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3080_TI                                                                               0x2208  /* GeForce RTX 3080 Ti */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3080_12GB                                                                             0x220a  /* GeForce RTX 3080 12GB */
#define NVIDIA_GPU_GA102_CMP_90HX                                                                                          0x220d  /* CMP 90HX */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3080_LITE_HASH_RATE                                                                   0x2216  /* GeForce RTX 3080 Lite Hash Rate */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3090_ENGINEERING_SAMPLE                                                               0x222b  /* GeForce RTX 3090 Engineering Sample */
#define NVIDIA_GPU_GA102_GEFORCE_RTX_3080_11GB_12GB_ENGINEERING_SAMPLE                                                     0x222f  /* GeForce RTX 3080 11GB / 12GB Engineering Sample */
#define NVIDIA_GPU_GA102GL_RTX_A6000                                                                                       0x2230  /* RTX A6000 */
#define NVIDIA_GPU_GA102GL_RTX_A5000                                                                                       0x2231  /* RTX A5000 */
#define NVIDIA_GPU_GA102GL_RTX_A4500                                                                                       0x2232  /* RTX A4500 */
#define NVIDIA_GPU_GA102GL_RTX_A5500                                                                                       0x2233  /* RTX A5500 */
#define NVIDIA_GPU_GA102GL_A40                                                                                             0x2235  /* A40 */
#define NVIDIA_GPU_GA102GL_A10                                                                                             0x2236  /* A10 */
#define NVIDIA_GPU_GA102GL_A10G                                                                                            0x2237  /* A10G */
#define NVIDIA_GPU_GA102GL_A10M                                                                                            0x2238  /* A10M */
#define NVIDIA_GPU_GA102GL_GA102GL                                                                                         0x223f  /* GA102GL */
#define NVIDIA_GPU_GA104_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x228b  /* High Definition Audio Controller */
#define NVIDIA_GPU_GA106_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x228e  /* High Definition Audio Controller */
#define NVIDIA_GPU_GA107_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x2291  /* High Definition Audio Controller */
#define NVIDIA_GPU_TEGRA_PCIE_ENDPOINT_VIRTUAL_NETWORK                                                                     0x2296  /* PCIe Endpoint Virtual Network */
#define NVIDIA_GPU_ORIN_PCIE_X8_ROOT_COMPLEX                                                                               0x229a  /* PCIe x8 Root Complex */
#define NVIDIA_GPU_ORIN_PCIE_X4_X8_ENDPOINT_ROOT_COMPLEX                                                                   0x229c  /* PCIe x4/x8 Endpoint/Root Complex */
#define NVIDIA_GPU_ORIN_PCIE_X1_ROOT_COMPLEX                                                                               0x229e  /* PCIe x1 Root Complex */
#define NVIDIA_GPU_GH100_H100_NVSWITCH                                                                                     0x22a3  /* H100 NVSwitch */
#define NVIDIA_GPU_AD102_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x22ba  /* High Definition Audio Controller */
#define NVIDIA_GPU_AD103_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x22bb  /* High Definition Audio Controller */
#define NVIDIA_GPU_AD104_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x22bc  /* High Definition Audio Controller */
#define NVIDIA_GPU_AD106M_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                 0x22bd  /* High Definition Audio Controller */
#define NVIDIA_GPU_AD107_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x22be  /* High Definition Audio Controller */
#define NVIDIA_GPU_GB10_GEN5_X4_PCIE_HOST                                                                                  0x22ce  /* GEN5 X4 PCIe host */
#define NVIDIA_GPU_GB10_GEN4_X1_PCIE_HOST                                                                                  0x22d0  /* GEN4 X1 PCIe host */
#define NVIDIA_GPU_GB20B_PCI_BRIDGE                                                                                        0x22d1  /* PCI bridge */
#define NVIDIA_GPU_THOR_PROCESSOR_PCI_EXPRESS_ROOT_PORT                                                                    0x22d8  /* Processor PCI Express Root Port */
#define NVIDIA_GPU_THOR_PROCESSOR_PCI_EXPRESS_X16_CONTROLLER                                                               0x22e6  /* Processor PCI Express x16 Controller */
#define NVIDIA_GPU_GB202_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x22e8  /* High Definition Audio Controller */
#define NVIDIA_GPU_GB203_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x22e9  /* High Definition Audio Controller */
#define NVIDIA_GPU_GB206_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x22eb  /* High Definition Audio Controller */
#define NVIDIA_GPU_GB207_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x22ec  /* High Definition Audio Controller */
#define NVIDIA_GPU_GH100_GH100_GH100                                                                                       0x2302  /* GH100 */
#define NVIDIA_GPU_GH100_H20_NVL16                                                                                         0x230c  /* H20 NVL16 */
#define NVIDIA_GPU_GH100_H20_NVL16_230E                                                                                    0x230e  /* H20 NVL16 */
#define NVIDIA_GPU_GH100_H100_CNX                                                                                          0x2313  /* H100 CNX */
#define NVIDIA_GPU_GH100_H100L_94GB                                                                                        0x2321  /* H100L 94GB */
#define NVIDIA_GPU_GH100_H800_PCIE                                                                                         0x2322  /* H800 PCIe */
#define NVIDIA_GPU_GH100_H800                                                                                              0x2324  /* H800 */
#define NVIDIA_GPU_GH100_H20B                                                                                              0x2328  /* H20B */
#define NVIDIA_GPU_GH100_H20                                                                                               0x2329  /* H20 */
#define NVIDIA_GPU_GH100_H20_HBM3E                                                                                         0x232c  /* H20 HBM3e */
#define NVIDIA_GPU_GH100_H100_SXM5_80GB                                                                                    0x2330  /* H100 SXM5 80GB */
#define NVIDIA_GPU_GH100_H100_PCIE                                                                                         0x2331  /* H100 PCIe */
#define NVIDIA_GPU_GH100_H200_SXM_141GB                                                                                    0x2335  /* H200 SXM 141GB */
#define NVIDIA_GPU_GH100_H100                                                                                              0x2336  /* H100 */
#define NVIDIA_GPU_GH100_H100_SXM5_64GB                                                                                    0x2337  /* H100 SXM5 64GB */
#define NVIDIA_GPU_GH100_H100_SXM5_96GB                                                                                    0x2338  /* H100 SXM5 96GB */
#define NVIDIA_GPU_GH100_H100_SXM5_94GB                                                                                    0x2339  /* H100 SXM5 94GB */
#define NVIDIA_GPU_GH100_H800L_94GB                                                                                        0x233a  /* H800L 94GB */
#define NVIDIA_GPU_GH100_H200_NVL                                                                                          0x233b  /* H200 NVL */
#define NVIDIA_GPU_GH100_H100_96GB                                                                                         0x233d  /* H100 96GB */
#define NVIDIA_GPU_GH100_GH200_120GB_480GB                                                                                 0x2342  /* GH200 120GB / 480GB */
#define NVIDIA_GPU_GH100_GH100_GH100_2343                                                                                  0x2343  /* GH100 */
#define NVIDIA_GPU_GH100_GH100_88K_A1                                                                                      0x2345  /* GH100-88K-A1 */
#define NVIDIA_GPU_GH100_GH200_144G_HBM3E                                                                                  0x2348  /* GH200 144G HBM3e */
#define NVIDIA_GPU_GH100_H100_GH3                                                                                          0x237e  /* H100 GH3 */
#define NVIDIA_GPU_GH100_SKINNY_JOE                                                                                        0x237f  /* Skinny Joe */
#define NVIDIA_GPU_GH100_GH100_GH100_23B0                                                                                  0x23b0  /* GH100 */
#define NVIDIA_GPU_GH100_GH100_GH100_23F0                                                                                  0x23f0  /* GH100 */
#define NVIDIA_GPU_GA103_GEFORCE_RTX_3060_TI                                                                               0x2414  /* GeForce RTX 3060 Ti */
#define NVIDIA_GPU_GA103M_GEFORCE_RTX_3080_TI_MOBILE                                                                       0x2420  /* GeForce RTX 3080 Ti Mobile */
#define NVIDIA_GPU_GA103GLM_RTX_A5500_LAPTOP_GPU                                                                           0x2438  /* RTX A5500 Laptop GPU */
#define NVIDIA_GPU_GA103M_GEFORCE_RTX_3080_TI_LAPTOP_GPU                                                                   0x2460  /* GeForce RTX 3080 Ti Laptop GPU */
#define NVIDIA_GPU_GA104_RESERVED_DEV_ID_A                                                                                 0x2480  /* Reserved Dev ID A */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_TI_GEFORCE_RTX_3070_TI                                                           0x2482  /* GeForce RTX 3070 Ti */
#define NVIDIA_GPU_GA104_GA104                                                                                             0x2483  /* GA104 */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_GEFORCE_RTX_3070                                                                 0x2484  /* GeForce RTX 3070 */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3060_TI_GEFORCE_RTX_3060_TI                                                           0x2486  /* GeForce RTX 3060 Ti */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3060                                                                                  0x2487  /* GeForce RTX 3060 */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_LITE_HASH_RATE                                                                   0x2488  /* GeForce RTX 3070 Lite Hash Rate */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3060_TI_LITE_HASH_RATE                                                                0x2489  /* GeForce RTX 3060 Ti Lite Hash Rate */
#define NVIDIA_GPU_GA104_CMP_70HX                                                                                          0x248a  /* CMP 70HX */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_TI_GEFORCE_RTX_3070_TI_248C                                                      0x248c  /* GeForce RTX 3070 Ti */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_GEFORCE_RTX_3070_248D                                                            0x248d  /* GeForce RTX 3070 */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3060_TI_GEFORCE_RTX_3060_TI_248E                                                      0x248e  /* GeForce RTX 3060 Ti */
#define NVIDIA_GPU_GA104M_GEFORCE_RTX_3080_MOBILE_MAX_Q_8GB_16GB_GEFORCE_RTX_3080_MOBILE_MAX_Q_8GB_16GB                    0x249c  /* GeForce RTX 3080 Mobile / Max-Q 8GB/16GB */
#define NVIDIA_GPU_GA104M_GEFORCE_RTX_3070_MOBILE_MAX_Q_GEFORCE_RTX_3070_MOBILE_MAX_Q                                      0x249d  /* GeForce RTX 3070 Mobile / Max-Q */
#define NVIDIA_GPU_GA104M_GA104M_GA104M                                                                                    0x249f  /* GA104M */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_TI_LAPTOP_GPU                                                                    0x24a0  /* Geforce RTX 3070 Ti Laptop GPU */
#define NVIDIA_GPU_GA104M_GA104M_GA104M_24A4                                                                               0x24a4  /* GA104M */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_30X0_ENGINEERING_SAMPLE                                                               0x24ac  /* GeForce RTX 30x0 Engineering Sample */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3060_ENGINEERING_SAMPLE                                                               0x24ad  /* GeForce RTX 3060 Engineering Sample */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_ENGINEERING_SAMPLE_GEFORCE_RTX_3070_ENGINEERING_SAMPLE                           0x24af  /* GeForce RTX 3070 Engineering Sample */
#define NVIDIA_GPU_GA104GL_RTX_A4000                                                                                       0x24b0  /* RTX A4000 */
#define NVIDIA_GPU_GA104GL_RTX_A4000H                                                                                      0x24b1  /* RTX A4000H */
#define NVIDIA_GPU_GA104GLM_RTX_A5000_MOBILE                                                                               0x24b6  /* RTX A5000 Mobile */
#define NVIDIA_GPU_GA104GLM_RTX_A4000_MOBILE                                                                               0x24b7  /* RTX A4000 Mobile */
#define NVIDIA_GPU_GA104GLM_RTX_A3000_MOBILE                                                                               0x24b8  /* RTX A3000 Mobile */
#define NVIDIA_GPU_GA104GLM_RTX_A3000_12GB_LAPTOP_GPU                                                                      0x24b9  /* RTX A3000 12GB Laptop GPU */
#define NVIDIA_GPU_GA104GLM_RTX_A4500_LAPTOP_GPU                                                                           0x24ba  /* RTX A4500 Laptop GPU */
#define NVIDIA_GPU_GA104GLM_RTX_A3000_LAPTOP_GPU                                                                           0x24bb  /* RTX A3000 Laptop GPU */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_ENGINEERING_SAMPLE_GEFORCE_RTX_3070_ENGINEERING_SAMPLE_24BF                      0x24bf  /* GeForce RTX 3070 Engineering Sample */
#define NVIDIA_GPU_GA104_INITIAL_DEV_ID_B                                                                                  0x24c0  /* Initial Dev ID B */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3060_8GB                                                                              0x24c7  /* GeForce RTX 3060 8GB */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3070_GDDR6X                                                                           0x24c8  /* GeForce RTX 3070 GDDR6X */
#define NVIDIA_GPU_GA104_GEFORCE_RTX_3060_TI_GDDR6X                                                                        0x24c9  /* GeForce RTX 3060 Ti GDDR6X */
#define NVIDIA_GPU_GA104M_GEFORCE_RTX_3080_MOBILE_MAX_Q_8GB_16GB_GEFORCE_RTX_3080_MOBILE_MAX_Q_8GB_16GB_24DC               0x24dc  /* GeForce RTX 3080 Mobile / Max-Q 8GB/16GB */
#define NVIDIA_GPU_GA104M_GEFORCE_RTX_3070_MOBILE_MAX_Q_GEFORCE_RTX_3070_MOBILE_MAX_Q_24DD                                 0x24dd  /* GeForce RTX 3070 Mobile / Max-Q */
#define NVIDIA_GPU_GA104M_GA104M_GA104M_24DF                                                                               0x24df  /* GA104M */
#define NVIDIA_GPU_GA104M_GEFORCE_RTX_3070_TI_LAPTOP_GPU                                                                   0x24e0  /* Geforce RTX 3070 Ti Laptop GPU */
#define NVIDIA_GPU_GA104_RTX_A4500_EMBEDDED_GPU                                                                            0x24fa  /* RTX A4500 Embedded GPU */
#define NVIDIA_GPU_GA106_GEFORCE_RTX_3060_GEFORCE_RTX_3060                                                                 0x2501  /* GeForce RTX 3060 */
#define NVIDIA_GPU_GA106_GEFORCE_RTX_3060_GEFORCE_RTX_3060_2503                                                            0x2503  /* GeForce RTX 3060 */
#define NVIDIA_GPU_GA106_GEFORCE_RTX_3060_LITE_HASH_RATE                                                                   0x2504  /* GeForce RTX 3060 Lite Hash Rate */
#define NVIDIA_GPU_GA106_GA106                                                                                             0x2505  /* GA106 */
#define NVIDIA_GPU_GA106_GEFORCE_RTX_3050                                                                                  0x2507  /* Geforce RTX 3050 */
#define NVIDIA_GPU_GA106_GEFORCE_RTX_3050_OEM                                                                              0x2508  /* GeForce RTX 3050 OEM */
#define NVIDIA_GPU_GA106_GEFORCE_RTX_3060_12GB_REV_2                                                                       0x2509  /* GeForce RTX 3060 12GB Rev. 2 */
#define NVIDIA_GPU_GA106M_GEFORCE_RTX_3060_MOBILE_MAX_Q_GEFORCE_RTX_3060_MOBILE_MAX_Q                                      0x2520  /* GeForce RTX 3060 Mobile / Max-Q */
#define NVIDIA_GPU_GA106M_GEFORCE_RTX_3060_LAPTOP_GPU_GEFORCE_RTX_3060_LAPTOP_GPU                                          0x2521  /* GeForce RTX 3060 Laptop GPU */
#define NVIDIA_GPU_GA106M_GEFORCE_RTX_3050_TI_MOBILE_MAX_Q_GEFORCE_RTX_3050_TI_MOBILE_MAX_Q                                0x2523  /* GeForce RTX 3050 Ti Mobile / Max-Q */
#define NVIDIA_GPU_GA106_GEFORCE_RTX_3060_ENGINEERING_SAMPLE                                                               0x252f  /* GeForce RTX 3060 Engineering Sample */
#define NVIDIA_GPU_GA106_RTX_A2000                                                                                         0x2531  /* RTX A2000 */
#define NVIDIA_GPU_GA106_GEFORCE_RTX_3060_GEFORCE_RTX_3060_2544                                                            0x2544  /* GeForce RTX 3060 */
#define NVIDIA_GPU_GA106M_GEFORCE_RTX_3060_MOBILE_MAX_Q_GEFORCE_RTX_3060_MOBILE_MAX_Q_2560                                 0x2560  /* GeForce RTX 3060 Mobile / Max-Q */
#define NVIDIA_GPU_GA106M_GEFORCE_RTX_3060_LAPTOP_GPU_GEFORCE_RTX_3060_LAPTOP_GPU_2561                                     0x2561  /* GeForce RTX 3060 Laptop GPU */
#define NVIDIA_GPU_GA106M_GEFORCE_RTX_3050_TI_MOBILE_MAX_Q_GEFORCE_RTX_3050_TI_MOBILE_MAX_Q_2563                           0x2563  /* GeForce RTX 3050 Ti Mobile / Max-Q */
#define NVIDIA_GPU_GA106_RTX_A2000_12GB                                                                                    0x2571  /* RTX A2000 12GB */
#define NVIDIA_GPU_GA107_GEFORCE_RTX_3050_8GB                                                                              0x2582  /* GeForce RTX 3050 8GB */
#define NVIDIA_GPU_GA107_GEFORCE_RTX_3050_4GB                                                                              0x2583  /* GeForce RTX 3050 4GB */
#define NVIDIA_GPU_GA107_GEFORCE_RTX_3050_6GB                                                                              0x2584  /* GeForce RTX 3050 6GB */
#define NVIDIA_GPU_GA107M_GEFORCE_RTX_3050_TI_MOBILE                                                                       0x25a0  /* GeForce RTX 3050 Ti Mobile */
#define NVIDIA_GPU_GA107M_GEFORCE_RTX_3050_MOBILE_GEFORCE_RTX_3050_MOBILE                                                  0x25a2  /* GeForce RTX 3050 Mobile */
#define NVIDIA_GPU_GA107_GA107_GA107                                                                                       0x25a3  /* GA107 */
#define NVIDIA_GPU_GA107_GA107_GA107_25A4                                                                                  0x25a4  /* GA107 */
#define NVIDIA_GPU_GA107M_GEFORCE_RTX_3050_MOBILE_GEFORCE_RTX_3050_MOBILE_25A5                                             0x25a5  /* GeForce RTX 3050 Mobile */
#define NVIDIA_GPU_GA107M_GEFORCE_MX570_GEFORCE_MX570                                                                      0x25a6  /* GeForce MX570 */
#define NVIDIA_GPU_GA107M_GEFORCE_MX570_GEFORCE_MX570_25A7                                                                 0x25a7  /* GeForce MX570 */
#define NVIDIA_GPU_GA107M_GEFORCE_RTX_2050                                                                                 0x25a9  /* GeForce RTX 2050 */
#define NVIDIA_GPU_GA107M_GEFORCE_MX570_A                                                                                  0x25aa  /* GeForce MX570 A */
#define NVIDIA_GPU_GA107M_GEFORCE_RTX_3050_4GB_LAPTOP_GPU                                                                  0x25ab  /* GeForce RTX 3050 4GB Laptop GPU */
#define NVIDIA_GPU_GA107BM_GN20_P0_R_K2_GEFORCE_RTX_3050_6GB_LAPTOP_GPU_GN20_P0_R_K2_GEFORCE_RTX_3050_6GB_LAPTOP_GPU       0x25ac  /* / GN20-P0-R-K2 [GeForce RTX 3050 6GB Laptop GPU] */
#define NVIDIA_GPU_GA107_GEFORCE_RTX_2050_GEFORCE_RTX_2050                                                                 0x25ad  /* GeForce RTX 2050 */
#define NVIDIA_GPU_GA107_GEFORCE_RTX_3050_ENGINEERING_SAMPLE                                                               0x25af  /* GeForce RTX 3050 Engineering Sample */
#define NVIDIA_GPU_GA107GL_RTX_A1000                                                                                       0x25b0  /* RTX A1000 */
#define NVIDIA_GPU_GA107GL_RTX_A400                                                                                        0x25b2  /* RTX A400 */
#define NVIDIA_GPU_GA107GLM_RTX_A4_MOBILE                                                                                  0x25b5  /* RTX A4 Mobile */
#define NVIDIA_GPU_GA107GL_A2_A16                                                                                          0x25b6  /* A2 / A16 */
#define NVIDIA_GPU_GA107GLM_RTX_A2000_MOBILE                                                                               0x25b8  /* RTX A2000 Mobile */
#define NVIDIA_GPU_GA107GLM_RTX_A1000_LAPTOP_GPU                                                                           0x25b9  /* RTX A1000 Laptop GPU */
#define NVIDIA_GPU_GA107GLM_RTX_A2000_8GB_LAPTOP_GPU                                                                       0x25ba  /* RTX A2000 8GB Laptop GPU */
#define NVIDIA_GPU_GA107GLM_RTX_A500_LAPTOP_GPU_RTX_A500_LAPTOP_GPU                                                        0x25bb  /* RTX A500 Laptop GPU */
#define NVIDIA_GPU_GA107GLM_RTX_A1000_6GB_LAPTOP_GPU                                                                       0x25bc  /* RTX A1000 6GB Laptop GPU */
#define NVIDIA_GPU_GA107GLM_RTX_A500_LAPTOP_GPU_RTX_A500_LAPTOP_GPU_25BD                                                   0x25bd  /* RTX A500 Laptop GPU */
#define NVIDIA_GPU_GA107BM_GEFORCE_RTX_3050_TI_MOBILE                                                                      0x25e0  /* GeForce RTX 3050 Ti Mobile */
#define NVIDIA_GPU_GA107BM_GEFORCE_RTX_3050_MOBILE_GEFORCE_RTX_3050_MOBILE                                                 0x25e2  /* GeForce RTX 3050 Mobile */
#define NVIDIA_GPU_GA107BM_GEFORCE_RTX_3050_MOBILE_GEFORCE_RTX_3050_MOBILE_25E5                                            0x25e5  /* GeForce RTX 3050 Mobile */
#define NVIDIA_GPU_GA107BM_GN20_P0_R_K2_GEFORCE_RTX_3050_6GB_LAPTOP_GPU_GN20_P0_R_K2_GEFORCE_RTX_3050_6GB_LAPTOP_GPU_25EC  0x25ec  /* / GN20-P0-R-K2 [GeForce RTX 3050 6GB Laptop GPU] */
#define NVIDIA_GPU_GA107_GEFORCE_RTX_2050_GEFORCE_RTX_2050_25ED                                                            0x25ed  /* GeForce RTX 2050 */
#define NVIDIA_GPU_GA107_RTX_A1000_EMBEDDED_GPU                                                                            0x25f9  /* RTX A1000 Embedded GPU */
#define NVIDIA_GPU_GA107_RTX_A2000_EMBEDDED_GPU                                                                            0x25fa  /* RTX A2000 Embedded GPU */
#define NVIDIA_GPU_GA107_RTX_A500_EMBEDDED_GPU                                                                             0x25fb  /* RTX A500 Embedded GPU */
#define NVIDIA_GPU_AD102_RTX_TITAN_ADA                                                                                     0x2681  /* RTX TITAN Ada */
#define NVIDIA_GPU_AD102_GEFORCE_RTX_4090                                                                                  0x2684  /* GeForce RTX 4090 */
#define NVIDIA_GPU_AD102_GEFORCE_RTX_4090_D                                                                                0x2685  /* GeForce RTX 4090 D */
#define NVIDIA_GPU_AD102_GEFORCE_RTX_4070_TI_SUPER                                                                         0x2689  /* GeForce RTX 4070 Ti SUPER */
#define NVIDIA_GPU_AD102_PG137                                                                                             0x26af  /* PG137 */
#define NVIDIA_GPU_AD102GL_RTX_6000_ADA_GENERATION                                                                         0x26b1  /* RTX 6000 Ada Generation */
#define NVIDIA_GPU_AD102GL_RTX_5000_ADA_GENERATION                                                                         0x26b2  /* RTX 5000 Ada Generation */
#define NVIDIA_GPU_AD102GL_RTX_5880_ADA_GENERATION                                                                         0x26b3  /* RTX 5880 Ada Generation */
#define NVIDIA_GPU_AD102GL_L40                                                                                             0x26b5  /* L40 */
#define NVIDIA_GPU_AD102GL_L20                                                                                             0x26b7  /* L20 */
#define NVIDIA_GPU_AD102GL_L40G                                                                                            0x26b8  /* L40G */
#define NVIDIA_GPU_AD102GL_L40S                                                                                            0x26b9  /* L40S */
#define NVIDIA_GPU_AD102GL_L20_26BA                                                                                        0x26ba  /* L20 */
#define NVIDIA_GPU_AD102GL_L30                                                                                             0x26bb  /* L30 */
#define NVIDIA_GPU_AD102GL_L40_CNX                                                                                         0x26f5  /* L40 CNX */
#define NVIDIA_GPU_AD103_GEFORCE_RTX_4080_SUPER_GEFORCE_RTX_4080_SUPER                                                     0x2702  /* GeForce RTX 4080 SUPER */
#define NVIDIA_GPU_AD103_GEFORCE_RTX_4080_SUPER_GEFORCE_RTX_4080_SUPER_2703                                                0x2703  /* GeForce RTX 4080 SUPER */
#define NVIDIA_GPU_AD103_GEFORCE_RTX_4080                                                                                  0x2704  /* GeForce RTX 4080 */
#define NVIDIA_GPU_AD103_GEFORCE_RTX_4070_TI_SUPER                                                                         0x2705  /* GeForce RTX 4070 Ti SUPER */
#define NVIDIA_GPU_AD103_GEFORCE_RTX_4070                                                                                  0x2709  /* GeForce RTX 4070 */
#define NVIDIA_GPU_AD103M_GN21_X11_GEFORCE_RTX_4090_LAPTOP_GPU_GN21_X11_GEFORCE_RTX_4090_LAPTOP_GPU                        0x2717  /* / GN21-X11 [GeForce RTX 4090 Laptop GPU] */
#define NVIDIA_GPU_AD103GLM_RTX_5000_ADA_GENERATION_LAPTOP_GPU                                                             0x2730  /* RTX 5000 Ada Generation Laptop GPU */
#define NVIDIA_GPU_AD103M_GN21_X11_GEFORCE_RTX_4090_LAPTOP_GPU_GN21_X11_GEFORCE_RTX_4090_LAPTOP_GPU_2757                   0x2757  /* / GN21-X11 [GeForce RTX 4090 Laptop GPU] */
#define NVIDIA_GPU_AD103GLM_RTX_5000_ADA_GENERATION_EMBEDDED_GPU                                                           0x2770  /* RTX 5000 Ada Generation Embedded GPU */
#define NVIDIA_GPU_AD104_GEFORCE_RTX_4070_TI                                                                               0x2782  /* GeForce RTX 4070 Ti */
#define NVIDIA_GPU_AD104_GEFORCE_RTX_4070_SUPER                                                                            0x2783  /* GeForce RTX 4070 SUPER */
#define NVIDIA_GPU_AD104_AC_AD104_20GB                                                                                     0x2785  /* AC AD104 20GB */
#define NVIDIA_GPU_AD104_GEFORCE_RTX_4070                                                                                  0x2786  /* GeForce RTX 4070 */
#define NVIDIA_GPU_AD104_GEFORCE_RTX_4060_TI                                                                               0x2788  /* GeForce RTX 4060 Ti */
#define NVIDIA_GPU_AD104M_GEFORCE_RTX_4080_MAX_Q_MOBILE_GEFORCE_RTX_4080_MAX_Q_MOBILE                                      0x27a0  /* GeForce RTX 4080 Max-Q / Mobile */
#define NVIDIA_GPU_AD104GL_RTX_4000_SFF_ADA_GENERATION                                                                     0x27b0  /* RTX 4000 SFF Ada Generation */
#define NVIDIA_GPU_AD104GL_RTX_4500_ADA_GENERATION                                                                         0x27b1  /* RTX 4500 Ada Generation */
#define NVIDIA_GPU_AD104GL_RTX_4000_ADA_GENERATION                                                                         0x27b2  /* RTX 4000 Ada Generation */
#define NVIDIA_GPU_AD104GL_L2                                                                                              0x27b6  /* L2 */
#define NVIDIA_GPU_AD104GL_L16                                                                                             0x27b7  /* L16 */
#define NVIDIA_GPU_AD104GL_L4                                                                                              0x27b8  /* L4 */
#define NVIDIA_GPU_AD104GLM_RTX_4000_ADA_GENERATION_LAPTOP_GPU                                                             0x27ba  /* RTX 4000 Ada Generation Laptop GPU */
#define NVIDIA_GPU_AD104GLM_RTX_3500_ADA_GENERATION_LAPTOP_GPU                                                             0x27bb  /* RTX 3500 Ada Generation Laptop GPU */
#define NVIDIA_GPU_AD104M_GEFORCE_RTX_4080_MAX_Q_MOBILE_GEFORCE_RTX_4080_MAX_Q_MOBILE_27E0                                 0x27e0  /* GeForce RTX 4080 Max-Q / Mobile */
#define NVIDIA_GPU_AD104GLM_RTX_4000_ADA_GENERATION_EMBEDDED_GPU                                                           0x27fa  /* RTX 4000 Ada Generation Embedded GPU */
#define NVIDIA_GPU_AD104GLM_RTX_3500_ADA_GENERATION_EMBEDDED_GPU                                                           0x27fb  /* RTX 3500 Ada Generation Embedded GPU */
#define NVIDIA_GPU_AD106_GEFORCE_RTX_4060_TI                                                                               0x2803  /* GeForce RTX 4060 Ti */
#define NVIDIA_GPU_AD106_GEFORCE_RTX_4060_TI_16GB                                                                          0x2805  /* GeForce RTX 4060 Ti 16GB */
#define NVIDIA_GPU_AD106_GEFORCE_RTX_4060                                                                                  0x2808  /* GeForce RTX 4060 */
#define NVIDIA_GPU_AD106M_GEFORCE_RTX_4070_MAX_Q_MOBILE_GEFORCE_RTX_4070_MAX_Q_MOBILE                                      0x2820  /* GeForce RTX 4070 Max-Q / Mobile */
#define NVIDIA_GPU_AD106M_GEFORCE_RTX_3050_A_LAPTOP_GPU                                                                    0x2822  /* GeForce RTX 3050 A Laptop GPU */
#define NVIDIA_GPU_AD106GLM_RTX_3000_ADA_GENERATION_LAPTOP_GPU                                                             0x2838  /* RTX 3000 Ada Generation Laptop GPU */
#define NVIDIA_GPU_AD106M_GEFORCE_RTX_4070_MAX_Q_MOBILE_GEFORCE_RTX_4070_MAX_Q_MOBILE_2860                                 0x2860  /* GeForce RTX 4070 Max-Q / Mobile */
#define NVIDIA_GPU_AD106GLM_RTX_3000_ADA_GENERATION_EMBEDDED_GPU                                                           0x2878  /* RTX 3000 Ada Generation Embedded GPU */
#define NVIDIA_GPU_AD107_GEFORCE_RTX_4060                                                                                  0x2882  /* GeForce RTX 4060 */
#define NVIDIA_GPU_AD107M_GEFORCE_RTX_4060_MAX_Q_MOBILE_GEFORCE_RTX_4060_MAX_Q_MOBILE                                      0x28a0  /* GeForce RTX 4060 Max-Q / Mobile */
#define NVIDIA_GPU_AD107M_GEFORCE_RTX_4050_MAX_Q_MOBILE_GEFORCE_RTX_4050_MAX_Q_MOBILE                                      0x28a1  /* GeForce RTX 4050 Max-Q / Mobile */
#define NVIDIA_GPU_AD107M_GEFORCE_RTX_3050_A_LAPTOP_GPU_GEFORCE_RTX_3050_A_LAPTOP_GPU                                      0x28a3  /* GeForce RTX 3050 A Laptop GPU */
#define NVIDIA_GPU_AD107GL                                                                                                 0x28b0  /* RTX 2000 / 2000E Ada Generation */
#define NVIDIA_GPU_AD107GLM_RTX_2000_ADA_GENERATION_LAPTOP_GPU                                                             0x28b8  /* RTX 2000 Ada Generation Laptop GPU */
#define NVIDIA_GPU_AD107GLM_RTX_1000_ADA_GENERATION_LAPTOP_GPU                                                             0x28b9  /* RTX 1000 Ada Generation Laptop GPU */
#define NVIDIA_GPU_AD107GLM_RTX_500_ADA_GENERATION_LAPTOP_GPU_RTX_500_ADA_GENERATION_LAPTOP_GPU                            0x28ba  /* RTX 500 Ada Generation Laptop GPU */
#define NVIDIA_GPU_AD107GLM_RTX_500_ADA_GENERATION_LAPTOP_GPU_RTX_500_ADA_GENERATION_LAPTOP_GPU_28BB                       0x28bb  /* RTX 500 Ada Generation Laptop GPU */
#define NVIDIA_GPU_AD107M_GEFORCE_RTX_4060_MAX_Q_MOBILE_GEFORCE_RTX_4060_MAX_Q_MOBILE_28E0                                 0x28e0  /* GeForce RTX 4060 Max-Q / Mobile */
#define NVIDIA_GPU_AD107M_GEFORCE_RTX_4050_MAX_Q_MOBILE_GEFORCE_RTX_4050_MAX_Q_MOBILE_28E1                                 0x28e1  /* GeForce RTX 4050 Max-Q / Mobile */
#define NVIDIA_GPU_AD107M_GEFORCE_RTX_3050_A_LAPTOP_GPU_GEFORCE_RTX_3050_A_LAPTOP_GPU_28E3                                 0x28e3  /* GeForce RTX 3050 A Laptop GPU */
#define NVIDIA_GPU_AD107GLM_RTX_2000_ADA_GENERATION_EMBEDDED_GPU                                                           0x28f8  /* RTX 2000 Ada Generation Embedded GPU */
#define NVIDIA_GPU_GB100_RESERVED_DEV_ID_A                                                                                 0x2900  /* Reserved Dev ID A */
#define NVIDIA_GPU_GB100_B200                                                                                              0x2901  /* B200 */
#define NVIDIA_GPU_GB100_TS4_B100                                                                                          0x2920  /* TS4 / B100 */
#define NVIDIA_GPU_GB100_GB100_GB100                                                                                       0x2924  /* GB100 */
#define NVIDIA_GPU_GB100_GB100_GB100_2925                                                                                  0x2925  /* GB100 */
#define NVIDIA_GPU_GB100_GB100_GB100_293D                                                                                  0x293d  /* GB100 */
#define NVIDIA_GPU_GB100_RESERVED_DEV_ID_B                                                                                 0x2940  /* Reserved Dev ID B */
#define NVIDIA_GPU_GB100_HGX_GB200                                                                                         0x2941  /* HGX GB200 */
#define NVIDIA_GPU_GB100_GB100_GB100_297E                                                                                  0x297e  /* GB100 */
#define NVIDIA_GPU_GB102_RESERVED_DEV_ID_A                                                                                 0x2980  /* Reserved Dev ID A */
#define NVIDIA_GPU_GB102                                                                                                   0x29bb  /* DRIVE P2021 */
#define NVIDIA_GPU_GB102_B100                                                                                              0x29bc  /* B100 */
#define NVIDIA_GPU_GB102_RESERVED_DEV_ID_B                                                                                 0x29c0  /* Reserved Dev ID B */
#define NVIDIA_GPU_GB102_GB102                                                                                             0x29f1  /* GB102 */
#define NVIDIA_GPU_GB10B_JETSON_AGX_THOR                                                                                   0x2b00  /* Jetson AGX Thor */
#define NVIDIA_GPU_GB202_GEFORCE_RTX_5090                                                                                  0x2b85  /* GeForce RTX 5090 */
#define NVIDIA_GPU_GB202_GEFORCE_RTX_5090_D                                                                                0x2b87  /* GeForce RTX 5090 D */
#define NVIDIA_GPU_GB202_GEFORCE_RTX_5090_D_V2                                                                             0x2b8c  /* GeForce RTX 5090 D V2 */
#define NVIDIA_GPU_GB202GL_RTX_PRO_6000_BLACKWELL_WORKSTATION_EDITION                                                      0x2bb1  /* RTX PRO 6000 Blackwell Workstation Edition */
#define NVIDIA_GPU_GB202GL_RTX_PRO_6000D_BLACKWELL_WORKSTATION_EDITION                                                     0x2bb2  /* RTX PRO 6000D Blackwell Workstation Edition */
#define NVIDIA_GPU_GB202GL_RTX_PRO_5000_BLACKWELL_RTX_PRO_5000_72GB_BLACKWELL                                              0x2bb3  /* RTX PRO 5000 Blackwell / RTX PRO 5000 72GB Blackwell */
#define NVIDIA_GPU_GB202GL_RTX_PRO_6000_BLACKWELL_MAX_Q_WORKSTATION_EDITION                                                0x2bb4  /* RTX PRO 6000 Blackwell Max-Q Workstation Edition */
#define NVIDIA_GPU_GB202GL_RTX_PRO_6000_BLACKWELL_SERVER_EDITION                                                           0x2bb5  /* RTX PRO 6000 Blackwell Server Edition */
#define NVIDIA_GPU_GB202GL_RTX_6000D                                                                                       0x2bb9  /* RTX 6000D */
#define NVIDIA_GPU_GB202GL_RTX_PRO_6000D_BLACKWELL_MAX_Q_WORKSTATION_EDITION                                               0x2bbc  /* RTX PRO 6000D Blackwell Max-Q Workstation Edition */
#define NVIDIA_GPU_GB203_GEFORCE_RTX_5080                                                                                  0x2c02  /* GeForce RTX 5080 */
#define NVIDIA_GPU_GB203_GEFORCE_RTX_5070_TI                                                                               0x2c05  /* GeForce RTX 5070 Ti */
#define NVIDIA_GPU_GB203M_GN22_GEFORCE_RTX_5090_MAX_Q_MOBILE                                                               0x2c18  /* / GN22 [GeForce RTX 5090 Max-Q / Mobile] */
#define NVIDIA_GPU_GB203M_GN22_GEFORCE_RTX_5080_MAX_Q_MOBILE                                                               0x2c19  /* / GN22 [GeForce RTX 5080 Max-Q / Mobile] */
#define NVIDIA_GPU_GB6_256N22W_ES_A1_GB6_256N22W_ES_A1                                                                     0x2c2c  /* GB6-256(N22W-ES-A1) */
#define NVIDIA_GPU_GB203GL_RTX_PRO_4500_BLACKWELL                                                                          0x2c31  /* RTX PRO 4500 Blackwell */
#define NVIDIA_GPU_GB203GL_RTX_PRO_4000_BLACKWELL_SFF_EDITION                                                              0x2c33  /* RTX PRO 4000 Blackwell SFF Edition */
#define NVIDIA_GPU_GB203GL_RTX_PRO_4000_BLACKWELL                                                                          0x2c34  /* RTX PRO 4000 Blackwell */
#define NVIDIA_GPU_GB203GLM_RTX_PRO_5000_BLACKWELL_GENERATION_LAPTOP_GPU                                                   0x2c38  /* RTX PRO 5000 Blackwell Generation Laptop GPU */
#define NVIDIA_GPU_GB203GLM_RTX_PRO_4000_BLACKWELL_GENERATION_LAPTOP_GPU                                                   0x2c39  /* RTX PRO 4000 Blackwell Generation Laptop GPU */
#define NVIDIA_GPU_GB203GL_RTX_PRO_4500_BLACKWELL_SERVER_EDITION                                                           0x2c3a  /* RTX PRO 4500 Blackwell Server Edition */
#define NVIDIA_GPU_GB203M_GN22_X11_GEFORCE_RTX_5090_MAX_Q_MOBILE                                                           0x2c58  /* / GN22-X11 [GeForce RTX 5090 Max-Q / Mobile] */
#define NVIDIA_GPU_GB203M_GN22_X9_GEFORCE_RTX_5080_MAX_Q_MOBILE                                                            0x2c59  /* / GN22-X9 [GeForce RTX 5080 Max-Q / Mobile] */
#define NVIDIA_GPU_GB203GLM_RTX_PRO_5000_BLACKWELL_EMBEDDED_GPU                                                            0x2c77  /* RTX PRO 5000 Blackwell Embedded GPU */
#define NVIDIA_GPU_GB203GLM_RTX_PRO_4000_BLACKWELL_EMBEDDED_GPU                                                            0x2c79  /* RTX PRO 4000 Blackwell Embedded GPU */
#define NVIDIA_GPU_GB206_GEFORCE_RTX_5060_TI                                                                               0x2d04  /* GeForce RTX 5060 Ti */
#define NVIDIA_GPU_GB206_GEFORCE_RTX_5060                                                                                  0x2d05  /* GeForce RTX 5060 */
#define NVIDIA_GPU_GB206M_GEFORCE_RTX_5070_MAX_Q_MOBILE_GEFORCE_RTX_5070_MAX_Q_MOBILE                                      0x2d18  /* GeForce RTX 5070 Max-Q / Mobile */
#define NVIDIA_GPU_GB206M_GEFORCE_RTX_5060_MAX_Q_MOBILE_GEFORCE_RTX_5060_MAX_Q_MOBILE                                      0x2d19  /* GeForce RTX 5060 Max-Q / Mobile */
#define NVIDIA_GPU_GB6_128_N22Y_ES_A1                                                                                      0x2d2c  /* (N22Y-ES-A1) */
#define NVIDIA_GPU_GB206GL                                                                                                 0x2d30  /* RTX PRO 2000 Blackwell */
#define NVIDIA_GPU_GB206GLM_RTX_PRO_2000_BLACKWELL_GENERATION_LAPTOP_GPU                                                   0x2d39  /* RTX PRO 2000 Blackwell Generation Laptop GPU */
#define NVIDIA_GPU_GB206M_GEFORCE_RTX_5070_MAX_Q_MOBILE_GEFORCE_RTX_5070_MAX_Q_MOBILE_2D58                                 0x2d58  /* GeForce RTX 5070 Max-Q / Mobile */
#define NVIDIA_GPU_GB206M_GEFORCE_RTX_5060_MAX_Q_MOBILE_GEFORCE_RTX_5060_MAX_Q_MOBILE_2D59                                 0x2d59  /* GeForce RTX 5060 Max-Q / Mobile */
#define NVIDIA_GPU_GB206GLM_RTX_PRO_2000_BLACKWELL_EMBEDDED_GPU                                                            0x2d79  /* RTX PRO 2000 Blackwell Embedded GPU */
#define NVIDIA_GPU_GB207_GEFORCE_RTX_5050                                                                                  0x2d83  /* GeForce RTX 5050 */
#define NVIDIA_GPU_GB207M_GEFORCE_RTX_5050_MAX_Q_MOBILE_GEFORCE_RTX_5050_MAX_Q_MOBILE                                      0x2d98  /* GeForce RTX 5050 Max-Q / Mobile */
#define NVIDIA_GPU_GB207GLM_RTX_PRO_1000_BLACKWELL_GENERATION_LAPTOP_GPU                                                   0x2db8  /* RTX PRO 1000 Blackwell Generation Laptop GPU */
#define NVIDIA_GPU_GB207GLM_RTX_PRO_500_BLACKWELL_GENERATION_LAPTOP_GPU                                                    0x2db9  /* RTX PRO 500 Blackwell Generation Laptop GPU */
#define NVIDIA_GPU_GB207M_GEFORCE_RTX_5050_MAX_Q_MOBILE_GEFORCE_RTX_5050_MAX_Q_MOBILE_2DD8                                 0x2dd8  /* GeForce RTX 5050 Max-Q / Mobile */
#define NVIDIA_GPU_GB207GLM_RTX_PRO_500_BLACKWELL_EMBEDDED_GPU                                                             0x2df9  /* RTX PRO 500 Blackwell Embedded GPU */
#define NVIDIA_GPU_GB20B                                                                                                   0x2e12  /* GB10 */
#define NVIDIA_GPU_GB20B_JMJWOA_GENERIC_GPU                                                                                0x2e2a  /* JMJWOA-Generic-GPU */
#define NVIDIA_GPU_GB205_GEFORCE_RTX_5070                                                                                  0x2f04  /* GeForce RTX 5070 */
#define NVIDIA_GPU_GB205M_GEFORCE_RTX_5070_TI_MOBILE_GEFORCE_RTX_5070_TI_MOBILE                                            0x2f18  /* GeForce RTX 5070 Ti Mobile */
#define NVIDIA_GPU_GB205GLM_RTX_PRO_3000_BLACKWELL_GENERATION_LAPTOP_GPU                                                   0x2f38  /* RTX PRO 3000 Blackwell Generation Laptop GPU */
#define NVIDIA_GPU_GB205M_GEFORCE_RTX_5070_TI_MOBILE_GEFORCE_RTX_5070_TI_MOBILE_2F58                                       0x2f58  /* GeForce RTX 5070 Ti Mobile */
#define NVIDIA_GPU_GB205_HIGH_DEFINITION_AUDIO_CONTROLLER                                                                  0x2f80  /* High Definition Audio Controller */
#define NVIDIA_GPU_GB110_RESERVED_DEV_ID_A                                                                                 0x3180  /* Reserved Dev ID A */
#define NVIDIA_GPU_GB110_B300_SXM6_AC                                                                                      0x3182  /* B300 SXM6 AC */
#define NVIDIA_GPU_GB110_GB300_MAXQ                                                                                        0x31a1  /* GB300 MaxQ */
#define NVIDIA_GPU_GB110_RESERVED_DEV_ID_B                                                                                 0x31c0  /* Reserved Dev ID B */
#define NVIDIA_GPU_GB110_GB300                                                                                             0x31c2  /* GB300 */
#define NVIDIA_GPU_GB110_GB110                                                                                             0x31fe  /* GB110 */
#define NVIDIA_GPU_GB112_GB112_GB112                                                                                       0x3200  /* GB112 */
#define NVIDIA_GPU_GB112_GB112_GB112_3224                                                                                  0x3224  /* GB112 */
#define NVIDIA_GPU_GB112_GB112_GB112_323E                                                                                  0x323e  /* GB112 */
#define NVIDIA_GPU_GB120_GB120                                                                                             0x3340  /* GB120 */

#endif /* _CUDA_GPU_DEVICES_H_ */
