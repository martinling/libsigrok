/*
 * This file is part of the libsigrok project.
 *
 * Copyright (C) 2014 Bert Vermeulen <bert@biot.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "libsigrok.h"
#include "libsigrok-internal.h"

/** @cond PRIVATE */
#ifdef HAVE_HW_AGILENT_DMM
extern SR_PRIV struct sr_dev_driver agdmm_driver_info;
#endif
#ifdef HAVE_HW_APPA_55II
extern SR_PRIV struct sr_dev_driver appa_55ii_driver_info;
#endif
#ifdef HAVE_HW_ASIX_SIGMA
extern SR_PRIV struct sr_dev_driver asix_sigma_driver_info;
#endif
#ifdef HAVE_HW_ATTEN_PPS3XXX
extern SR_PRIV struct sr_dev_driver atten_pps3203_driver_info;
#endif
#ifdef HAVE_HW_BAYLIBRE_ACME
extern SR_PRIV struct sr_dev_driver baylibre_acme_driver_info;
#endif
#ifdef HAVE_HW_BEAGLELOGIC
extern SR_PRIV struct sr_dev_driver beaglelogic_driver_info;
#endif
#ifdef HAVE_HW_BRYMEN_BM86X
extern SR_PRIV struct sr_dev_driver brymen_bm86x_driver_info;
#endif
#ifdef HAVE_HW_BRYMEN_DMM
extern SR_PRIV struct sr_dev_driver brymen_bm857_driver_info;
#endif
#ifdef HAVE_HW_CEM_DT_885X
extern SR_PRIV struct sr_dev_driver cem_dt_885x_driver_info;
#endif
#ifdef HAVE_HW_CENTER_3XX
extern SR_PRIV struct sr_dev_driver center_309_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_k204_driver_info;
#endif
#ifdef HAVE_HW_CHRONOVU_LA
extern SR_PRIV struct sr_dev_driver chronovu_la_driver_info;
#endif
#ifdef HAVE_HW_COLEAD_SLM
extern SR_PRIV struct sr_dev_driver colead_slm_driver_info;
#endif
#ifdef HAVE_HW_CONRAD_DIGI_35_CPU
extern SR_PRIV struct sr_dev_driver conrad_digi_35_cpu_driver_info;
#endif
#ifdef HAVE_HW_DEMO
extern SR_PRIV struct sr_dev_driver demo_driver_info;
#endif
#ifdef HAVE_HW_DEREE_DE5000
extern SR_PRIV struct sr_dev_driver deree_de5000_driver_info;
#endif
#ifdef HAVE_HW_FLUKE_DMM
extern SR_PRIV struct sr_dev_driver flukedmm_driver_info;
#endif
#ifdef HAVE_HW_FX2LAFW
extern SR_PRIV struct sr_dev_driver fx2lafw_driver_info;
#endif
#ifdef HAVE_HW_GMC_MH_1X_2X
extern SR_PRIV struct sr_dev_driver gmc_mh_1x_2x_rs232_driver_info;
extern SR_PRIV struct sr_dev_driver gmc_mh_2x_bd232_driver_info;
#endif
#ifdef HAVE_HW_HAMEG_HMO
extern SR_PRIV struct sr_dev_driver hameg_hmo_driver_info;
#endif
#ifdef HAVE_HW_HANTEK_DSO
extern SR_PRIV struct sr_dev_driver hantek_dso_driver_info;
#endif
#ifdef HAVE_HW_IKALOGIC_SCANALOGIC2
extern SR_PRIV struct sr_dev_driver ikalogic_scanalogic2_driver_info;
#endif
#ifdef HAVE_HW_IKALOGIC_SCANAPLUS
extern SR_PRIV struct sr_dev_driver ikalogic_scanaplus_driver_info;
#endif
#ifdef HAVE_HW_KECHENG_KC_330B
extern SR_PRIV struct sr_dev_driver kecheng_kc_330b_driver_info;
#endif
#ifdef HAVE_HW_LASCAR_EL_USB
extern SR_PRIV struct sr_dev_driver lascar_el_usb_driver_info;
#endif
#ifdef HAVE_HW_LINK_MSO19
extern SR_PRIV struct sr_dev_driver link_mso19_driver_info;
#endif
#ifdef HAVE_HW_MANSON_HCS_3XXX
extern SR_PRIV struct sr_dev_driver manson_hcs_3xxx_driver_info;
#endif
#ifdef HAVE_HW_MIC_985XX
extern SR_PRIV struct sr_dev_driver mic_98581_driver_info;
extern SR_PRIV struct sr_dev_driver mic_98583_driver_info;
#endif
#ifdef HAVE_HW_MOTECH_LPS_30X
extern SR_PRIV struct sr_dev_driver motech_lps_301_driver_info;
#endif
#ifdef HAVE_HW_NORMA_DMM
extern SR_PRIV struct sr_dev_driver norma_dmm_driver_info;
extern SR_PRIV struct sr_dev_driver siemens_b102x_driver_info;
#endif
#ifdef HAVE_HW_OPENBENCH_LOGIC_SNIFFER
extern SR_PRIV struct sr_dev_driver ols_driver_info;
#endif
#ifdef HAVE_HW_PIPISTRELLO_OLS
extern SR_PRIV struct sr_dev_driver p_ols_driver_info;
#endif
#ifdef HAVE_HW_RIGOL_DS
extern SR_PRIV struct sr_dev_driver rigol_ds_driver_info;
#endif
#ifdef HAVE_HW_SALEAE_LOGIC16
extern SR_PRIV struct sr_dev_driver saleae_logic16_driver_info;
#endif
#ifdef HAVE_HW_SCPI_PPS
extern SR_PRIV struct sr_dev_driver scpi_pps_driver_info;
#endif
#ifdef HAVE_HW_SERIAL_DMM
extern SR_PRIV struct sr_dev_driver bbcgm_m2110_driver_info;
extern SR_PRIV struct sr_dev_driver digitek_dt4000zc_driver_info;
extern SR_PRIV struct sr_dev_driver tekpower_tp4000zc_driver_info;
extern SR_PRIV struct sr_dev_driver metex_me31_driver_info;
extern SR_PRIV struct sr_dev_driver peaktech_3410_driver_info;
extern SR_PRIV struct sr_dev_driver mastech_mas345_driver_info;
extern SR_PRIV struct sr_dev_driver mastech_ms8250b_driver_info;
extern SR_PRIV struct sr_dev_driver va_va18b_driver_info;
extern SR_PRIV struct sr_dev_driver va_va40b_driver_info;
extern SR_PRIV struct sr_dev_driver metex_m3640d_driver_info;
extern SR_PRIV struct sr_dev_driver metex_m4650cr_driver_info;
extern SR_PRIV struct sr_dev_driver peaktech_4370_driver_info;
extern SR_PRIV struct sr_dev_driver pce_pce_dm32_driver_info;
extern SR_PRIV struct sr_dev_driver radioshack_22_168_driver_info;
extern SR_PRIV struct sr_dev_driver radioshack_22_805_driver_info;
extern SR_PRIV struct sr_dev_driver radioshack_22_812_driver_info;
extern SR_PRIV struct sr_dev_driver tecpel_dmm_8061_ser_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_m3650cr_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_m3650d_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_m4650cr_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_me42_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc820_ser_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc830_ser_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc840_ser_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc870_ser_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc920_ser_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc940_ser_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc960_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut60a_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut60e_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut60g_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut61b_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut61c_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut61d_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut61e_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71a_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71b_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71c_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71d_ser_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71e_ser_driver_info;
extern SR_PRIV struct sr_dev_driver iso_tech_idm103n_driver_info;
extern SR_PRIV struct sr_dev_driver tenma_72_7745_ser_driver_info;
extern SR_PRIV struct sr_dev_driver tenma_72_7750_ser_driver_info;
extern SR_PRIV struct sr_dev_driver brymen_bm25x_driver_info;
#endif
#ifdef HAVE_HW_SYSCLK_LWLA
extern SR_PRIV struct sr_dev_driver sysclk_lwla_driver_info;
#endif
#ifdef HAVE_HW_TELEINFO
extern SR_PRIV struct sr_dev_driver teleinfo_driver_info;
#endif
#ifdef HAVE_HW_TESTO
extern SR_PRIV struct sr_dev_driver testo_driver_info;
#endif
#ifdef HAVE_HW_TONDAJ_SL_814
extern SR_PRIV struct sr_dev_driver tondaj_sl_814_driver_info;
#endif
#ifdef HAVE_HW_UNI_T_DMM
extern SR_PRIV struct sr_dev_driver tecpel_dmm_8061_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut372_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut60a_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut60e_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut60g_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut61b_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut61c_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut61d_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut61e_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71a_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71b_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71c_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71d_driver_info;
extern SR_PRIV struct sr_dev_driver uni_t_ut71e_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc820_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc830_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc840_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc870_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc920_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc940_driver_info;
extern SR_PRIV struct sr_dev_driver voltcraft_vc960_driver_info;
extern SR_PRIV struct sr_dev_driver tenma_72_7745_driver_info;
extern SR_PRIV struct sr_dev_driver tenma_72_7750_driver_info;
#endif
#ifdef HAVE_HW_UNI_T_UT32X
extern SR_PRIV struct sr_dev_driver uni_t_ut32x_driver_info;
#endif
#ifdef HAVE_HW_VICTOR_DMM
extern SR_PRIV struct sr_dev_driver victor_dmm_driver_info;
#endif
#ifdef HAVE_HW_YOKOGAWA_DLM
extern SR_PRIV struct sr_dev_driver yokogawa_dlm_driver_info;
#endif
#ifdef HAVE_HW_ZEROPLUS_LOGIC_CUBE
extern SR_PRIV struct sr_dev_driver zeroplus_logic_cube_driver_info;
#endif

