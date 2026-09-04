/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID ENC_PLAY_ELEVATOR_DOOR = 2720011068U;
        static const AkUniqueID ENV_PLAY_ELEVATOR_STOP = 2077017211U;
        static const AkUniqueID ENV_PLAY_SPARK = 1116795697U;
        static const AkUniqueID ENV_PLAY_STEAM = 2371890402U;
        static const AkUniqueID MUS_PLAY_MUSIC = 2480461419U;
        static const AkUniqueID PLR_PLAY_FS = 3082617436U;
        static const AkUniqueID STG_TRIGGER_ENTERGAME_LOADING = 1074417302U;
        static const AkUniqueID TST_PLAY_880HZ_3D_BEEP = 1099549313U;
        static const AkUniqueID TST_PLAY_880HZ_LP = 4230237515U;
        static const AkUniqueID TST_PLAY_880HZ_LP_STOP = 3379435718U;
        static const AkUniqueID TST_PLAY_SUPERSONIC = 2036962697U;
        static const AkUniqueID UI_PLAY_BUTTON_SELECT = 2605417374U;
        static const AkUniqueID UI_PLAY_GLITCHES_MAINMENU = 2396159913U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace GAMESTATE
        {
            static const AkUniqueID GROUP = 4091656514U;

            namespace STATE
            {
                static const AkUniqueID GAME = 702482391U;
                static const AkUniqueID LOADING = 3573931707U;
                static const AkUniqueID MAINMENU = 3604647259U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID PAUSE = 3092587493U;
            } // namespace STATE
        } // namespace GAMESTATE

        namespace INGAME
        {
            static const AkUniqueID GROUP = 984691642U;

            namespace STATE
            {
                static const AkUniqueID CORRIDOR1 = 1938385784U;
                static const AkUniqueID CORRIDOR2 = 1938385787U;
                static const AkUniqueID ELEVATOR = 3705378287U;
                static const AkUniqueID ENGINE = 268529915U;
                static const AkUniqueID MAINDECK = 2786758029U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID ROOM1 = 1359360137U;
            } // namespace STATE
        } // namespace INGAME

        namespace MAINDECK
        {
            static const AkUniqueID GROUP = 2786758029U;

            namespace STATE
            {
                static const AkUniqueID CONTROLPANELS = 1095383085U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID SMALLROOM = 2933838247U;
            } // namespace STATE
        } // namespace MAINDECK

    } // namespace STATES

    namespace TRIGGERS
    {
        static const AkUniqueID ENTER_GAME = 4117021394U;
    } // namespace TRIGGERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID SFX = 393239870U;
        static const AkUniqueID TESTEVENTS = 155015370U;
        static const AkUniqueID UI = 1551306167U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID _UTILITY = 429132440U;
        static const AkUniqueID AMBIENCE = 85412153U;
        static const AkUniqueID AUXS = 3368497452U;
        static const AkUniqueID BURNED = 4021644157U;
        static const AkUniqueID ENVIRONMENT = 1229948536U;
        static const AkUniqueID HOLO = 3164629225U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID PLAYER = 1069431850U;
        static const AkUniqueID ROOMS = 1359360203U;
        static const AkUniqueID SFX = 393239870U;
        static const AkUniqueID UI = 1551306167U;
        static const AkUniqueID VOICE = 3170124113U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID CORRIDOR_1 = 4149449619U;
        static const AkUniqueID EARLYREFLECTIONS = 849258820U;
        static const AkUniqueID ELEVATOR = 3705378287U;
        static const AkUniqueID ENGINE = 268529915U;
        static const AkUniqueID MAINDECK = 2786758029U;
        static const AkUniqueID MUSICREVERB = 1575916026U;
        static const AkUniqueID TERMINAL = 414380065U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
