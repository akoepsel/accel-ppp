/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef SESSIONTABLE_DATA_ACCESS_H
#define SESSIONTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif


/* *********************************************************************
 * function declarations
 */

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table sessionTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * ACCEL-PPP-MIB::sessionTable is subid 1 of accelPPPSessions.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.8072.100.2.1, length: 10
*/


    int sessionTable_init_data(sessionTable_registration * sessionTable_reg);


    /*
     * TODO:180:o: Review sessionTable cache timeout.
     * The number of seconds before the cache times out
     */
#define SESSIONTABLE_CACHE_TIMEOUT   60

void sessionTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void sessionTable_container_shutdown(netsnmp_container *container_ptr);

int sessionTable_container_load(netsnmp_container *container);
void sessionTable_container_free(netsnmp_container *container);

int sessionTable_cache_load(netsnmp_container *container);
void sessionTable_cache_free(netsnmp_container *container);

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
/* *********************************************************************
 * Since we have no idea how you really access your data, we'll go with
 * a worst case example: a flat text file.
 */
#define MAX_LINE_SIZE 256
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    int sessionTable_row_prep( sessionTable_rowreq_ctx *rowreq_ctx);



#ifdef __cplusplus
}
#endif

#endif /* SESSIONTABLE_DATA_ACCESS_H */
