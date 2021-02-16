/*
*==========================================================================
*===========================================================================
*/

/*__________________________3________________________________*/
        /** =============================
        * =====Type of TFT screen ======
        * = Driver TFT Color (1 CHOICE)=
        * ==============================
        */


                /*--- Choice UI TFT ----*/
//#define TFT_COLOR_UI               //(C) UI MARLIN (Default)
//#define TFT_CLASSIC_UI             //(F) UI STANDARD (type LCD)

/* ======================================//
* === Note:Languages already integrated==// 
* ==in the menu UI_COLOR(fr, de, es, it)=//
* =======================================//
*/
#define LCD_LANGUAGE en            // Change for your country ('bg':'Bulgarian', 'ca':'Catalan', 'cz':'Czech', 'da':'Danish', 'el':'Greek', 'fi':'Finnish', 'hr':'Croatian', 'hu':'Hungarian', 'jp_kana':'Japanese', 'nl':'Dutch', 'pl':'Polish', 'pt_br':'Portuguese (Brazilian)', 'ro':'Romanian', 'ru':'Russian', 'sk':'Slovak', 'sv':'Swedish', 'tr':'Turkish', 'uk':'Ukrainian', 'vi':'Vietnamese', 'zh_CN':'Chinese (Simplified)', etc)

//#define PREHEAT_BEFORE_LEVELING    //(P) Run a PreHeat bed at 50°C (Default)
//#define AUTO_BED_LEVELING_UBL      //(U) (Default)
//#define AUTO_BED_LEVELING_BILINEAR //(A)

/*__________________________6__________________________*/
    //======Many options for Modules: ===========//
//#define LIN_ADVANCE       
#define ARC_SUPPORT         
//#define POWER_LOSS_RECOVERY 

//=================================================================================//
//======================== End_Hardware ===========================================//
//=================================================================================//

/*__________________________7__________________________*/
/** =====================================================
 *  ==== For users who dont have a terminal ============= 
 * = like (Prontoface/Octoprint/HostRepertier/Astoprint)=
 * ====== Choice add menu on TFT: (OPT) =================
 */
//#define PID_EDIT_MENU              // tune PID Bed and Nozzle (Default).
//#define PID_AUTOTUNE_MENU          // tune auto PID (Default).
//#define LCD_INFO_MENU              // Informations printer (Default).


/*__________________________8__________________________*/
/** ===================================================
* == Option for Host (OCTOPRINT,REPETIER,PRONTERFACE,ESP3D, etc)
* ======================================================
*/
//#define HOST_ACTION_COMMANDS       // Action Command Prompt support Message on Octoprint
//#define MEATPACK                   // Support for MeatPack G-code compression (OCTOPRINT)
//#define BINARY_FILE_TRANSFER       // Bin transfert for host like ESP3D or others.
//#define CANCEL_OBJECTS             // Add menu "Cancel Objet"


/**
 * =================================================
 * ===Part for Hardware definitions=================
 * ===Don't change if you're not sure how to do it.= 
 * =================================================
 */
#define MOTHERBOARD BOARD_RAMPS_14_EFB




