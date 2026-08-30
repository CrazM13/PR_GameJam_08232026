// GENERATED FILE, DO NOT MODIFY (PInvokeTableGenerator.cs)
#include <mono/utils/details/mono-error-types.h>
#include <mono/metadata/assembly.h>
#include <mono/utils/mono-error.h>
#include <mono/metadata/object.h>
#include <mono/utils/details/mono-logger-types.h>
#include "runtime.h"
#include "pinvoke.h"

void GlobalizationNative_ChangeCase (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_ChangeCaseInvariant (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_ChangeCaseTurkish (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_CloseSortHandle (void *);

int32_t GlobalizationNative_CompareString (void *, void *, int32_t, void *, int32_t, int32_t);

int32_t GlobalizationNative_EndsWith (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_EnumCalendarInfo (void *, void *, uint32_t, int32_t, void *);

int32_t GlobalizationNative_GetCalendarInfo (void *, uint32_t, int32_t, void *, int32_t);

int32_t GlobalizationNative_GetCalendars (void *, void *, int32_t);

int32_t GlobalizationNative_GetDefaultLocaleName (void *, int32_t);

int32_t GlobalizationNative_GetJapaneseEraStartDate (int32_t, void *, void *, void *);

int32_t GlobalizationNative_GetLatestJapaneseEra ();

int32_t GlobalizationNative_GetLocaleInfoGroupingSizes (void *, uint32_t, void *, void *);

int32_t GlobalizationNative_GetLocaleInfoInt (void *, uint32_t, void *);

int32_t GlobalizationNative_GetLocaleInfoString (void *, uint32_t, void *, int32_t, void *);

int32_t GlobalizationNative_GetLocaleName (void *, void *, int32_t);

int32_t GlobalizationNative_GetLocaleTimeFormat (void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_GetSortHandle (void *, void *);

int32_t GlobalizationNative_GetSortKey (void *, void *, int32_t, void *, int32_t, int32_t);

int32_t GlobalizationNative_IndexOf (void *, void *, int32_t, void *, int32_t, int32_t, void *);

void GlobalizationNative_InitICUFunctions (void *, void *, void *, void *);

void GlobalizationNative_InitOrdinalCasingPage (int32_t, void *);

int32_t GlobalizationNative_IsPredefinedLocale (void *);

int32_t GlobalizationNative_LastIndexOf (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_LoadICU ();

int32_t GlobalizationNative_StartsWith (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t SystemNative_CanGetHiddenFlag ();

int32_t SystemNative_Close (void *);

int32_t SystemNative_CloseDir (void *);

int32_t SystemNative_ConvertErrorPalToPlatform (int32_t);

int32_t SystemNative_ConvertErrorPlatformToPal (int32_t);

void * SystemNative_Dup (void *);

int32_t SystemNative_FAllocate (void *, int64_t, int64_t);

int32_t SystemNative_FLock (void *, int32_t);

int32_t SystemNative_FStat (void *, void *);

int32_t SystemNative_FTruncate (void *, int64_t);

void SystemNative_Free (void *);

void SystemNative_FreeEnviron (void *);

int32_t SystemNative_GetCryptographicallySecureRandomBytes (void *, int32_t);

void * SystemNative_GetCwd (void *, int32_t);

void * SystemNative_GetEnv (void *);

void * SystemNative_GetEnviron ();

int32_t SystemNative_GetErrNo ();

uint32_t SystemNative_GetFileSystemType (void *);

int64_t SystemNative_GetLowResolutionTimestamp ();

void SystemNative_GetNonCryptographicallySecureRandomBytes (void *, int32_t);

int64_t SystemNative_GetSystemTimeAsTicks ();

void * SystemNative_GetTimeZoneData (void *, void *);

int64_t SystemNative_GetTimestamp ();

int32_t SystemNative_LChflagsCanSetHiddenFlag ();

int64_t SystemNative_LSeek (void *, int64_t, int32_t);

int32_t SystemNative_LStat (void *, void *);

void SystemNative_LowLevelMonitor_Acquire (void *);

void * SystemNative_LowLevelMonitor_Create ();

void SystemNative_LowLevelMonitor_Destroy (void *);

void SystemNative_LowLevelMonitor_Release (void *);

void SystemNative_LowLevelMonitor_Signal_Release (void *);

int32_t SystemNative_LowLevelMonitor_TimedWait (void *, int32_t);

void SystemNative_LowLevelMonitor_Wait (void *);

void * SystemNative_Malloc (void *);

int32_t SystemNative_MkDir (void *, int32_t);

void * SystemNative_Open (void *, int32_t, int32_t);

void * SystemNative_OpenDir (void *);

int32_t SystemNative_PRead (void *, void *, int32_t, int64_t);

int32_t SystemNative_PWrite (void *, void *, int32_t, int64_t);

int32_t SystemNative_PosixFAdvise (void *, int64_t, int64_t, int32_t);

int32_t SystemNative_Read (void *, void *, int32_t);

int32_t SystemNative_ReadDir (void *, void *);

int32_t SystemNative_ReadLink (void *, void *, int32_t);

int32_t SystemNative_SchedGetCpu ();

void SystemNative_SetErrNo (int32_t);

int32_t SystemNative_Stat (void *, void *);

void * SystemNative_StrErrorR (int32_t, void *, int32_t);

void SystemNative_SysLog (int32_t, void *, void *);

uint32_t SystemNative_TryGetUInt32OSThreadId ();

int32_t SystemNative_Unlink (void *);

int32_t SystemNative_Write (void *, void *, int32_t);

void emscripten_cancel_main_loop ();

void emscripten_force_exit (int32_t);

void emscripten_set_main_loop (void *, int32_t, uint32_t);

void godot_js_os_finish_async (void *);

void * libgodot_create_godot_instance (int32_t, void *, void *);

void libgodot_destroy_godot_instance (void *);

uint32_t libgodot_web_iteration ();

void set_load_from_executable_fn (void *);

static PinvokeImport _2A__imports [] = {
    {"emscripten_cancel_main_loop", emscripten_cancel_main_loop}, // twodog
    {"emscripten_force_exit", emscripten_force_exit}, // twodog
    {"emscripten_set_main_loop", emscripten_set_main_loop}, // twodog
    {"godot_js_os_finish_async", godot_js_os_finish_async}, // twodog
    {NULL, NULL}
};

static PinvokeImport libSystem_Globalization_Native_imports [] = {
    {"GlobalizationNative_ChangeCase", GlobalizationNative_ChangeCase}, // System.Private.CoreLib
    {"GlobalizationNative_ChangeCaseInvariant", GlobalizationNative_ChangeCaseInvariant}, // System.Private.CoreLib
    {"GlobalizationNative_ChangeCaseTurkish", GlobalizationNative_ChangeCaseTurkish}, // System.Private.CoreLib
    {"GlobalizationNative_CloseSortHandle", GlobalizationNative_CloseSortHandle}, // System.Private.CoreLib
    {"GlobalizationNative_CompareString", GlobalizationNative_CompareString}, // System.Private.CoreLib
    {"GlobalizationNative_EndsWith", GlobalizationNative_EndsWith}, // System.Private.CoreLib
    {"GlobalizationNative_EnumCalendarInfo", GlobalizationNative_EnumCalendarInfo}, // System.Private.CoreLib
    {"GlobalizationNative_GetCalendarInfo", GlobalizationNative_GetCalendarInfo}, // System.Private.CoreLib
    {"GlobalizationNative_GetCalendars", GlobalizationNative_GetCalendars}, // System.Private.CoreLib
    {"GlobalizationNative_GetDefaultLocaleName", GlobalizationNative_GetDefaultLocaleName}, // System.Private.CoreLib
    {"GlobalizationNative_GetJapaneseEraStartDate", GlobalizationNative_GetJapaneseEraStartDate}, // System.Private.CoreLib
    {"GlobalizationNative_GetLatestJapaneseEra", GlobalizationNative_GetLatestJapaneseEra}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoGroupingSizes", GlobalizationNative_GetLocaleInfoGroupingSizes}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoInt", GlobalizationNative_GetLocaleInfoInt}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoString", GlobalizationNative_GetLocaleInfoString}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleName", GlobalizationNative_GetLocaleName}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleTimeFormat", GlobalizationNative_GetLocaleTimeFormat}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortHandle", GlobalizationNative_GetSortHandle}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortKey", GlobalizationNative_GetSortKey}, // System.Private.CoreLib
    {"GlobalizationNative_IndexOf", GlobalizationNative_IndexOf}, // System.Private.CoreLib
    {"GlobalizationNative_InitICUFunctions", GlobalizationNative_InitICUFunctions}, // System.Private.CoreLib
    {"GlobalizationNative_InitOrdinalCasingPage", GlobalizationNative_InitOrdinalCasingPage}, // System.Private.CoreLib
    {"GlobalizationNative_IsPredefinedLocale", GlobalizationNative_IsPredefinedLocale}, // System.Private.CoreLib
    {"GlobalizationNative_LastIndexOf", GlobalizationNative_LastIndexOf}, // System.Private.CoreLib
    {"GlobalizationNative_LoadICU", GlobalizationNative_LoadICU}, // System.Private.CoreLib
    {"GlobalizationNative_StartsWith", GlobalizationNative_StartsWith}, // System.Private.CoreLib
    {NULL, NULL}
};

static PinvokeImport libSystem_IO_Compression_Native_imports [] = {
    {NULL, NULL}
};

static PinvokeImport libSystem_Native_imports [] = {
    {"SystemNative_CanGetHiddenFlag", SystemNative_CanGetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_Close", SystemNative_Close}, // System.Private.CoreLib
    {"SystemNative_CloseDir", SystemNative_CloseDir}, // System.Private.CoreLib
    {"SystemNative_ConvertErrorPalToPlatform", SystemNative_ConvertErrorPalToPlatform}, // System.Console, System.Private.CoreLib
    {"SystemNative_ConvertErrorPlatformToPal", SystemNative_ConvertErrorPlatformToPal}, // System.Console, System.Private.CoreLib
    {"SystemNative_Dup", SystemNative_Dup}, // System.Console
    {"SystemNative_FAllocate", SystemNative_FAllocate}, // System.Private.CoreLib
    {"SystemNative_FLock", SystemNative_FLock}, // System.Private.CoreLib
    {"SystemNative_FStat", SystemNative_FStat}, // System.Private.CoreLib
    {"SystemNative_FTruncate", SystemNative_FTruncate}, // System.Private.CoreLib
    {"SystemNative_Free", SystemNative_Free}, // System.Private.CoreLib
    {"SystemNative_FreeEnviron", SystemNative_FreeEnviron}, // System.Private.CoreLib
    {"SystemNative_GetCryptographicallySecureRandomBytes", SystemNative_GetCryptographicallySecureRandomBytes}, // System.Private.CoreLib
    {"SystemNative_GetCwd", SystemNative_GetCwd}, // System.Private.CoreLib
    {"SystemNative_GetEnv", SystemNative_GetEnv}, // System.Private.CoreLib
    {"SystemNative_GetEnviron", SystemNative_GetEnviron}, // System.Private.CoreLib
    {"SystemNative_GetErrNo", SystemNative_GetErrNo}, // System.Private.CoreLib
    {"SystemNative_GetFileSystemType", SystemNative_GetFileSystemType}, // System.Private.CoreLib
    {"SystemNative_GetLowResolutionTimestamp", SystemNative_GetLowResolutionTimestamp}, // System.Private.CoreLib
    {"SystemNative_GetNonCryptographicallySecureRandomBytes", SystemNative_GetNonCryptographicallySecureRandomBytes}, // System.Private.CoreLib
    {"SystemNative_GetSystemTimeAsTicks", SystemNative_GetSystemTimeAsTicks}, // System.Private.CoreLib
    {"SystemNative_GetTimeZoneData", SystemNative_GetTimeZoneData}, // System.Private.CoreLib
    {"SystemNative_GetTimestamp", SystemNative_GetTimestamp}, // System.Private.CoreLib
    {"SystemNative_LChflagsCanSetHiddenFlag", SystemNative_LChflagsCanSetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_LSeek", SystemNative_LSeek}, // System.Private.CoreLib
    {"SystemNative_LStat", SystemNative_LStat}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Acquire", SystemNative_LowLevelMonitor_Acquire}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Create", SystemNative_LowLevelMonitor_Create}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Destroy", SystemNative_LowLevelMonitor_Destroy}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Release", SystemNative_LowLevelMonitor_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Signal_Release", SystemNative_LowLevelMonitor_Signal_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_TimedWait", SystemNative_LowLevelMonitor_TimedWait}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Wait", SystemNative_LowLevelMonitor_Wait}, // System.Private.CoreLib
    {"SystemNative_Malloc", SystemNative_Malloc}, // System.Private.CoreLib
    {"SystemNative_MkDir", SystemNative_MkDir}, // System.Private.CoreLib
    {"SystemNative_Open", SystemNative_Open}, // System.Private.CoreLib
    {"SystemNative_OpenDir", SystemNative_OpenDir}, // System.Private.CoreLib
    {"SystemNative_PRead", SystemNative_PRead}, // System.Private.CoreLib
    {"SystemNative_PWrite", SystemNative_PWrite}, // System.Private.CoreLib
    {"SystemNative_PosixFAdvise", SystemNative_PosixFAdvise}, // System.Private.CoreLib
    {"SystemNative_Read", SystemNative_Read}, // System.Private.CoreLib
    {"SystemNative_ReadDir", SystemNative_ReadDir}, // System.Private.CoreLib
    {"SystemNative_ReadLink", SystemNative_ReadLink}, // System.Private.CoreLib
    {"SystemNative_SchedGetCpu", SystemNative_SchedGetCpu}, // System.Private.CoreLib
    {"SystemNative_SetErrNo", SystemNative_SetErrNo}, // System.Private.CoreLib
    {"SystemNative_Stat", SystemNative_Stat}, // System.Private.CoreLib
    {"SystemNative_StrErrorR", SystemNative_StrErrorR}, // System.Console, System.Private.CoreLib
    {"SystemNative_SysLog", SystemNative_SysLog}, // System.Private.CoreLib
    {"SystemNative_TryGetUInt32OSThreadId", SystemNative_TryGetUInt32OSThreadId}, // System.Private.CoreLib
    {"SystemNative_Unlink", SystemNative_Unlink}, // System.Private.CoreLib
    {"SystemNative_Write", SystemNative_Write}, // System.Console, System.Private.CoreLib
    {NULL, NULL}
};

static PinvokeImport libgodot_imports [] = {
    {"libgodot_create_godot_instance", libgodot_create_godot_instance}, // twodog
    {"libgodot_destroy_godot_instance", libgodot_destroy_godot_instance}, // twodog
    {"libgodot_web_iteration", libgodot_web_iteration}, // twodog
    {"set_load_from_executable_fn", set_load_from_executable_fn}, // twodog
    {NULL, NULL}
};

static PinvokeTable pinvoke_tables[] = {
    {"*", _2A__imports, 4},
    {"libSystem.Globalization.Native", libSystem_Globalization_Native_imports, 26},
    {"libSystem.IO.Compression.Native", libSystem_IO_Compression_Native_imports, 0},
    {"libSystem.Native", libSystem_Native_imports, 51},
    {"libgodot", libgodot_imports, 4}
};

InterpFtnDesc wasm_native_to_interp_ftndescs[50] = {};

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_AddScriptBridge (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T0) (int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T0)wasm_native_to_interp_ftndescs [0].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "AddScriptBridge", 100709693, 2);
    }

    ((InterpEntry_T0)wasm_native_to_interp_ftndescs [0].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [0].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Threading_ThreadPool_BackgroundJobHandler () {
    typedef void (*InterpEntry_T1) (int*);

    if (!(InterpEntry_T1)wasm_native_to_interp_ftndescs [1].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Threading", "ThreadPool", "BackgroundJobHandler", 100669444, 0);
    }

    ((InterpEntry_T1)wasm_native_to_interp_ftndescs [1].func) ((int*)wasm_native_to_interp_ftndescs [1].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_Call (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T2) (int*, int*, int*, int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T2)wasm_native_to_interp_ftndescs [2].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "CSharpInstanceBridge", "Call", 100709651, 6);
    }

    ((InterpEntry_T2)wasm_native_to_interp_ftndescs [2].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [2].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_CallDispose (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T3) (int*, int*, int*);

    if (!(InterpEntry_T3)wasm_native_to_interp_ftndescs [3].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "CSharpInstanceBridge", "CallDispose", 100709654, 2);
    }

    ((InterpEntry_T3)wasm_native_to_interp_ftndescs [3].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [3].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_CallStatic (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T4) (int*, int*, int*, int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T4)wasm_native_to_interp_ftndescs [4].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "CallStatic", 100709707, 6);
    }

    ((InterpEntry_T4)wasm_native_to_interp_ftndescs [4].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [4].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_CallToString (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T5) (int*, int*, int*, int*);

    if (!(InterpEntry_T5)wasm_native_to_interp_ftndescs [5].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "CSharpInstanceBridge", "CallToString", 100709655, 3);
    }

    ((InterpEntry_T5)wasm_native_to_interp_ftndescs [5].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [5].arg);
}

void
wasm_native_to_interp_twodog_twodog_WebHost_CleanupAfterSync () {
    typedef void (*InterpEntry_T6) (int*);

    if (!(InterpEntry_T6)wasm_native_to_interp_ftndescs [6].func) {
        mono_wasm_marshal_get_managed_wrapper ("twodog", "twodog", "WebHost", "CleanupAfterSync", 100663382, 0);
    }

    ((InterpEntry_T6)wasm_native_to_interp_ftndescs [6].func) ((int*)wasm_native_to_interp_ftndescs [6].arg);
}

void *
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_CreateManagedForGodotObjectBinding (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T7) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T7)wasm_native_to_interp_ftndescs [7].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "CreateManagedForGodotObjectBinding", 100709685, 2);
    }

    ((InterpEntry_T7)wasm_native_to_interp_ftndescs [7].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [7].arg);
    return result;
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_CreateManagedForGodotObjectScriptInstance (void * arg0, void * arg1, void * arg2, int32_t arg3) {
    typedef void (*InterpEntry_T8) (int*, int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T8)wasm_native_to_interp_ftndescs [8].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "CreateManagedForGodotObjectScriptInstance", 100709686, 4);
    }

    ((InterpEntry_T8)wasm_native_to_interp_ftndescs [8].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [8].arg);
    return result;
}

