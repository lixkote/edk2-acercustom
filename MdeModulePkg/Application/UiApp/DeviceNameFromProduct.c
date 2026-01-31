#include "FrontPage.h"
#include <Library/BaseLib.h>

/**
  Case-insensitive string comparison function.

  @param  Str1   First null-terminated string to compare.
  @param  Str2   Second null-terminated string to compare.

  @retval 0   The strings are equal (case-insensitive).
  @retval !=0 The strings are not equal.
**/
STATIC
INTN
StriCmp (
  IN CONST CHAR16  *Str1,
  IN CONST CHAR16  *Str2
  )
{
  CHAR16  Char1;
  CHAR16  Char2;

  while (*Str1 != L'\0') {
    Char1 = CharToUpper (*Str1);
    Char2 = CharToUpper (*Str2);

    if (Char1 != Char2) {
      return Char1 - Char2;
    }

    Str1++;
    Str2++;
  }

  return CharToUpper (*Str1) - CharToUpper (*Str2);
}

VOID
GetDeviceNameFromProduct (
  IN      CHAR16                  *Product,
  IN      UINTN                   BufferSize,
  OUT     CHAR16                  **DeviceName
  )
{
    StrCatS (*DeviceName, BufferSize / sizeof (CHAR16), L"Acer Spin CP713-1WN");
}
