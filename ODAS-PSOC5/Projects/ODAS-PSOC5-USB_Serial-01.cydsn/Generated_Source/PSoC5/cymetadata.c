/*******************************************************************************
* File Name: cymetadata.c
* 
* PSoC Creator  4.0
*
* Description:
* This file defines all extra memory spaces that need to be included.
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2016 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/


#include "cytypes.h"


#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_CONFIG_ECC_SECTION
#define CY_CONFIG_ECC_SECTION __attribute__ ((__section__(".cyconfigecc"), used))
#endif
CY_CONFIG_ECC_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cyconfigecc"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_meta_configecc[] = {
    0x01u, 0x45u, 0x00u, 0x40u, 0x0Au, 0x52u, 0x00u, 0x40u,
    0x01u, 0x01u, 0x01u, 0x40u, 0x02u, 0x03u, 0x01u, 0x40u,
    0x06u, 0x05u, 0x01u, 0x40u, 0x38u, 0x06u, 0x01u, 0x40u,
    0x31u, 0x07u, 0x01u, 0x40u, 0x01u, 0x09u, 0x01u, 0x40u,
    0x01u, 0x0Fu, 0x01u, 0x40u, 0x04u, 0x15u, 0x01u, 0x40u,
    0x04u, 0x16u, 0x01u, 0x40u, 0x17u, 0x17u, 0x01u, 0x40u,
    0x01u, 0x19u, 0x01u, 0x40u, 0x0Fu, 0x40u, 0x01u, 0x40u,
    0x12u, 0x41u, 0x01u, 0x40u, 0x11u, 0x42u, 0x01u, 0x40u,
    0x12u, 0x43u, 0x01u, 0x40u, 0x01u, 0x44u, 0x01u, 0x40u,
    0x01u, 0x45u, 0x01u, 0x40u, 0x01u, 0x46u, 0x01u, 0x40u,
    0x06u, 0x47u, 0x01u, 0x40u, 0x10u, 0x48u, 0x01u, 0x40u,
    0x0Cu, 0x49u, 0x01u, 0x40u, 0x01u, 0x4Cu, 0x01u, 0x40u,
    0x04u, 0x50u, 0x01u, 0x40u, 0x01u, 0x51u, 0x01u, 0x40u,
    0x7Eu, 0x02u, 0x00u, 0x33u, 0x01u, 0xA5u, 0x18u, 0x44u,
    0x19u, 0xA1u, 0x20u, 0xCAu, 0x21u, 0xACu, 0x60u, 0x04u,
    0x61u, 0x05u, 0x78u, 0x04u, 0x7Cu, 0x40u, 0xE2u, 0x08u,
    0x89u, 0x10u, 0xE2u, 0x80u, 0x81u, 0x80u, 0x87u, 0x01u,
    0x88u, 0x08u, 0x89u, 0x80u, 0x95u, 0x10u, 0xE6u, 0xA0u,
    0x04u, 0x01u, 0x06u, 0x0Eu, 0x0Cu, 0x0Au, 0x0Du, 0x01u,
    0x0Eu, 0x05u, 0x0Fu, 0x0Eu, 0x10u, 0x0Fu, 0x15u, 0x06u,
    0x17u, 0x09u, 0x1Bu, 0x07u, 0x21u, 0x02u, 0x23u, 0x0Du,
    0x28u, 0x07u, 0x2Au, 0x08u, 0x30u, 0x04u, 0x31u, 0x04u,
    0x32u, 0x02u, 0x33u, 0x08u, 0x34u, 0x01u, 0x35u, 0x01u,
    0x36u, 0x08u, 0x37u, 0x02u, 0x3Bu, 0x08u, 0x3Eu, 0x55u,
    0x3Fu, 0x51u, 0x58u, 0x04u, 0x59u, 0x04u, 0x5Fu, 0x01u,
    0x80u, 0x07u, 0x82u, 0x08u, 0x84u, 0x0Du, 0x86u, 0x02u,
    0x8Fu, 0x03u, 0x90u, 0x0Du, 0x92u, 0x02u, 0x95u, 0x03u,
    0x97u, 0x04u, 0x99u, 0x03u, 0xA8u, 0x04u, 0xAAu, 0x0Bu,
    0xADu, 0x01u, 0xAFu, 0x0Eu, 0xB0u, 0x01u, 0xB1u, 0x04u,
    0xB2u, 0x02u, 0xB3u, 0x08u, 0xB4u, 0x04u, 0xB5u, 0x01u,
    0xB6u, 0x08u, 0xB7u, 0x02u, 0xBBu, 0x0Au, 0xBEu, 0x55u,
    0xBFu, 0x50u, 0xD8u, 0x04u, 0xD9u, 0x04u, 0xDFu, 0x01u,
    0x00u, 0x01u, 0x03u, 0x10u, 0x05u, 0x40u, 0x07u, 0x10u,
    0x0Bu, 0x40u, 0x0Fu, 0x40u, 0x12u, 0x08u, 0x17u, 0x20u,
    0x19u, 0x80u, 0x1Au, 0x04u, 0x1Bu, 0x09u, 0x1Cu, 0x28u,
    0x1Eu, 0x01u, 0x1Fu, 0x02u, 0x21u, 0x80u, 0x22u, 0x08u,
    0x23u, 0x68u, 0x25u, 0x10u, 0x26u, 0x42u, 0x27u, 0x10u,
    0x29u, 0x40u, 0x2Fu, 0x80u, 0x32u, 0x08u, 0x33u, 0x10u,
    0x36u, 0x08u, 0x37u, 0x10u, 0x3Bu, 0x40u, 0x3Fu, 0x40u,
    0x83u, 0x08u, 0x84u, 0x10u, 0x86u, 0x44u, 0x8Bu, 0x08u,
    0x8Eu, 0x02u, 0x8Fu, 0x02u, 0x95u, 0x10u, 0x96u, 0x01u,
    0x9Du, 0x80u, 0xA4u, 0x08u, 0xA5u, 0x80u, 0xA7u, 0x01u,
    0xAEu, 0x01u, 0xC0u, 0xACu, 0xC2u, 0x18u, 0xC4u, 0x42u,
    0xCAu, 0x88u, 0xCCu, 0x66u, 0xCEu, 0x18u, 0xE2u, 0x20u,
    0xE6u, 0x51u, 0xE6u, 0x01u, 0xE2u, 0x08u, 0xB2u, 0x40u,
    0xB6u, 0x04u, 0xEAu, 0x40u, 0xEEu, 0x80u, 0x3Au, 0xC0u,
    0x58u, 0x04u, 0x5Bu, 0x04u, 0x5Fu, 0x01u, 0x1Cu, 0x01u,
    0x1Du, 0x40u, 0x1Fu, 0x80u, 0x6Cu, 0x01u, 0x6Du, 0x10u,
    0x6Eu, 0x09u, 0x74u, 0x08u, 0x76u, 0x4Au, 0x8Au, 0x09u,
    0x8Cu, 0x01u, 0x94u, 0x01u, 0x95u, 0x10u, 0x9Du, 0x40u,
    0x9Eu, 0x02u, 0xA4u, 0x08u, 0xA7u, 0x80u, 0xB0u, 0x04u,
    0xB2u, 0x02u, 0xB5u, 0x10u, 0xE2u, 0x60u, 0xE6u, 0x80u,
    0xEAu, 0xA2u, 0xEEu, 0x10u, 0xEAu, 0x02u, 0x33u, 0x41u,
    0x35u, 0x80u, 0x51u, 0x04u, 0x54u, 0x01u, 0x58u, 0x20u,
    0x5Eu, 0x08u, 0x61u, 0x40u, 0x63u, 0x40u, 0x66u, 0x10u,
    0x85u, 0x80u, 0xCCu, 0x70u, 0xD4u, 0xA0u, 0xD6u, 0xE0u,
    0xD8u, 0xC0u, 0xE2u, 0x10u, 0x50u, 0x04u, 0x58u, 0x14u,
    0x5Cu, 0x08u, 0x5Fu, 0x80u, 0x62u, 0x08u, 0x65u, 0x01u,
    0x89u, 0x40u, 0x95u, 0x08u, 0x97u, 0x40u, 0x9Cu, 0x20u,
    0x9Du, 0x40u, 0x9Eu, 0x10u, 0x9Fu, 0x41u, 0xA4u, 0x01u,
    0xA6u, 0x04u, 0xD4u, 0xA0u, 0xD6u, 0xE0u, 0xD8u, 0xC0u,
    0x52u, 0x40u, 0x54u, 0x80u, 0x80u, 0x04u, 0x84u, 0x01u,
    0x8Au, 0x08u, 0x8Bu, 0x80u, 0x94u, 0x08u, 0x95u, 0x08u,
    0x97u, 0x40u, 0x9Cu, 0x3Cu, 0x9Du, 0x01u, 0x9Eu, 0x10u,
    0x9Fu, 0xC1u, 0xA4u, 0x01u, 0xA6u, 0x0Cu, 0xD4u, 0x60u,
    0xE6u, 0x90u, 0x81u, 0x01u, 0x83u, 0x40u, 0x84u, 0x82u,
    0x86u, 0x10u, 0x89u, 0x20u, 0x8Eu, 0x24u, 0x95u, 0x08u,
    0x97u, 0x40u, 0x9Cu, 0x3Cu, 0x9Du, 0x01u, 0x9Eu, 0x10u,
    0x9Fu, 0x41u, 0xA4u, 0x80u, 0xA6u, 0x04u, 0xAEu, 0x40u,
    0xE2u, 0x70u, 0xE6u, 0xC0u, 0xEAu, 0x10u, 0x87u, 0x10u,
    0x97u, 0x10u, 0x97u, 0x10u, 0x0Au, 0x80u, 0x0Bu, 0x04u,
    0x0Fu, 0x10u, 0x82u, 0x40u, 0x97u, 0x10u, 0xC2u, 0x0Eu,
    0x56u, 0x20u, 0x88u, 0x14u, 0x8Eu, 0x04u, 0x90u, 0x01u,
    0x95u, 0x08u, 0x98u, 0x02u, 0x99u, 0x20u, 0x9Au, 0x24u,
    0x9Cu, 0x34u, 0xA6u, 0x04u, 0xAFu, 0x01u, 0xB0u, 0x08u,
    0xB3u, 0x40u, 0xB4u, 0x01u, 0xD4u, 0x40u, 0xEAu, 0x40u,
    0x56u, 0x04u, 0x58u, 0x02u, 0x59u, 0x20u, 0x5Cu, 0x01u,
    0x90u, 0x01u, 0x98u, 0x02u, 0x99u, 0x20u, 0x9Au, 0x04u,
    0xB1u, 0x04u, 0xB4u, 0x20u, 0xD4u, 0xC0u, 0xD6u, 0xC0u,
    0xAFu, 0x04u, 0x00u, 0x01u, 0x0Au, 0x01u, 0x10u, 0x01u,
    0x1Au, 0x01u, 0x00u, 0x2Au, 0x00u, 0xFFu, 0xFFu, 0x00u,
    0xFFu, 0x00u, 0x00u, 0x00u, 0x00u, 0x0Fu, 0x0Fu, 0x00u,
    0x0Fu, 0x00u, 0x00u, 0x00u, 0x40u, 0x00u, 0x00u, 0x0Cu,
    0x0Cu, 0x00u, 0x0Cu, 0x00u, 0xC0u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x0Bu, 0x0Bu, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0xF5u, 0xF5u, 0xF5u, 0xF5u, 0x00u, 0x00u, 0x00u,
    0x00u, 0xFFu, 0xFFu, 0x00u, 0xFFu, 0x00u, 0x00u, 0x00u,
    0x00u, 0x10u, 0x10u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_CUST_NVL_SECTION
#define CY_CUST_NVL_SECTION __attribute__ ((__section__(".cycustnvl"), used))
#endif
CY_CUST_NVL_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cycustnvl"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_meta_custnvl[] = {
    0x00u, 0x00u, 0x40u, 0x05u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_WO_NVL_SECTION
#define CY_WO_NVL_SECTION __attribute__ ((__section__(".cywolatch"), used))
#endif
CY_WO_NVL_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cywolatch"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_meta_wonvl[] = {
    0xBCu, 0x90u, 0xACu, 0xAFu
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_FLASH_PROT_SECTION
#define CY_FLASH_PROT_SECTION __attribute__ ((__section__(".cyflashprotect"), used))
#endif
CY_FLASH_PROT_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cyflashprotect"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_meta_flashprotect[] = {
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u
};

#if defined(__GNUC__) || defined(__ARMCC_VERSION)
#ifndef CY_META_SECTION
#define CY_META_SECTION __attribute__ ((__section__(".cymeta"), used))
#endif
CY_META_SECTION
#elif defined(__ICCARM__)
#pragma  location=".cymeta"
#else
#error "Unsupported toolchain"
#endif
const uint8 cy_metadata[] = {
    0x00u, 0x01u, 0x2Eu, 0x13u, 0x30u, 0x69u, 0x00u, 0x01u,
    0x00u, 0x00u, 0x00u, 0x00u
};