void
wasm_native_to_interp_twodog_twodog_LibGodot_DeinitializeCallback (void * arg0, int32_t arg1) {
    typedef void (*InterpEntry_T9) (int*, int*, int*);

    if (!(InterpEntry_T9)wasm_native_to_interp_ftndescs [9].func) {
        mono_wasm_marshal_get_managed_wrapper ("twodog", "twodog", "LibGodot", "DeinitializeCallback", 100663340, 2);
    }

    ((InterpEntry_T9)wasm_native_to_interp_ftndescs [9].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [9].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_DelegateEquals (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T10) (int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T10)wasm_native_to_interp_ftndescs [10].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "DelegateUtils", "DelegateEquals", 100663731, 2);
    }

    ((InterpEntry_T10)wasm_native_to_interp_ftndescs [10].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [10].arg);
    return result;
}

int32_t
wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_DelegateHash (void * arg0) {
    typedef void (*InterpEntry_T11) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T11)wasm_native_to_interp_ftndescs [11].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "DelegateUtils", "DelegateHash", 100663732, 1);
    }

    ((InterpEntry_T11)wasm_native_to_interp_ftndescs [11].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [11].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_DeserializeState (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T12) (int*, int*, int*, int*);

    if (!(InterpEntry_T12)wasm_native_to_interp_ftndescs [12].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "CSharpInstanceBridge", "DeserializeState", 100709658, 3);
    }

    ((InterpEntry_T12)wasm_native_to_interp_ftndescs [12].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [12].arg);
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Globalization_CalendarData_EnumCalendarInfoCallback (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T13) (int*, int*, int*);

    if (!(InterpEntry_T13)wasm_native_to_interp_ftndescs [13].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Globalization", "CalendarData", "EnumCalendarInfoCallback", 100667936, 2);
    }

    ((InterpEntry_T13)wasm_native_to_interp_ftndescs [13].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [13].arg);
}

