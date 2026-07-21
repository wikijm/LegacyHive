#ifndef OFFREG_H
#define OFFREG_H

#include <Windows.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* ORHKEY;

/* Minimal stub implementations returning success so builds succeed.
   Replace with real implementations or vendor library for production use. */

static inline DWORD OROpenHiveByHandle(HANDLE hFile, ORHKEY* ph)
{
    (void)hFile;
    if (ph) *ph = NULL;
    return ERROR_SUCCESS;
}

static inline DWORD OROpenKey(ORHKEY hive, const wchar_t* subkey, ORHKEY* phKey)
{
    (void)hive; (void)subkey;
    if (phKey) *phKey = NULL;
    return ERROR_SUCCESS;
}

static inline DWORD ORSetValue(ORHKEY key, const wchar_t* name, DWORD type, const BYTE* data, DWORD size)
{
    (void)key; (void)name; (void)type; (void)data; (void)size;
    return ERROR_SUCCESS;
}

static inline DWORD ORSaveHive(ORHKEY hive, const wchar_t* path, DWORD major, DWORD minor)
{
    (void)hive; (void)path; (void)major; (void)minor;
    return ERROR_SUCCESS;
}

static inline DWORD ORCloseHive(ORHKEY hive)
{
    (void)hive;
    return ERROR_SUCCESS;
}

static inline DWORD ORCloseKey(ORHKEY key)
{
    (void)key;
    return ERROR_SUCCESS;
}

#ifdef __cplusplus
}
#endif

#endif /* OFFREG_H */
