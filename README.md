## Overview

Flexible Software Package (FSP) for Renesas RZ/G MPU Series

FSP is the next generation Arm® MPU software package from Renesas, that enables HMI devices and IoT connectivity through production ready peripheral drivers, FreeRTOS, and portable middleware stacks.
FSP includes best-in-class HAL drivers with high performance and low memory footprint. Middleware stacks with FreeRTOS integration are included to ease implementation of complex modules like communication.
The e² studio IDE provides support with intuitive configurators and intelligent code generation to make programming and debugging easier and faster.

FSP uses an open software ecosystem and provides flexibility in using your preferred RTOS, legacy code, and third-party ecosystem solutions.

### Current Release

[FSP v3.1.0](https://github.com/renesas/rzg-fsp/releases/tag/v3.1.0)

### Supported RZ/G MPU Kits

- [RZ/G2L Evaluation Board Kit](https://www.renesas.com/products/microcontrollers-microprocessors/rz-mpus/rzg2l-evaluation-board-kit-rzg2l-evaluation-board-kit)
- [RZ/G2LC Evaluation Board Kit](https://www.renesas.com/products/microcontrollers-microprocessors/rz-mpus/rzg2lc-evaluation-board-kit-rzg2lc-evaluation-board-kit)
- [RZ/G2UL Evaluation Board Kit](https://www.renesas.com/products/microcontrollers-microprocessors/rz-mpus/rzg2ul-evaluation-board-kit-rzg2ul-evaluation-board-kit)
- [RZ/G3S Evaluation Board Kit](https://www.renesas.com/RTK9845S33S01000BE)
- [RZ/G3E Evaluation Board Kit](www.renesas.com/rzg3e-evk/)

### Supported Software Packaged with FSP

For a list of software modules packaged with FSP, see [Supported Software](SUPPORTED_SOFTWARE.md).

### Product Security Advisories

[Product Security Advisories](https://github.com/renesas/rzg-fsp/issues?q=label%3Aproduct_security_advisory) for FSP and third party software (where available) are tagged with the 'product_security_advisory' label. Please check these issues for information from the respective vendors for affected versions and a recommended workaround or patch upgrade.

### Known Issues

[Visit GitHub Issues for this project.](https://github.com/renesas/rzg-fsp/issues)

[Critical issues](https://github.com/renesas/rzg-fsp/issues?q=label%3Acritical+is%3Aclosed) that cause an MPU to operate out of the user's manual documented specifications are tagged with the 'critical' label. Please check critical issues before going to production for a workaround or recommended patch upgrade.

### Setup Instructions

#### For existing users that are using FSP with e² studio

- FSP versions of 3.1.0 and later require a minimum e² studio version of 2025-07.

If you have already installed a previous FSP release that included e² studio then you can download the packs separately. These are available for download under the Assets section for each release. There is a zipped version, RZG_FSP_Packs_\<version\>.zip, and an installer version, RZG_FSP_Packs_\<version\>.exe.

#### For new users that are using FSP with e² studio

1.	Download the FSP with e² studio Installer from the Assets section of the [current release](https://github.com/renesas/rzg-fsp/releases/tag/v3.1.0).
2.	Run the installer. This will install the e² studio tool, FSP packs, GCC toolchain and other tools required to use this software. No additional installations are required.

<!--
#### If using RA Smart Configurator (RASC) with IAR Embedded Workbench or Keil MDK ####

1.  See [RA SC User Guide for MDK and IAR](https://renesas.github.io/fsp/_s_t_a_r_t__d_e_v.html#RASC-MDK-IAR-user-guide).
-->

### Starting Development

1. Open e² studio and click File > New > C/C++ Project.
2. In the window that pops up, choose Renesas RZ/G in the left pane.

### Related Links

FSP Releases :  https://github.com/renesas/rzg-fsp/releases

FSP Documentation : https://renesas.github.io/rzg-fsp

RZ/G2L Product Information : www.renesas.com/rzg2l

RZ/G2LC Product Information : www.renesas.com/rzg2lc

RZ/G2UL Product Information : www.renesas.com/rzg2ul

RZ/G3S Product Information : www.renesas.com/rzg3s

RZ/G3E Product Information : www.renesas.com/rzg3e

e² studio : www.renesas.com/e2studio

<!--
ToDo: Example Projects : www.renesas.com/rzg/example-projects
-->

Knowledge Base: https://en-support.renesas.com/knowledgeBase/category/31243

Support: www.renesas.com/support