void
wasm_native_to_interp_twodog_twodog_WebHost_ExitCallback () {
    typedef void (*InterpEntry_T14) (int*);

    if (!(InterpEntry_T14)wasm_native_to_interp_ftndescs [14].func) {
        mono_wasm_marshal_get_managed_wrapper ("twodog", "twodog", "WebHost", "ExitCallback", 100663383, 0);
    }

    ((InterpEntry_T14)wasm_native_to_interp_ftndescs [14].func) ((int*)wasm_native_to_interp_ftndescs [14].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_FrameCallback () {
    typedef void (*InterpEntry_T15) (int*);

    if (!(InterpEntry_T15)wasm_native_to_interp_ftndescs [15].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "FrameCallback", 100709684, 0);
    }

    ((InterpEntry_T15)wasm_native_to_interp_ftndescs [15].func) ((int*)wasm_native_to_interp_ftndescs [15].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_GCHandleBridge_FreeGCHandle (void * arg0) {
    typedef void (*InterpEntry_T16) (int*, int*);

    if (!(InterpEntry_T16)wasm_native_to_interp_ftndescs [16].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "GCHandleBridge", "FreeGCHandle", 100709659, 1);
    }

    ((InterpEntry_T16)wasm_native_to_interp_ftndescs [16].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [16].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_GCHandleBridge_GCHandleIsTargetCollectible (void * arg0) {
    typedef void (*InterpEntry_T17) (int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T17)wasm_native_to_interp_ftndescs [17].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "GCHandleBridge", "GCHandleIsTargetCollectible", 100709660, 1);
    }

    ((InterpEntry_T17)wasm_native_to_interp_ftndescs [17].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [17].arg);
    return result;
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_Get (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T18) (int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T18)wasm_native_to_interp_ftndescs [18].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "CSharpInstanceBridge", "Get", 100709653, 3);
    }

    ((InterpEntry_T18)wasm_native_to_interp_ftndescs [18].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [18].arg);
    return result;
}

