#include "FrontPage.h"
#include <Library/BaseLib.h>

/**
  Returns a hardcoded device name.
**/
VOID
GetDeviceNameFromProduct (
  IN      CHAR16                  *Product,
  IN      UINTN                   BufferSize,
  OUT     CHAR16                  **DeviceName
  )
{
    StrCatS (*DeviceName, BufferSize / sizeof (CHAR16), L"Acer Spin CP713-1WN");
}

