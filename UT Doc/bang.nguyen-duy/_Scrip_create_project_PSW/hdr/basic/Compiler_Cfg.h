/*<BASDKey>
 **********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Domain____:BASD$
 * $Namespace_:\Comp\Compiler$
 * $Class_____:H_TPL$
 * $Name______:Compiler_Cfg$
 * $Variant___:ARXY.2.0.0$
 * $Revision__:0$
 **********************************************************************************************************************
</BASDKey>*/


/* COMPILER047: */
#ifndef COMPILER_CFG_H
#define COMPILER_CFG_H

/*
 **********************************************************************************************************************
 * Based on AUTOSAR_SWS_CompilerAbstraction.pdf; Document Version 3.1.0; AR4.0; Rev 2
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * Include
 **********************************************************************************************************************
 */
#include "Os_Compiler_Cfg.h"
#include "stddef.h"


/*
 **********************************************************************************************************************
 * Types and Defines
 **********************************************************************************************************************
 */

/* COMPILER043: */
/* No special module ID is defined for Compiler_Cfg header. COMPILER_CFG is chosen. */
#define COMPILER_CFG_VENDOR_ID 6
#define COMPILER_CFG_SW_MAJOR_VERSION 1
#define COMPILER_CFG_SW_MINOR_VERSION 0
#define COMPILER_CFG_SW_PATCH_VERSION 0
#define COMPILER_CFG_AR_RELEASE_MAJOR_VERSION 4
#define COMPILER_CFG_AR_RELEASE_MINOR_VERSION 0
#define COMPILER_CFG_AR_RELEASE_REVISION_VERSION 2

/*
 **********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************
 */
 
#define NULL_PTR  NULL

#define CANDRV_CODE
#define CANDRV_CONST
#define CANDRV_APPL_DATA
#define CANDRV_APPL_CONST
#define CANDRV_APPL_CODE
#define CANDRV_CALLOUT_CODE
#define CANDRV_VAR_NOINIT
#define CANDRV_VAR_POWER_ON_INIT
#define CANDRV_VAR_FAST
#define CANDRV_VAR

#define CANDRV_CFG_CONST

#define CANTRCV_CODE
#define CANTRCV_CONST
#define CANTRCV_APPL_DATA
#define CANTRCV_APPL_CONST
#define CANTRCV_APPL_CODE
#define CANTRCV_CALLOUT_CODE
#define CANTRCV_VAR_NOINIT
#define CANTRCV_VAR_POWER_ON_INIT
#define CANTRCV_VAR_FAST
#define CANTRCV_VAR

#define CANIF_CODE
#define CANIF_CONST
#define CANIF_APPL_DATA
#define CANIF_APPL_CONST
#define CANIF_APPL_CODE
#define CANIF_CALLOUT_CODE
#define CANIF_VAR_NOINIT
#define CANIF_VAR_POWER_ON_INIT
#define CANIF_VAR_FAST
#define CANIF_VAR

#define CANNM_CODE
#define CANNM_CONST
#define CANNM_APPL_DATA
#define CANNM_APPL_CONST
#define CANNM_APPL_CODE
#define CANNM_CALLOUT_CODE
#define CANNM_VAR_NOINIT
#define CANNM_VAR_POWER_ON_INIT
#define CANNM_VAR_FAST
#define CANNM_VAR

#define CANSM_CODE
#define CANSM_CONST
#define CANSM_APPL_DATA
#define CANSM_APPL_CONST
#define CANSM_APPL_CODE
#define CANSM_CALLOUT_CODE
#define CANSM_VAR_NOINIT
#define CANSM_VAR_POWER_ON_INIT
#define CANSM_VAR_FAST
#define CANSM_VAR

#define CANTP_CODE
#define CANTP_CONST
#define CANTP_APPL_DATA
#define CANTP_APPL_CONST
#define CANTP_APPL_CODE
#define CANTP_CALLOUT_CODE
#define CANTP_VAR_NOINIT
#define CANTP_VAR_POWER_ON_INIT
#define CANTP_VAR_FAST
#define CANTP_VAR