int32_t
wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_GetArgumentCount (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T19) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T19)wasm_native_to_interp_ftndescs [19].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "DelegateUtils", "GetArgumentCount", 100663733, 2);
    }

    ((InterpEntry_T19)wasm_native_to_interp_ftndescs [19].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [19].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_DebuggingUtils_GetCurrentStackInfo (void * arg0) {
    typedef void (*InterpEntry_T20) (int*, int*);

    if (!(InterpEntry_T20)wasm_native_to_interp_ftndescs [20].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "DebuggingUtils", "GetCurrentStackInfo", 100663726, 1);
    }

    ((InterpEntry_T20)wasm_native_to_interp_ftndescs [20].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [20].arg);
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_GetFunctionPointer (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T21) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T21)wasm_native_to_interp_ftndescs [21].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "GetFunctionPointer", 100663477, 6);
    }

    ((InterpEntry_T21)wasm_native_to_interp_ftndescs [21].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [21].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetGlobalClassName (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T22) (int*, int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T22)wasm_native_to_interp_ftndescs [22].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "GetGlobalClassName", 100709688, 6);
    }

    ((InterpEntry_T22)wasm_native_to_interp_ftndescs [22].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [22].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetOrCreateScriptBridgeForPath (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T23) (int*, int*, int*);

    if (!(InterpEntry_T23)wasm_native_to_interp_ftndescs [23].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "GetOrCreateScriptBridgeForPath", 100709695, 2);
    }

    ((InterpEntry_T23)wasm_native_to_interp_ftndescs [23].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [23].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetPropertyDefaultValues (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T24) (int*, int*, int*);

    if (!(InterpEntry_T24)wasm_native_to_interp_ftndescs [24].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "GetPropertyDefaultValues", 100709708, 2);
    }

    ((InterpEntry_T24)wasm_native_to_interp_ftndescs [24].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [24].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetPropertyInfoList (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T25) (int*, int*, int*);

    if (!(InterpEntry_T25)wasm_native_to_interp_ftndescs [25].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "GetPropertyInfoList", 100709705, 2);
    }

    ((InterpEntry_T25)wasm_native_to_interp_ftndescs [25].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [25].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetScriptNativeName (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T26) (int*, int*, int*);

    if (!(InterpEntry_T26)wasm_native_to_interp_ftndescs [26].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "GetScriptNativeName", 100709687, 2);
    }

    ((InterpEntry_T26)wasm_native_to_interp_ftndescs [26].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [26].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_HasMethodUnknownParams (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T27) (int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T27)wasm_native_to_interp_ftndescs [27].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "CSharpInstanceBridge", "HasMethodUnknownParams", 100709656, 2);
    }

    ((InterpEntry_T27)wasm_native_to_interp_ftndescs [27].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [27].arg);
    return result;
}

