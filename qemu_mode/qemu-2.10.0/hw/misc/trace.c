/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_ECC_MEM_WRITEL_MER_DSTATE;
uint16_t _TRACE_ECC_MEM_WRITEL_MDR_DSTATE;
uint16_t _TRACE_ECC_MEM_WRITEL_MFSR_DSTATE;
uint16_t _TRACE_ECC_MEM_WRITEL_VCR_DSTATE;
uint16_t _TRACE_ECC_MEM_WRITEL_DR_DSTATE;
uint16_t _TRACE_ECC_MEM_WRITEL_ECR0_DSTATE;
uint16_t _TRACE_ECC_MEM_WRITEL_ECR1_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_MER_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_MDR_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_MFSR_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_VCR_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_MFAR0_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_MFAR1_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_DR_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_ECR0_DSTATE;
uint16_t _TRACE_ECC_MEM_READL_ECR1_DSTATE;
uint16_t _TRACE_ECC_DIAG_MEM_WRITEB_DSTATE;
uint16_t _TRACE_ECC_DIAG_MEM_READB_DSTATE;
uint16_t _TRACE_SLAVIO_MISC_UPDATE_IRQ_RAISE_DSTATE;
uint16_t _TRACE_SLAVIO_MISC_UPDATE_IRQ_LOWER_DSTATE;
uint16_t _TRACE_SLAVIO_SET_POWER_FAIL_DSTATE;
uint16_t _TRACE_SLAVIO_CFG_MEM_WRITEB_DSTATE;
uint16_t _TRACE_SLAVIO_CFG_MEM_READB_DSTATE;
uint16_t _TRACE_SLAVIO_DIAG_MEM_WRITEB_DSTATE;
uint16_t _TRACE_SLAVIO_DIAG_MEM_READB_DSTATE;
uint16_t _TRACE_SLAVIO_MDM_MEM_WRITEB_DSTATE;
uint16_t _TRACE_SLAVIO_MDM_MEM_READB_DSTATE;
uint16_t _TRACE_SLAVIO_AUX1_MEM_WRITEB_DSTATE;
uint16_t _TRACE_SLAVIO_AUX1_MEM_READB_DSTATE;
uint16_t _TRACE_SLAVIO_AUX2_MEM_WRITEB_DSTATE;
uint16_t _TRACE_SLAVIO_AUX2_MEM_READB_DSTATE;
uint16_t _TRACE_APC_MEM_WRITEB_DSTATE;
uint16_t _TRACE_APC_MEM_READB_DSTATE;
uint16_t _TRACE_SLAVIO_SYSCTRL_MEM_WRITEL_DSTATE;
uint16_t _TRACE_SLAVIO_SYSCTRL_MEM_READL_DSTATE;
uint16_t _TRACE_SLAVIO_LED_MEM_WRITEW_DSTATE;
uint16_t _TRACE_SLAVIO_LED_MEM_READW_DSTATE;
uint16_t _TRACE_MILKYMIST_HPDMC_MEMORY_READ_DSTATE;
uint16_t _TRACE_MILKYMIST_HPDMC_MEMORY_WRITE_DSTATE;
uint16_t _TRACE_MILKYMIST_PFPU_MEMORY_READ_DSTATE;
uint16_t _TRACE_MILKYMIST_PFPU_MEMORY_WRITE_DSTATE;
uint16_t _TRACE_MILKYMIST_PFPU_VECTOUT_DSTATE;
uint16_t _TRACE_MILKYMIST_PFPU_PULSE_IRQ_DSTATE;
uint16_t _TRACE_ASPEED_SCU_WRITE_DSTATE;
uint16_t _TRACE_MPS2_SCC_READ_DSTATE;
uint16_t _TRACE_MPS2_SCC_WRITE_DSTATE;
uint16_t _TRACE_MPS2_SCC_RESET_DSTATE;
uint16_t _TRACE_MPS2_SCC_LEDS_DSTATE;
uint16_t _TRACE_MPS2_SCC_CFG_WRITE_DSTATE;
uint16_t _TRACE_MPS2_SCC_CFG_READ_DSTATE;
TraceEvent _TRACE_ECC_MEM_WRITEL_MER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_writel_mer",
    .sstate = TRACE_ECC_MEM_WRITEL_MER_ENABLED,
    .dstate = &_TRACE_ECC_MEM_WRITEL_MER_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_WRITEL_MDR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_writel_mdr",
    .sstate = TRACE_ECC_MEM_WRITEL_MDR_ENABLED,
    .dstate = &_TRACE_ECC_MEM_WRITEL_MDR_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_WRITEL_MFSR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_writel_mfsr",
    .sstate = TRACE_ECC_MEM_WRITEL_MFSR_ENABLED,
    .dstate = &_TRACE_ECC_MEM_WRITEL_MFSR_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_WRITEL_VCR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_writel_vcr",
    .sstate = TRACE_ECC_MEM_WRITEL_VCR_ENABLED,
    .dstate = &_TRACE_ECC_MEM_WRITEL_VCR_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_WRITEL_DR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_writel_dr",
    .sstate = TRACE_ECC_MEM_WRITEL_DR_ENABLED,
    .dstate = &_TRACE_ECC_MEM_WRITEL_DR_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_WRITEL_ECR0_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_writel_ecr0",
    .sstate = TRACE_ECC_MEM_WRITEL_ECR0_ENABLED,
    .dstate = &_TRACE_ECC_MEM_WRITEL_ECR0_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_WRITEL_ECR1_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_writel_ecr1",
    .sstate = TRACE_ECC_MEM_WRITEL_ECR1_ENABLED,
    .dstate = &_TRACE_ECC_MEM_WRITEL_ECR1_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_MER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_mer",
    .sstate = TRACE_ECC_MEM_READL_MER_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_MER_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_MDR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_mdr",
    .sstate = TRACE_ECC_MEM_READL_MDR_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_MDR_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_MFSR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_mfsr",
    .sstate = TRACE_ECC_MEM_READL_MFSR_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_MFSR_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_VCR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_vcr",
    .sstate = TRACE_ECC_MEM_READL_VCR_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_VCR_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_MFAR0_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_mfar0",
    .sstate = TRACE_ECC_MEM_READL_MFAR0_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_MFAR0_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_MFAR1_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_mfar1",
    .sstate = TRACE_ECC_MEM_READL_MFAR1_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_MFAR1_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_DR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_dr",
    .sstate = TRACE_ECC_MEM_READL_DR_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_DR_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_ECR0_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_ecr0",
    .sstate = TRACE_ECC_MEM_READL_ECR0_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_ECR0_DSTATE 
};
TraceEvent _TRACE_ECC_MEM_READL_ECR1_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_mem_readl_ecr1",
    .sstate = TRACE_ECC_MEM_READL_ECR1_ENABLED,
    .dstate = &_TRACE_ECC_MEM_READL_ECR1_DSTATE 
};
TraceEvent _TRACE_ECC_DIAG_MEM_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_diag_mem_writeb",
    .sstate = TRACE_ECC_DIAG_MEM_WRITEB_ENABLED,
    .dstate = &_TRACE_ECC_DIAG_MEM_WRITEB_DSTATE 
};
TraceEvent _TRACE_ECC_DIAG_MEM_READB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ecc_diag_mem_readb",
    .sstate = TRACE_ECC_DIAG_MEM_READB_ENABLED,
    .dstate = &_TRACE_ECC_DIAG_MEM_READB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_MISC_UPDATE_IRQ_RAISE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_misc_update_irq_raise",
    .sstate = TRACE_SLAVIO_MISC_UPDATE_IRQ_RAISE_ENABLED,
    .dstate = &_TRACE_SLAVIO_MISC_UPDATE_IRQ_RAISE_DSTATE 
};
TraceEvent _TRACE_SLAVIO_MISC_UPDATE_IRQ_LOWER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_misc_update_irq_lower",
    .sstate = TRACE_SLAVIO_MISC_UPDATE_IRQ_LOWER_ENABLED,
    .dstate = &_TRACE_SLAVIO_MISC_UPDATE_IRQ_LOWER_DSTATE 
};
TraceEvent _TRACE_SLAVIO_SET_POWER_FAIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_set_power_fail",
    .sstate = TRACE_SLAVIO_SET_POWER_FAIL_ENABLED,
    .dstate = &_TRACE_SLAVIO_SET_POWER_FAIL_DSTATE 
};
TraceEvent _TRACE_SLAVIO_CFG_MEM_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_cfg_mem_writeb",
    .sstate = TRACE_SLAVIO_CFG_MEM_WRITEB_ENABLED,
    .dstate = &_TRACE_SLAVIO_CFG_MEM_WRITEB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_CFG_MEM_READB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_cfg_mem_readb",
    .sstate = TRACE_SLAVIO_CFG_MEM_READB_ENABLED,
    .dstate = &_TRACE_SLAVIO_CFG_MEM_READB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_DIAG_MEM_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_diag_mem_writeb",
    .sstate = TRACE_SLAVIO_DIAG_MEM_WRITEB_ENABLED,
    .dstate = &_TRACE_SLAVIO_DIAG_MEM_WRITEB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_DIAG_MEM_READB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_diag_mem_readb",
    .sstate = TRACE_SLAVIO_DIAG_MEM_READB_ENABLED,
    .dstate = &_TRACE_SLAVIO_DIAG_MEM_READB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_MDM_MEM_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_mdm_mem_writeb",
    .sstate = TRACE_SLAVIO_MDM_MEM_WRITEB_ENABLED,
    .dstate = &_TRACE_SLAVIO_MDM_MEM_WRITEB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_MDM_MEM_READB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_mdm_mem_readb",
    .sstate = TRACE_SLAVIO_MDM_MEM_READB_ENABLED,
    .dstate = &_TRACE_SLAVIO_MDM_MEM_READB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_AUX1_MEM_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_aux1_mem_writeb",
    .sstate = TRACE_SLAVIO_AUX1_MEM_WRITEB_ENABLED,
    .dstate = &_TRACE_SLAVIO_AUX1_MEM_WRITEB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_AUX1_MEM_READB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_aux1_mem_readb",
    .sstate = TRACE_SLAVIO_AUX1_MEM_READB_ENABLED,
    .dstate = &_TRACE_SLAVIO_AUX1_MEM_READB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_AUX2_MEM_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_aux2_mem_writeb",
    .sstate = TRACE_SLAVIO_AUX2_MEM_WRITEB_ENABLED,
    .dstate = &_TRACE_SLAVIO_AUX2_MEM_WRITEB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_AUX2_MEM_READB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_aux2_mem_readb",
    .sstate = TRACE_SLAVIO_AUX2_MEM_READB_ENABLED,
    .dstate = &_TRACE_SLAVIO_AUX2_MEM_READB_DSTATE 
};
TraceEvent _TRACE_APC_MEM_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "apc_mem_writeb",
    .sstate = TRACE_APC_MEM_WRITEB_ENABLED,
    .dstate = &_TRACE_APC_MEM_WRITEB_DSTATE 
};
TraceEvent _TRACE_APC_MEM_READB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "apc_mem_readb",
    .sstate = TRACE_APC_MEM_READB_ENABLED,
    .dstate = &_TRACE_APC_MEM_READB_DSTATE 
};
TraceEvent _TRACE_SLAVIO_SYSCTRL_MEM_WRITEL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_sysctrl_mem_writel",
    .sstate = TRACE_SLAVIO_SYSCTRL_MEM_WRITEL_ENABLED,
    .dstate = &_TRACE_SLAVIO_SYSCTRL_MEM_WRITEL_DSTATE 
};
TraceEvent _TRACE_SLAVIO_SYSCTRL_MEM_READL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_sysctrl_mem_readl",
    .sstate = TRACE_SLAVIO_SYSCTRL_MEM_READL_ENABLED,
    .dstate = &_TRACE_SLAVIO_SYSCTRL_MEM_READL_DSTATE 
};
TraceEvent _TRACE_SLAVIO_LED_MEM_WRITEW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_led_mem_writew",
    .sstate = TRACE_SLAVIO_LED_MEM_WRITEW_ENABLED,
    .dstate = &_TRACE_SLAVIO_LED_MEM_WRITEW_DSTATE 
};
TraceEvent _TRACE_SLAVIO_LED_MEM_READW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "slavio_led_mem_readw",
    .sstate = TRACE_SLAVIO_LED_MEM_READW_ENABLED,
    .dstate = &_TRACE_SLAVIO_LED_MEM_READW_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_HPDMC_MEMORY_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_hpdmc_memory_read",
    .sstate = TRACE_MILKYMIST_HPDMC_MEMORY_READ_ENABLED,
    .dstate = &_TRACE_MILKYMIST_HPDMC_MEMORY_READ_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_HPDMC_MEMORY_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_hpdmc_memory_write",
    .sstate = TRACE_MILKYMIST_HPDMC_MEMORY_WRITE_ENABLED,
    .dstate = &_TRACE_MILKYMIST_HPDMC_MEMORY_WRITE_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_PFPU_MEMORY_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_pfpu_memory_read",
    .sstate = TRACE_MILKYMIST_PFPU_MEMORY_READ_ENABLED,
    .dstate = &_TRACE_MILKYMIST_PFPU_MEMORY_READ_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_PFPU_MEMORY_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_pfpu_memory_write",
    .sstate = TRACE_MILKYMIST_PFPU_MEMORY_WRITE_ENABLED,
    .dstate = &_TRACE_MILKYMIST_PFPU_MEMORY_WRITE_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_PFPU_VECTOUT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_pfpu_vectout",
    .sstate = TRACE_MILKYMIST_PFPU_VECTOUT_ENABLED,
    .dstate = &_TRACE_MILKYMIST_PFPU_VECTOUT_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_PFPU_PULSE_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_pfpu_pulse_irq",
    .sstate = TRACE_MILKYMIST_PFPU_PULSE_IRQ_ENABLED,
    .dstate = &_TRACE_MILKYMIST_PFPU_PULSE_IRQ_DSTATE 
};
TraceEvent _TRACE_ASPEED_SCU_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "aspeed_scu_write",
    .sstate = TRACE_ASPEED_SCU_WRITE_ENABLED,
    .dstate = &_TRACE_ASPEED_SCU_WRITE_DSTATE 
};
TraceEvent _TRACE_MPS2_SCC_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mps2_scc_read",
    .sstate = TRACE_MPS2_SCC_READ_ENABLED,
    .dstate = &_TRACE_MPS2_SCC_READ_DSTATE 
};
TraceEvent _TRACE_MPS2_SCC_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mps2_scc_write",
    .sstate = TRACE_MPS2_SCC_WRITE_ENABLED,
    .dstate = &_TRACE_MPS2_SCC_WRITE_DSTATE 
};
TraceEvent _TRACE_MPS2_SCC_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mps2_scc_reset",
    .sstate = TRACE_MPS2_SCC_RESET_ENABLED,
    .dstate = &_TRACE_MPS2_SCC_RESET_DSTATE 
};
TraceEvent _TRACE_MPS2_SCC_LEDS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mps2_scc_leds",
    .sstate = TRACE_MPS2_SCC_LEDS_ENABLED,
    .dstate = &_TRACE_MPS2_SCC_LEDS_DSTATE 
};
TraceEvent _TRACE_MPS2_SCC_CFG_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mps2_scc_cfg_write",
    .sstate = TRACE_MPS2_SCC_CFG_WRITE_ENABLED,
    .dstate = &_TRACE_MPS2_SCC_CFG_WRITE_DSTATE 
};
TraceEvent _TRACE_MPS2_SCC_CFG_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mps2_scc_cfg_read",
    .sstate = TRACE_MPS2_SCC_CFG_READ_ENABLED,
    .dstate = &_TRACE_MPS2_SCC_CFG_READ_DSTATE 
};
TraceEvent *hw_misc_trace_events[] = {
    &_TRACE_ECC_MEM_WRITEL_MER_EVENT,
    &_TRACE_ECC_MEM_WRITEL_MDR_EVENT,
    &_TRACE_ECC_MEM_WRITEL_MFSR_EVENT,
    &_TRACE_ECC_MEM_WRITEL_VCR_EVENT,
    &_TRACE_ECC_MEM_WRITEL_DR_EVENT,
    &_TRACE_ECC_MEM_WRITEL_ECR0_EVENT,
    &_TRACE_ECC_MEM_WRITEL_ECR1_EVENT,
    &_TRACE_ECC_MEM_READL_MER_EVENT,
    &_TRACE_ECC_MEM_READL_MDR_EVENT,
    &_TRACE_ECC_MEM_READL_MFSR_EVENT,
    &_TRACE_ECC_MEM_READL_VCR_EVENT,
    &_TRACE_ECC_MEM_READL_MFAR0_EVENT,
    &_TRACE_ECC_MEM_READL_MFAR1_EVENT,
    &_TRACE_ECC_MEM_READL_DR_EVENT,
    &_TRACE_ECC_MEM_READL_ECR0_EVENT,
    &_TRACE_ECC_MEM_READL_ECR1_EVENT,
    &_TRACE_ECC_DIAG_MEM_WRITEB_EVENT,
    &_TRACE_ECC_DIAG_MEM_READB_EVENT,
    &_TRACE_SLAVIO_MISC_UPDATE_IRQ_RAISE_EVENT,
    &_TRACE_SLAVIO_MISC_UPDATE_IRQ_LOWER_EVENT,
    &_TRACE_SLAVIO_SET_POWER_FAIL_EVENT,
    &_TRACE_SLAVIO_CFG_MEM_WRITEB_EVENT,
    &_TRACE_SLAVIO_CFG_MEM_READB_EVENT,
    &_TRACE_SLAVIO_DIAG_MEM_WRITEB_EVENT,
    &_TRACE_SLAVIO_DIAG_MEM_READB_EVENT,
    &_TRACE_SLAVIO_MDM_MEM_WRITEB_EVENT,
    &_TRACE_SLAVIO_MDM_MEM_READB_EVENT,
    &_TRACE_SLAVIO_AUX1_MEM_WRITEB_EVENT,
    &_TRACE_SLAVIO_AUX1_MEM_READB_EVENT,
    &_TRACE_SLAVIO_AUX2_MEM_WRITEB_EVENT,
    &_TRACE_SLAVIO_AUX2_MEM_READB_EVENT,
    &_TRACE_APC_MEM_WRITEB_EVENT,
    &_TRACE_APC_MEM_READB_EVENT,
    &_TRACE_SLAVIO_SYSCTRL_MEM_WRITEL_EVENT,
    &_TRACE_SLAVIO_SYSCTRL_MEM_READL_EVENT,
    &_TRACE_SLAVIO_LED_MEM_WRITEW_EVENT,
    &_TRACE_SLAVIO_LED_MEM_READW_EVENT,
    &_TRACE_MILKYMIST_HPDMC_MEMORY_READ_EVENT,
    &_TRACE_MILKYMIST_HPDMC_MEMORY_WRITE_EVENT,
    &_TRACE_MILKYMIST_PFPU_MEMORY_READ_EVENT,
    &_TRACE_MILKYMIST_PFPU_MEMORY_WRITE_EVENT,
    &_TRACE_MILKYMIST_PFPU_VECTOUT_EVENT,
    &_TRACE_MILKYMIST_PFPU_PULSE_IRQ_EVENT,
    &_TRACE_ASPEED_SCU_WRITE_EVENT,
    &_TRACE_MPS2_SCC_READ_EVENT,
    &_TRACE_MPS2_SCC_WRITE_EVENT,
    &_TRACE_MPS2_SCC_RESET_EVENT,
    &_TRACE_MPS2_SCC_LEDS_EVENT,
    &_TRACE_MPS2_SCC_CFG_WRITE_EVENT,
    &_TRACE_MPS2_SCC_CFG_READ_EVENT,
  NULL,
};

static void trace_hw_misc_register_events(void)
{
    trace_event_register_group(hw_misc_trace_events);
}
trace_init(trace_hw_misc_register_events)