#define FR_CODE
#define FR_CONST
#define FR_APPL_DATA
#define FR_APPL_CONST
#define FR_APPL_CODE
#define FR_CALLOUT_CODE
#define FR_VAR_NOINIT
#define FR_VAR_POWER_ON_INIT
#define FR_VAR_FAST
#define FR_VAR

#define FRTRCV_CODE
#define FRTRCV_CONST
#define FRTRCV_APPL_DATA
#define FRTRCV_APPL_CONST
#define FRTRCV_APPL_CODE
#define FRTRCV_CALLOUT_CODE
#define FRTRCV_VAR_NOINIT
#define FRTRCV_VAR_POWER_ON_INIT
#define FRTRCV_VAR_FAST
#define FRTRCV_VAR
#define FR_TRCV_VAR

#define FRIF_CODE
#define FRIF_CONST
#define FRIF_APPL_DATA
#define FRIF_APPL_CONST
#define FRIF_APPL_CODE
#define FRIF_CALLOUT_CODE
#define FRIF_VAR_NOINIT
#define FRIF_VAR_POWER_ON_INIT
#define FRIF_VAR_FAST
#define FRIF_VAR

#define FRNM_CODE
#define FRNM_CONST
#define FRNM_APPL_DATA
#define FRNM_APPL_CONST
#define FRNM_APPL_CODE
#define FRNM_CALLOUT_CODE
#define FRNM_VAR_NOINIT
#define FRNM_VAR_POWER_ON_INIT
#define FRNM_VAR_FAST
#define FRNM_VAR


#define FRSM_CODE
#define FRSM_CONST
#define FRSM_APPL_DATA
#define FRSM_APPL_CONST
#define FRSM_APPL_CODE
#define FRSM_CALLOUT_CODE
#define FRSM_VAR_NOINIT
#define FRSM_VAR_POWER_ON_INIT
#define FRSM_VAR_FAST
#define FRSM_VAR


#define FRTP_CODE
#define FRTP_CONST
#define FRTP_APPL_DATA
#define FRTP_APPL_CONST
#define FRTP_APPL_CODE
#define FRTP_CALLOUT_CODE
#define FRTP_VAR_NOINIT
#define FRTP_VAR_POWER_ON_INIT
#define FRTP_VAR_FAST
#define FRTP_VAR
#define FRTP_VAR_INIT
#define FRTP_VAR_NO_INIT


#define IPDUM_CODE
#define IPDUM_CONST
#define IPDUM_APPL_DATA
#define IPDUM_APPL_CONST
#define IPDUM_APPL_CODE
#define IPDUM_CALLOUT_CODE
#define IPDUM_VAR_NOINIT
#define IPDUM_VAR_POWER_ON_INIT
#define IPDUM_VAR_FAST
#define IPDUM_VAR

#define LIN_CODE
#define LIN_CONST
#define LIN_APPL_DATA
#define LIN_APPL_CONST
#define LIN_APPL_CODE
#define LIN_CALLOUT_CODE
#define LIN_VAR_NOINIT
#define LIN_VAR_POWER_ON_INIT
#define LIN_VAR_FAST
#define LIN_VAR

#define LINIF_CODE
#define LINIF_VAR_FAST
#define LINIF_VAR
#define LINIF_CONST
#define LINIF_APPL_DATA
#define LINIF_APPL_CONST

#define LINSM_CODE
#define LINSM_CONST
#define LINSM_APPL_DATA
#define LINSM_APPL_CONST
#define LINSM_APPL_CODE
#define LINSM_CALLOUT_CODE
#define LINSM_VAR_NOINIT
#define LINSM_VAR_POWER_ON_INIT
#define LINSM_VAR_FAST
#define LINSM_VAR

#define LINTRCV_CODE
#define LINTRCV_CONST
#define LINTRCV_APPL_DATA
#define LINTRCV_APPL_CONST
#define LINTRCV_APPL_CODE
#define LINTRCV_CALLOUT_CODE
#define LINTRCV_VAR_NOINIT
#define LINTRCV_VAR_POWER_ON_INIT
#define LINTRCV_VAR_FAST
#define LINTRCV_VAR