uint32_t
wasm_native_to_interp_twodog_twodog_LibGodot_InitCallback (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T28) (int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T28)wasm_native_to_interp_ftndescs [28].func) {
        mono_wasm_marshal_get_managed_wrapper ("twodog", "twodog", "LibGodot", "InitCallback", 100663341, 3);
    }

    ((InterpEntry_T28)wasm_native_to_interp_ftndescs [28].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [28].arg);
    return result;
}

void
wasm_native_to_interp_twodog_twodog_LibGodot_InitializeCallback (void * arg0, int32_t arg1) {
    typedef void (*InterpEntry_T29) (int*, int*, int*);

    if (!(InterpEntry_T29)wasm_native_to_interp_ftndescs [29].func) {
        mono_wasm_marshal_get_managed_wrapper ("twodog", "twodog", "LibGodot", "InitializeCallback", 100663339, 2);
    }

    ((InterpEntry_T29)wasm_native_to_interp_ftndescs [29].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [29].arg);
}

__attribute__((export_name("godotsharp_game_main_init")))
uint32_t
godotsharp_game_main_init (void * arg0, void * arg1, void * arg2, int32_t arg3) {
    typedef void (*InterpEntry_T30) (int*, int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T30)wasm_native_to_interp_ftndescs [30].func) {
        mono_wasm_marshal_get_managed_wrapper ("GameJam", "GodotPlugins.Game", "Main", "InitializeFromGameProject", 100663881, 4);
    }

    ((InterpEntry_T30)wasm_native_to_interp_ftndescs [30].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [30].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_InvokeWithVariantArgs (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4) {
    typedef void (*InterpEntry_T31) (int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T31)wasm_native_to_interp_ftndescs [31].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "DelegateUtils", "InvokeWithVariantArgs", 100663734, 5);
    }

    ((InterpEntry_T31)wasm_native_to_interp_ftndescs [31].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [31].arg);
}