#define DRVS struct sr_dev_driver *[]

SR_PRIV struct sr_dev_driver **drivers_lists[] = {
#ifdef HAVE_HW_AGILENT_DMM
	(DRVS) {&agdmm_driver_info, NULL},
#endif
#ifdef HAVE_HW_APPA_55II
	(DRVS) {&appa_55ii_driver_info, NULL},
#endif
#ifdef HAVE_HW_ASIX_SIGMA
	(DRVS) {&asix_sigma_driver_info, NULL},
#endif
#ifdef HAVE_HW_ATTEN_PPS3XXX
	(DRVS) {&atten_pps3203_driver_info, NULL},
#endif
#ifdef HAVE_HW_BAYLIBRE_ACME
	(DRVS) {&baylibre_acme_driver_info, NULL},
#endif
#ifdef HAVE_HW_BEAGLELOGIC
	(DRVS) {&beaglelogic_driver_info, NULL},
#endif
#ifdef HAVE_HW_BRYMEN_BM86X
	(DRVS) {&brymen_bm86x_driver_info, NULL},
#endif
#ifdef HAVE_HW_BRYMEN_DMM
	(DRVS) {&brymen_bm857_driver_info, NULL},
#endif
#ifdef HAVE_HW_CEM_DT_885X
	(DRVS) {&cem_dt_885x_driver_info, NULL},
#endif
#ifdef HAVE_HW_CENTER_3XX
	(DRVS) {
		&center_309_driver_info,
		&voltcraft_k204_driver_info,
		NULL},
#endif
#ifdef HAVE_HW_CHRONOVU_LA
	(DRVS) {&chronovu_la_driver_info, NULL},
#endif
#ifdef HAVE_HW_COLEAD_SLM
	(DRVS) {&colead_slm_driver_info, NULL},
#endif
#ifdef HAVE_HW_CONRAD_DIGI_35_CPU
	(DRVS) {&conrad_digi_35_cpu_driver_info, NULL},
#endif
#ifdef HAVE_HW_DEMO
	(DRVS) {&demo_driver_info, NULL},
#endif
#ifdef HAVE_HW_DEREE_DE5000
	(DRVS) {&deree_de5000_driver_info, NULL},
#endif
#ifdef HAVE_HW_FLUKE_DMM
	(DRVS) {&flukedmm_driver_info, NULL},
#endif
#ifdef HAVE_HW_FX2LAFW
	(DRVS) {&fx2lafw_driver_info, NULL},
#endif
#ifdef HAVE_HW_GMC_MH_1X_2X
	(DRVS) {
		&gmc_mh_1x_2x_rs232_driver_info,
		&gmc_mh_2x_bd232_driver_info,
		NULL},
#endif
#ifdef HAVE_HW_HAMEG_HMO
	(DRVS) {&hameg_hmo_driver_info, NULL},
#endif
#ifdef HAVE_HW_HANTEK_DSO
	(DRVS) {&hantek_dso_driver_info, NULL},
#endif
#ifdef HAVE_HW_IKALOGIC_SCANALOGIC2
	(DRVS) {&ikalogic_scanalogic2_driver_info, NULL},
#endif
#ifdef HAVE_HW_IKALOGIC_SCANAPLUS
	(DRVS) {&ikalogic_scanaplus_driver_info, NULL},
#endif
#ifdef HAVE_HW_KECHENG_KC_330B
	(DRVS) {&kecheng_kc_330b_driver_info, NULL},
#endif
#ifdef HAVE_HW_LASCAR_EL_USB
	(DRVS) {&lascar_el_usb_driver_info, NULL},
#endif
#ifdef HAVE_HW_LINK_MSO19
	(DRVS) {&link_mso19_driver_info, NULL},
#endif
#ifdef HAVE_HW_MANSON_HCS_3XXX
	(DRVS) {&manson_hcs_3xxx_driver_info, NULL},
#endif
#ifdef HAVE_HW_MIC_985XX
	(DRVS) {
		&mic_98581_driver_info,
		&mic_98583_driver_info,
		NULL},
#endif
#ifdef HAVE_HW_MOTECH_LPS_30X
	(DRVS) {&motech_lps_301_driver_info, NULL},
#endif
#ifdef HAVE_HW_NORMA_DMM
	(DRVS) {
		&norma_dmm_driver_info,
		&siemens_b102x_driver_info,
		NULL},
#endif
#ifdef HAVE_HW_OPENBENCH_LOGIC_SNIFFER
	(DRVS) {&ols_driver_info, NULL},
#endif
#ifdef HAVE_HW_PIPISTRELLO_OLS
	(DRVS) {&p_ols_driver_info, NULL},
#endif
#ifdef HAVE_HW_RIGOL_DS
	(DRVS) {&rigol_ds_driver_info, NULL},
#endif
#ifdef HAVE_HW_SALEAE_LOGIC16
	(DRVS) {&saleae_logic16_driver_info, NULL},
#endif
#ifdef HAVE_HW_SCPI_PPS
	(DRVS) {&scpi_pps_driver_info, NULL},
#endif
#ifdef HAVE_HW_SERIAL_DMM
	(DRVS) {
		&bbcgm_m2110_driver_info,
		&digitek_dt4000zc_driver_info,
		&tekpower_tp4000zc_driver_info,
		&metex_me31_driver_info,
		&peaktech_3410_driver_info,
		&mastech_mas345_driver_info,
		&mastech_ms8250b_driver_info,
		&va_va18b_driver_info,
		&va_va40b_driver_info,
		&metex_m3640d_driver_info,
		&metex_m4650cr_driver_info,
		&peaktech_4370_driver_info,
		&pce_pce_dm32_driver_info,
		&radioshack_22_168_driver_info,
		&radioshack_22_805_driver_info,
		&radioshack_22_812_driver_info,
		&tecpel_dmm_8061_ser_driver_info,
		&voltcraft_m3650cr_driver_info,
		&voltcraft_m3650d_driver_info,
		&voltcraft_m4650cr_driver_info,
		&voltcraft_me42_driver_info,
		&voltcraft_vc820_ser_driver_info,
		&voltcraft_vc830_ser_driver_info,
		&voltcraft_vc840_ser_driver_info,
		&voltcraft_vc870_ser_driver_info,
		&voltcraft_vc920_ser_driver_info,
		&voltcraft_vc940_ser_driver_info,
		&voltcraft_vc960_ser_driver_info,
		&uni_t_ut60a_ser_driver_info,
		&uni_t_ut60e_ser_driver_info,
		&uni_t_ut60g_ser_driver_info,
		&uni_t_ut61b_ser_driver_info,
		&uni_t_ut61c_ser_driver_info,
		&uni_t_ut61d_ser_driver_info,
		&uni_t_ut61e_ser_driver_info,
		&uni_t_ut71a_ser_driver_info,
		&uni_t_ut71b_ser_driver_info,
		&uni_t_ut71c_ser_driver_info,
		&uni_t_ut71d_ser_driver_info,
		&uni_t_ut71e_ser_driver_info,
		&iso_tech_idm103n_driver_info,
		&tenma_72_7745_ser_driver_info,
		&tenma_72_7750_ser_driver_info,
		&brymen_bm25x_driver_info,
		NULL},
#endif
#ifdef HAVE_HW_SYSCLK_LWLA
	(DRVS) {&sysclk_lwla_driver_info, NULL},
#endif
#ifdef HAVE_HW_TELEINFO
	(DRVS) {&teleinfo_driver_info, NULL},
#endif
#ifdef HAVE_HW_TESTO
	(DRVS) {&testo_driver_info, NULL},
#endif
#ifdef HAVE_HW_TONDAJ_SL_814
	(DRVS) {&tondaj_sl_814_driver_info, NULL},
#endif
#ifdef HAVE_HW_UNI_T_DMM
	(DRVS) {
		&tecpel_dmm_8061_driver_info,
		&uni_t_ut372_driver_info,
		&uni_t_ut60a_driver_info,
		&uni_t_ut60e_driver_info,
		&uni_t_ut60g_driver_info,
		&uni_t_ut61b_driver_info,
		&uni_t_ut61c_driver_info,
		&uni_t_ut61d_driver_info,
		&uni_t_ut61e_driver_info,
		&uni_t_ut71a_driver_info,
		&uni_t_ut71b_driver_info,
		&uni_t_ut71c_driver_info,
		&uni_t_ut71d_driver_info,
		&uni_t_ut71e_driver_info,
		&voltcraft_vc820_driver_info,
		&voltcraft_vc830_driver_info,
		&voltcraft_vc840_driver_info,
		&voltcraft_vc870_driver_info,
		&voltcraft_vc920_driver_info,
		&voltcraft_vc940_driver_info,
		&voltcraft_vc960_driver_info,
		&tenma_72_7745_driver_info,
		&tenma_72_7750_driver_info,
		NULL},
#endif
#ifdef HAVE_HW_UNI_T_UT32X
	(DRVS) {&uni_t_ut32x_driver_info, NULL},
#endif
#ifdef HAVE_HW_VICTOR_DMM
	(DRVS) {&victor_dmm_driver_info, NULL},
#endif
#ifdef HAVE_HW_YOKOGAWA_DLM
	(DRVS) {&yokogawa_dlm_driver_info, NULL},
#endif
#ifdef HAVE_HW_ZEROPLUS_LOGIC_CUBE
	(DRVS) {&zeroplus_logic_cube_driver_info, NULL},
#endif
	NULL,
};
/** @endcond */