#define COM_CODE
#define COM_CONST
#define COM_APPL_DATA
#define COM_APPL_CONST
#define COM_APPL_CODE
#define COM_CALLOUT_CODE
#define COM_VAR_NOINIT
#define COM_VAR_POWER_ON_INIT
#define COM_VAR_FAST
#define COM_VAR

#define COMM_CODE
#define COMM_CONST
#define COMM_APPL_DATA
#define COMM_APPL_CONST
#define COMM_APPL_CODE
#define COMM_CALLOUT_CODE
#define COMM_VAR_NOINIT
#define COMM_VAR_POWER_ON_INIT
#define COMM_VAR_FAST
#define COMM_VAR

#define NM_CODE
#define NM_CONST
#define NM_APPL_DATA
#define NM_APPL_CONST
#define NM_APPL_CODE
#define NM_CALLOUT_CODE
#define NM_VAR_NOINIT
#define NM_VAR_POWER_ON_INIT
#define NM_VAR_FAST
#define NM_VAR

#define PDUR_CODE
#define PDUR_CONST
#define PDUR_APPL_DATA
#define PDUR_APPL_CONST
#define PDUR_APPL_CODE
#define PDUR_CALLOUT_CODE
#define PDUR_VAR_NOINIT
#define PDUR_VAR_POWER_ON_INIT
#define PDUR_VAR_FAST
#define PDUR_VAR

#define DCM_CODE
#define DCM_CONST
#define DCM_APPL_DATA
#define DCM_APPL_CONST
#define DCM_APPL_CODE
#define DCMAPPL_CODE
#define DCM_CALLOUT_CODE
#define DCM_VAR_NOINIT
#define DCM_VAR_POWER_ON_INIT
#define DCM_VAR_FAST
#define DCM_VAR
#define DCM_INTERN_DATA

#define DET_CODE
#define DET_LIBCODE
#define DET_CONST
#define DET_APPL_DATA
#define DET_DATA
#define DET_APPL_CONST
#define DET_APPL_CODE
#define DET_CALLOUT_CODE
#define DET_VAR_NOINIT
#define DET_VAR_POWER_ON_INIT
#define DET_VAR_FAST
#define DET_VAR

#define FIM_CODE
#define FIM_LIBCODE
#define FIM_CONST
#define FIM_APPL_DATA
#define FIM_DATA
#define FIM_APPL_CONST
#define FIM_APPL_CODE
#define FIM_CALLOUT_CODE
#define FIM_VAR_NOINIT
#define FIM_VAR_POWER_ON_INIT
#define FIM_VAR_FAST
#define FIM_VAR


#define RTE_CODE
#define RTE_LIBCODE
#define RTE_CONST
#define RTE_APPL_DATA
#define RTE_DATA
#define RTE_APPL_CONST
#define RTE_APPL_CODE
#define RTE_CALLOUT_CODE
#define RTE_VAR_NOINIT
#define RTE_VAR_POWER_ON_INIT
#define RTE_VAR_FAST
#define RTE_VAR


#define Swc1_CODE
#define Swc2_CODE
#define Swc3_CODE
#define Swc_NvMTest_CODE

#define NvM_CODE
#define NvM_CONST
#define NvM_APPL_DATA
#define NvM_APPL_CONST
#define NvM_APPL_CODE
#define NvM_CALLOUT_CODE
#define NvM_VAR_NOINIT
#define NvM_VAR_POWER_ON_INIT
#define NvM_VAR_FAST
#define NvM_VAR

#define FEE_CODE
#define FEE_CONST
#define FEE_APPL_DATA
#define FEE_APPL_CONST
#define FEE_APPL_CODE
#define FEE_CALLOUT_CODE
#define FEE_VAR_NOINIT
#define FEE_VAR_POWER_ON_INIT
#define FEE_VAR_FAST
#define FEE_VAR