void *
wasm_native_to_interp_twodog_twodog_HostedGodotPlugins_LoadFromExecutable () {
    typedef void (*InterpEntry_T32) (int*, int*);
    void * result;

    if (!(InterpEntry_T32)wasm_native_to_interp_ftndescs [32].func) {
        mono_wasm_marshal_get_managed_wrapper ("twodog", "twodog", "HostedGodotPlugins", "LoadFromExecutable", 100663334, 0);
    }

    ((InterpEntry_T32)wasm_native_to_interp_ftndescs [32].func) ((int*)&result, (int*)wasm_native_to_interp_ftndescs [32].arg);
    return result;
}

void *
wasm_native_to_interp_twodog_twodog_WebHost_LoadFromExecutable () {
    typedef void (*InterpEntry_T33) (int*, int*);
    void * result;

    if (!(InterpEntry_T33)wasm_native_to_interp_ftndescs [33].func) {
        mono_wasm_marshal_get_managed_wrapper ("twodog", "twodog", "WebHost", "LoadFromExecutable", 100663375, 0);
    }

    ((InterpEntry_T33)wasm_native_to_interp_ftndescs [33].func) ((int*)&result, (int*)wasm_native_to_interp_ftndescs [33].arg);
    return result;
}

void
wasm_native_to_interp_twodog_twodog_WebHost_MainLoopCallback () {
    typedef void (*InterpEntry_T34) (int*);

    if (!(InterpEntry_T34)wasm_native_to_interp_ftndescs [34].func) {
        mono_wasm_marshal_get_managed_wrapper ("twodog", "twodog", "WebHost", "MainLoopCallback", 100663379, 0);
    }

    ((InterpEntry_T34)wasm_native_to_interp_ftndescs [34].func) ((int*)wasm_native_to_interp_ftndescs [34].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_GD_OnCoreApiAssemblyLoaded (uint32_t arg0) {
    typedef void (*InterpEntry_T35) (int*, int*);

    if (!(InterpEntry_T35)wasm_native_to_interp_ftndescs [35].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "GD", "OnCoreApiAssemblyLoaded", 100664251, 1);
    }

    ((InterpEntry_T35)wasm_native_to_interp_ftndescs [35].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [35].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_DisposablesTracker_OnGodotShuttingDown (uint32_t arg0) {
    typedef void (*InterpEntry_T36) (int*, int*);

    if (!(InterpEntry_T36)wasm_native_to_interp_ftndescs [36].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "DisposablesTracker", "OnGodotShuttingDown", 100664332, 1);
    }

    ((InterpEntry_T36)wasm_native_to_interp_ftndescs [36].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [36].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_RaiseEventSignal (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4) {
    typedef void (*InterpEntry_T37) (int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T37)wasm_native_to_interp_ftndescs [37].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "RaiseEventSignal", 100709691, 5);
    }

    ((InterpEntry_T37)wasm_native_to_interp_ftndescs [37].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [37].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_RemoveScriptBridge (void * arg0) {
    typedef void (*InterpEntry_T38) (int*, int*);

    if (!(InterpEntry_T38)wasm_native_to_interp_ftndescs [38].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "RemoveScriptBridge", 100709699, 1);
    }

    ((InterpEntry_T38)wasm_native_to_interp_ftndescs [38].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [38].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_ScriptIsOrInherits (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T39) (int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T39)wasm_native_to_interp_ftndescs [39].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "ScriptIsOrInherits", 100709692, 2);
    }

    ((InterpEntry_T39)wasm_native_to_interp_ftndescs [39].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [39].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_SerializeState (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T40) (int*, int*, int*, int*);

    if (!(InterpEntry_T40)wasm_native_to_interp_ftndescs [40].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "CSharpInstanceBridge", "SerializeState", 100709657, 3);
    }

    ((InterpEntry_T40)wasm_native_to_interp_ftndescs [40].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [40].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_Set (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T41) (int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T41)wasm_native_to_interp_ftndescs [41].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "CSharpInstanceBridge", "Set", 100709652, 3);
    }

    ((InterpEntry_T41)wasm_native_to_interp_ftndescs [41].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [41].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_SetGodotObjectPtr (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T42) (int*, int*, int*);

    if (!(InterpEntry_T42)wasm_native_to_interp_ftndescs [42].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "SetGodotObjectPtr", 100709689, 2);
    }

    ((InterpEntry_T42)wasm_native_to_interp_ftndescs [42].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [42].arg);
}

void
wasm_native_to_interp_GodotSharp_Godot_SignalAwaiter_SignalCallback (void * arg0, void * arg1, int32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T43) (int*, int*, int*, int*, int*);

    if (!(InterpEntry_T43)wasm_native_to_interp_ftndescs [43].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "SignalAwaiter", "SignalCallback", 100664727, 4);
    }

    ((InterpEntry_T43)wasm_native_to_interp_ftndescs [43].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [43].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_SwapGCHandleForType (void * arg0, void * arg1, uint32_t arg2) {
    typedef void (*InterpEntry_T44) (int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T44)wasm_native_to_interp_ftndescs [44].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "SwapGCHandleForType", 100709710, 3);
    }

    ((InterpEntry_T44)wasm_native_to_interp_ftndescs [44].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [44].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Threading_TimerQueue_TimerHandler () {
    typedef void (*InterpEntry_T45) (int*);

    if (!(InterpEntry_T45)wasm_native_to_interp_ftndescs [45].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Threading", "TimerQueue", "TimerHandler", 100669481, 0);
    }

    ((InterpEntry_T45)wasm_native_to_interp_ftndescs [45].func) ((int*)wasm_native_to_interp_ftndescs [45].arg);
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_TryDeserializeDelegateWithGCHandle (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T46) (int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T46)wasm_native_to_interp_ftndescs [46].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "DelegateUtils", "TryDeserializeDelegateWithGCHandle", 100663740, 2);
    }

    ((InterpEntry_T46)wasm_native_to_interp_ftndescs [46].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [46].arg);
    return result;
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_TryReloadRegisteredScriptWithClass (void * arg0) {
    typedef void (*InterpEntry_T47) (int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T47)wasm_native_to_interp_ftndescs [47].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "TryReloadRegisteredScriptWithClass", 100709700, 1);
    }

    ((InterpEntry_T47)wasm_native_to_interp_ftndescs [47].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [47].arg);
    return result;
}

