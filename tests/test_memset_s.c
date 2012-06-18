/*------------------------------------------------------------------
 * test_memset_s
 *
 *
 *------------------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>

#include "safe_types.h"
#include "safe_mem_lib.h"

#define debug_printf  printf


#define LEN   ( 256 )


int main()
{
    errno_t rc;
    uint32_t len;
    uint32_t i;

    uint8_t value;
    uint8_t mem1[LEN];

/*--------------------------------------------------*/

    value = 34;

    rc = memset_s(NULL, LEN, value);
    if (rc != ESNULLP) {
        debug_printf("%s %u   Error rc=%u \n",
                     __FUNCTION__, __LINE__, rc);
    }

/*--------------------------------------------------*/

    value = 34;

    rc = memset_s(mem1, 0, value);
    if (rc != ESZEROL) {
        debug_printf("%s %u   Error rc=%u \n",
                     __FUNCTION__, __LINE__, rc);
    }

/*--------------------------------------------------*/

    for (i=0; i<LEN; i++) { mem1[i] = 99; }

    len = 1;
    value = 34;

    rc = memset_s(mem1, len, value);
    if (rc != EOK) {
        debug_printf("%s %u   Error rc=%u \n",
                     __FUNCTION__, __LINE__, rc);
    }

    for (i=0; i<len; i++) {
        if (mem1[i] != value) {
            printf("%d - %d m1=%d \n",
                 __LINE__, i, mem1[i]);
        }
    }

/*--------------------------------------------------*/

    for (i=0; i<LEN; i++) { mem1[i] = 99; }

    len = 2;
    value = 34;

    rc = memset_s(mem1, len, value);
    if (rc != EOK) {
        debug_printf("%s %u   Error rc=%u \n",
                     __FUNCTION__, __LINE__, rc);
    }

    for (i=0; i<len; i++) {
        if (mem1[i] != value) {
            printf("%d - %d m1=%d \n",
                 __LINE__, i, mem1[i]);
        }
    }

/*--------------------------------------------------*/

    for (i=0; i<LEN; i++) { mem1[i] = 99; }

    len = 12;
    value = 34;

    rc = memset_s(mem1, len, value);
    if (rc != EOK) {
        debug_printf("%s %u   Error rc=%u \n",
                     __FUNCTION__, __LINE__, rc);
    }

    for (i=0; i<len; i++) {
        if (mem1[i] != value) {
            printf("%d - %d m1=%d \n",
                 __LINE__, i, mem1[i]);
        }
    }

/*--------------------------------------------------*/

    for (i=0; i<LEN; i++) { mem1[i] = 99; }

    len = 31;
    value = 34;

    rc = memset_s(mem1, len, value);
    if (rc != EOK) {
        debug_printf("%s %u   Error rc=%u \n",
                     __FUNCTION__, __LINE__, rc);
    }

    for (i=0; i<len; i++) {
        if (mem1[i] != value) {
            printf("%d - %d m1=%d \n",
                 __LINE__, i, mem1[i]);
        }
    }

/*--------------------------------------------------*/

    for (i=0; i<LEN; i++) { mem1[i] = 99; }

    len = 133;
    value = 34;

    rc = memset_s(mem1, len, value);
    if (rc != EOK) {
        debug_printf("%s %u   Error rc=%u \n",
                     __FUNCTION__, __LINE__, rc);
    }

    for (i=0; i<len; i++) {
        if (mem1[i] != value) {
            printf("%d - %d m1=%d \n",
                 __LINE__, i, mem1[i]);
        }
    }

/*--------------------------------------------------*/
/*--------------------------------------------------*/

    return (0);
}