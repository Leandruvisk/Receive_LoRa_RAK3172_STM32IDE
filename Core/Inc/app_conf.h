#ifndef APP_CONF_H
#define APP_CONF_H

/* ========== LORAWAN BASIC CONFIG ========== */

/* Região */
#define LORAMAC_ACTIVE_REGION    LORAMAC_REGION_AU915
// alternativas:
// LORAMAC_REGION_US915
// LORAMAC_REGION_EU868

/* Ativação */
#define LORAWAN_ACTIVATION_TYPE  LORAMAC_HANDLER_OTAA
// LORAMAC_HANDLER_ABP

/* Classe */
#define LORAWAN_DEVICE_CLASS     CLASS_A

/* ADR */
#define LORAWAN_ADR_STATE        LORAMAC_HANDLER_ADR_ON

/* Porta padrão */
#define LORAWAN_APP_PORT         2

/* Debug */
#define APP_DEBUG                1

#endif /* APP_CONF_H */
