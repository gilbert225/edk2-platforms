/** @file
  This driver installs SMBIOS information for QSP

  Copyright (c) 2011, Bei Guan <gbtju85@gmail.com>
  Copyright (c) 2019, Intel Corporation. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef _SMBIOS_PLATFORM_DXE_H_
#define _SMBIOS_PLATFORM_DXE_H_

#include <PiDxe.h>

#include <Protocol/Smbios.h>
#include <IndustryStandard/SmBios.h>
#include <Library/DebugLib.h>
#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/IoLib.h>

/**
  Validates the SMBIOS entry point structure

  @param  EntryPointStructure  SMBIOS entry point structure

  @retval TRUE   The entry point structure is valid
  @retval FALSE  The entry point structure is not valid

**/
BOOLEAN
IsEntryPointStructureValid (
  IN SMBIOS_TABLE_ENTRY_POINT  *EntryPointStructure
  );

#endif
