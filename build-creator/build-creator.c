#include <stdio.h>
#include <string.h>

#include "../zip/src/zip.h"

int main() {
    struct zip_t *zip = zip_open("FUEL.zip", ZIP_DEFAULT_COMPRESSION_LEVEL, 0);
    {
        zip_entry_open(zip, "readme.txt");
        {
          zip_entry_fwrite(zip, "readme.txt");
        }
        zip_entry_close(zip);

        zip_entry_open(zip, "FUEL/xlive.dll");
        {
            zip_entry_fwrite(zip, "xlive.dll");
        }
        zip_entry_close(zip);

        zip_entry_open(zip, "FUEL/xlive.ini");
        {
            zip_entry_fwrite(zip, "xlive.ini");
        }
        zip_entry_close(zip);

        zip_entry_open(zip, "Saves/lllypuk/FUEL_SAVE_V14.sav");
        {
            zip_entry_fwrite(zip, "../lllypuk/FUEL_SAVE_V14.sav");
        }
        zip_entry_close(zip);
    }
    zip_close(zip);

    return 0;
}