uint32_t
wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_TrySerializeDelegateWithGCHandle (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T48) (int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T48)wasm_native_to_interp_ftndescs [48].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot", "DelegateUtils", "TrySerializeDelegateWithGCHandle", 100663739, 2);
    }

    ((InterpEntry_T48)wasm_native_to_interp_ftndescs [48].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [48].arg);
    return result;
}

void
wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_UpdateScriptClassInfo (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T49) (int*, int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T49)wasm_native_to_interp_ftndescs [49].func) {
        mono_wasm_marshal_get_managed_wrapper ("GodotSharp", "Godot.Bridge", "ScriptManagerBridge", "UpdateScriptClassInfo", 100709702, 6);
    }

    ((InterpEntry_T49)wasm_native_to_interp_ftndescs [49].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [49].arg);
}

static UnmanagedExport wasm_native_to_interp_table[] = {
    {"AddScriptBridge#2:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709693, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_AddScriptBridge},
    {"BackgroundJobHandler#0:System.Private.CoreLib:System.Threading:ThreadPool", 100669444, wasm_native_to_interp_System_Private_CoreLib_System_Threading_ThreadPool_BackgroundJobHandler},
    {"Call#6:GodotSharp:Godot.Bridge:CSharpInstanceBridge", 100709651, wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_Call},
    {"CallDispose#2:GodotSharp:Godot.Bridge:CSharpInstanceBridge", 100709654, wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_CallDispose},
    {"CallStatic#6:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709707, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_CallStatic},
    {"CallToString#3:GodotSharp:Godot.Bridge:CSharpInstanceBridge", 100709655, wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_CallToString},
    {"CleanupAfterSync#0:twodog:twodog:WebHost", 100663382, wasm_native_to_interp_twodog_twodog_WebHost_CleanupAfterSync},
    {"CreateManagedForGodotObjectBinding#2:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709685, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_CreateManagedForGodotObjectBinding},
    {"CreateManagedForGodotObjectScriptInstance#4:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709686, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_CreateManagedForGodotObjectScriptInstance},
    {"DeinitializeCallback#2:twodog:twodog:LibGodot", 100663340, wasm_native_to_interp_twodog_twodog_LibGodot_DeinitializeCallback},
    {"DelegateEquals#2:GodotSharp:Godot:DelegateUtils", 100663731, wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_DelegateEquals},
    {"DelegateHash#1:GodotSharp:Godot:DelegateUtils", 100663732, wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_DelegateHash},
    {"DeserializeState#3:GodotSharp:Godot.Bridge:CSharpInstanceBridge", 100709658, wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_DeserializeState},
    {"EnumCalendarInfoCallback#2:System.Private.CoreLib:System.Globalization:CalendarData", 100667936, wasm_native_to_interp_System_Private_CoreLib_System_Globalization_CalendarData_EnumCalendarInfoCallback},
    {"ExitCallback#0:twodog:twodog:WebHost", 100663383, wasm_native_to_interp_twodog_twodog_WebHost_ExitCallback},
    {"FrameCallback#0:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709684, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_FrameCallback},
    {"FreeGCHandle#1:GodotSharp:Godot.Bridge:GCHandleBridge", 100709659, wasm_native_to_interp_GodotSharp_Godot_Bridge_GCHandleBridge_FreeGCHandle},
    {"GCHandleIsTargetCollectible#1:GodotSharp:Godot.Bridge:GCHandleBridge", 100709660, wasm_native_to_interp_GodotSharp_Godot_Bridge_GCHandleBridge_GCHandleIsTargetCollectible},
    {"Get#3:GodotSharp:Godot.Bridge:CSharpInstanceBridge", 100709653, wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_Get},
    {"GetArgumentCount#2:GodotSharp:Godot:DelegateUtils", 100663733, wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_GetArgumentCount},
    {"GetCurrentStackInfo#1:GodotSharp:Godot:DebuggingUtils", 100663726, wasm_native_to_interp_GodotSharp_Godot_DebuggingUtils_GetCurrentStackInfo},
    {"GetFunctionPointer#6:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663477, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_GetFunctionPointer},
    {"GetGlobalClassName#6:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709688, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetGlobalClassName},
    {"GetOrCreateScriptBridgeForPath#2:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709695, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetOrCreateScriptBridgeForPath},
    {"GetPropertyDefaultValues#2:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709708, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetPropertyDefaultValues},
    {"GetPropertyInfoList#2:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709705, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetPropertyInfoList},
    {"GetScriptNativeName#2:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709687, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_GetScriptNativeName},
    {"HasMethodUnknownParams#2:GodotSharp:Godot.Bridge:CSharpInstanceBridge", 100709656, wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_HasMethodUnknownParams},
    {"InitCallback#3:twodog:twodog:LibGodot", 100663341, wasm_native_to_interp_twodog_twodog_LibGodot_InitCallback},
    {"InitializeCallback#2:twodog:twodog:LibGodot", 100663339, wasm_native_to_interp_twodog_twodog_LibGodot_InitializeCallback},
    {"InitializeFromGameProject#4:GameJam:GodotPlugins.Game:Main", 100663881, godotsharp_game_main_init},
    {"InvokeWithVariantArgs#5:GodotSharp:Godot:DelegateUtils", 100663734, wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_InvokeWithVariantArgs},
    {"LoadFromExecutable#0:twodog:twodog:HostedGodotPlugins", 100663334, wasm_native_to_interp_twodog_twodog_HostedGodotPlugins_LoadFromExecutable},
    {"LoadFromExecutable#0:twodog:twodog:WebHost", 100663375, wasm_native_to_interp_twodog_twodog_WebHost_LoadFromExecutable},
    {"MainLoopCallback#0:twodog:twodog:WebHost", 100663379, wasm_native_to_interp_twodog_twodog_WebHost_MainLoopCallback},
    {"OnCoreApiAssemblyLoaded#1:GodotSharp:Godot:GD", 100664251, wasm_native_to_interp_GodotSharp_Godot_GD_OnCoreApiAssemblyLoaded},
    {"OnGodotShuttingDown#1:GodotSharp:Godot:DisposablesTracker", 100664332, wasm_native_to_interp_GodotSharp_Godot_DisposablesTracker_OnGodotShuttingDown},
    {"RaiseEventSignal#5:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709691, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_RaiseEventSignal},
    {"RemoveScriptBridge#1:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709699, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_RemoveScriptBridge},
    {"ScriptIsOrInherits#2:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709692, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_ScriptIsOrInherits},
    {"SerializeState#3:GodotSharp:Godot.Bridge:CSharpInstanceBridge", 100709657, wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_SerializeState},
    {"Set#3:GodotSharp:Godot.Bridge:CSharpInstanceBridge", 100709652, wasm_native_to_interp_GodotSharp_Godot_Bridge_CSharpInstanceBridge_Set},
    {"SetGodotObjectPtr#2:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709689, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_SetGodotObjectPtr},
    {"SignalCallback#4:GodotSharp:Godot:SignalAwaiter", 100664727, wasm_native_to_interp_GodotSharp_Godot_SignalAwaiter_SignalCallback},
    {"SwapGCHandleForType#3:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709710, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_SwapGCHandleForType},
    {"TimerHandler#0:System.Private.CoreLib:System.Threading:TimerQueue", 100669481, wasm_native_to_interp_System_Private_CoreLib_System_Threading_TimerQueue_TimerHandler},
    {"TryDeserializeDelegateWithGCHandle#2:GodotSharp:Godot:DelegateUtils", 100663740, wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_TryDeserializeDelegateWithGCHandle},
    {"TryReloadRegisteredScriptWithClass#1:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709700, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_TryReloadRegisteredScriptWithClass},
    {"TrySerializeDelegateWithGCHandle#2:GodotSharp:Godot:DelegateUtils", 100663739, wasm_native_to_interp_GodotSharp_Godot_DelegateUtils_TrySerializeDelegateWithGCHandle},
    {"UpdateScriptClassInfo#6:GodotSharp:Godot.Bridge:ScriptManagerBridge", 100709702, wasm_native_to_interp_GodotSharp_Godot_Bridge_ScriptManagerBridge_UpdateScriptClassInfo}
};