#define FLS_CODE
#define FLS_CONST
#define FLS_APPL_DATA
#define FLS_APPL_CONST
#define FLS_APPL_CODE
#define FLS_CALLOUT_CODE
#define FLS_VAR_NOINIT
#define FLS_VAR_POWER_ON_INIT
#define FLS_VAR_FAST
#define FLS_VAR

#define EA_CODE
#define EA_CONST
#define EA_APPL_DATA
#define EA_APPL_CONST
#define EA_APPL_CODE
#define EA_CALLOUT_CODE
#define EA_VAR_NOINIT
#define EA_VAR_POWER_ON_INIT
#define EA_VAR_FAST
#define EA_VAR

#define EEP_CODE
#define EEP_CONST
#define EEP_APPL_DATA
#define EEP_APPL_CONST
#define EEP_APPL_CODE
#define EEP_CALLOUT_CODE
#define EEP_VAR_NOINIT
#define EEP_VAR_POWER_ON_INIT
#define EEP_VAR_FAST
#define EEP_VAR

#define MEMIF_CODE

#define RBA_TRCV_CODE
#define RBA_TRCV_CONST
#define RBA_TRCV_APPL_DATA
#define RBA_TRCV_APPL_CONST
#define RBA_TRCV_APPL_CODE
#define RBA_TRCV_CALLOUT_CODE
#define RBA_TRCV_VAR_NOINIT
#define RBA_TRCV_VAR_POWER_ON_INIT
#define RBA_TRCV_VAR_FAST
#define RBA_TRCV_VAR
#define RBA_TRCV_PBCFG
#define RBA_TRCV_CFG


#define EcuM_CODE
#define EcuM_CONST
#define EcuM_APPL_DATA
#define EcuM_APPL_CONST
#define EcuM_APPL_CODE
#define EcuM_CALLOUT_CODE
#define EcuM_VAR_NOINIT
#define EcuM_VAR_POWER_ON_INIT
#define EcuM_VAR_FAST
#define EcuM_VAR

#define ECUM_CODE
#define ECUM_CONST
#define ECUM_APPL_DATA
#define ECUM_APPL_CONST
#define ECUM_APPL_CODE
#define ECUM_CALLOUT_CODE
#define ECUM_VAR_NOINIT
#define ECUM_VAR_POWER_ON_INIT
#define ECUM_VAR_FAST
#define ECUM_VAR

#define STBM_CODE
#define STBM_VAR
#define STBM_APPL_DATA

#define BSWM_CODE

#define automatic

#define WDGIF_CODE
#define WDGIF_CONST
#define WDGM_CODE
#define WdgM_CODE
#define WDGM_CONST
#define WDGM_VAR
#define Swc_WdgM_User_CODE

#define RBA_MULTISTACKTRACE_CODE
#define RBA_MULTISTACKTRACE_VAR_CLEARED
#define RBA_MULTISTACKTRACE_VAR_CONST

#define RBA_RUNTIME_CODE
#define RBA_RUNTIME_CODE_FAST
#define RBA_RUNTIME_CODE_SLOW
#define RBA_RUNTIME_VAR_CLEARED
#define RBA_RUNTIME_VAR_NO_INIT
#define RBA_RUNTIME_CONST

#define XCP_CODE

// ARREF:COMPILER055
// No need to define memory and pointer classes for this special generic implementation.


// ARREF:COMPILER010
// Configure if needed
// #define _<COMPILERNAME>_C_<PLATFORMNAME>_



#ifndef STATIC
#define STATIC static
#endif

#define HIGH_WORD_FIRST   0
#define LOW_WORD_FIRST    1

#define CPU_WORD_ORDER    CPU_BYTE_ORDER


/*
 ******************************************************************************
 * Compiler dependent macro for unused parameter to avoid compiler warnings.
 *
 * Usage:   PARAM_UNUSED(xNotUsed_u16)
 *
 *          for structures:
 *          PARAM_UNUSED(&xNotUsed_s)
 *
 ******************************************************************************
*/
// This definition shall be adapted (Other name???)
#ifndef PARAM_UNUSED
    #define PARAM_UNUSED(param) if ((param) != 0) {}
#endif

/* COMPILER_CFG_H */
#endif
