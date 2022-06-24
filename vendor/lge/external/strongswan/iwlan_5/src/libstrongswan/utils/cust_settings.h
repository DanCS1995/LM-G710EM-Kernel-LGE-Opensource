#ifndef __WO_CFG_H__
#define __WO_CFG_H__

#include <stdbool.h>

typedef enum ike_idi_format_t {
	IKE_IDI_RFC822_ADDR = 0,
	IKE_IDI_RFC822_ADDR_MAC,
	IKE_IDI_RFC822_ADDR_MAC_EAP_NO_MAC,
} ike_idi_format_t;

typedef union cust_value_t {
	int  integer;
	char *str;
	bool boolean;
} cust_value_t;

typedef struct cust_setting_t {
	char* system_property_key;
	cust_value_t default_value;
} cust_setting_t;

typedef enum cust_setting_type_t {
	CUST_PCSCF_IP4_VALUE,
	CUST_PCSCF_IP6_VALUE,
	FORCE_TSI_64,
	FORCE_TSI_FULL,
	FORCE_TSR_FULL,
	REKEY_FULL,
	USE_CFG_VIP,
	CUST_IMEI_CP,
	IS_CERTIFICATE_USED,
	IKE_PORT,
	IKE_PORT_NATT,
	IKE_RETRAN_TO,
	IKE_RETRAN_TRIES,
	IKE_RETRAN_BASE,
	IKE_IDI_FORMAT,
	IKE_HASHANDURL,
	IKE_KEEP_ALIVE_TIMER,
	WIFI_DRIVER_KEEP_ALIVE,
	WIFI_DRIVER_KEEP_ALIVE_TIMER,
	ADDR_CHANGE_N_REAUTH,
	STATUS_CODE,
	LGP_DATA_DEBUG_ENABLE_PRIVACY_LOG,
	/* 2017-02-16 protocol-iwlan@lge.com LGP_DATA_IWLAN_REAUTH_DELETE_ONLY [START] */
	REAUTH_DELETE_ONLY,
	/* 2017-02-16 protocol-iwlan@lge.com LGP_DATA_IWLAN_REAUTH_DELETE_ONLY [END] */
	SETTING_END
} cust_setting_type_t;

static cust_setting_t cust_settings[SETTING_END] = {
	[CUST_PCSCF_IP4_VALUE]    = {"net.wo.cust_pcscf_4",  {.integer = 20}},
	[CUST_PCSCF_IP6_VALUE]    = {"net.wo.cust_pcscf_6",  {.integer = 21}},
	[FORCE_TSI_64]            = {"net.wo.force_tsi_64",  {.boolean = true}},
	[FORCE_TSI_FULL]          = {"net.wo.force_tsi_full", {.boolean = true}},
	[FORCE_TSR_FULL]          = {"net.wo.force_tsr_full", {.boolean = false}},
	[REKEY_FULL]              = {"net.wo.rekey_full",    {.boolean = false}},
	[USE_CFG_VIP]             = {"net.wo.use_cfg_vip",   {.boolean = false}},
	[CUST_IMEI_CP]            = {"net.wo.cust_imei_cp",  {.integer = 16391}},
	[IS_CERTIFICATE_USED]     = {"net.wo.cert_used",     {.boolean = true}},
	[IKE_PORT]                = {"net.wo.port",          {.integer = -1}},
	[IKE_PORT_NATT]           = {"net.wo.port_natt",     {.integer = -1}},
	[IKE_RETRAN_TO]           = {"net.wo.retrans_to",    {.str = NULL}},
	[IKE_RETRAN_TRIES]        = {"net.wo.retrans_tries", {.str = NULL}},
	[IKE_RETRAN_BASE]         = {"net.wo.retrans_base",  {.str = NULL}},
	[IKE_IDI_FORMAT]          = {"net.wo.IDi",           {.integer = 0}},
	[IKE_HASHANDURL]          = {"net.wo.urlcert",       {.boolean = false}},
	[IKE_KEEP_ALIVE_TIMER]    = {"net.wo.keep_timer",    {.integer = -1}},
	[WIFI_DRIVER_KEEP_ALIVE]  = {"net.wo.wdrv_keep_alive", {.boolean = false}},
	[WIFI_DRIVER_KEEP_ALIVE_TIMER] = {"net.wo.wdrv_keep_timer", {.integer = -1}},
	[ADDR_CHANGE_N_REAUTH]    = {"net.wo.reauth_addr",   {.boolean = false}},
	[STATUS_CODE]             = {"net.wo.statuscode",    {.integer = 0}},
	[LGP_DATA_DEBUG_ENABLE_PRIVACY_LOG]   = {"persist.service.privacy.enable",   {.boolean = 1}},
	/* 2017-02-16 protocol-iwlan@lge.com LGP_DATA_IWLAN_REAUTH_DELETE_ONLY [START] */
	[REAUTH_DELETE_ONLY]      = {"net.wo.reauth.deleteonly",         {.boolean = false}},
	/* 2017-02-16 protocol-iwlan@lge.com LGP_DATA_IWLAN_REAUTH_DELETE_ONLY [END] */
};

int get_cust_setting(cust_setting_type_t type, char *value);
bool get_cust_setting_bool(cust_setting_type_t type);
int get_cust_setting_int(cust_setting_type_t type);
int set_cust_setting(cust_setting_type_t type, char *value);
int set_cust_setting_bool(cust_setting_type_t type, bool value);
int set_cust_setting_int(cust_setting_type_t type, int value);

#endif
