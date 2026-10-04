#include "rpc.h"
#include "rpcndr.h"

#ifndef __epmp_h__
#define __epmp_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#include "nbase.h"
void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __epmp_INTERFACE_DEFINED__
#define __epmp_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: epmp
 * at Sat Oct 03 20:23:09 2026
 * using MIDL 2.00.71
 ****************************************/
/* [implicit_handle][full][version][uuid] */ 


			/* size is 4 */
typedef unsigned long ulong;

			/* size is 4 */
typedef unsigned32 error_status;

			/* size is 4 */
typedef /* [context_handle] */ void __RPC_FAR *ept_lookup_handle_t;

			/* size is 4 */
typedef struct  _twr_t
    {
    unsigned32 tower_length;
    /* [size_is] */ byte tower_octet_string[ 1 ];
    }	twr_t;

			/* size is 4 */
typedef struct _twr_t __RPC_FAR *twr_p_t;

			/* size is 84 */
typedef struct  __MIDL_epmp_0001
    {
    UUID object;
    twr_p_t tower;
    /* [string] */ unsigned char annotation[ 64 ];
    }	ept_entry_t;

			/* size is 4 */
typedef /* [full] */ ept_entry_t __RPC_FAR *ept_entry_p_t;

			/* size is 4 */
typedef struct  _I_Tower
    {
    twr_p_t Tower;
    }	I_Tower;

			/* size is 0 */
/* client prototype */
void _ept_insert( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 num_ents,
    /* [size_is][in] */ ept_entry_t __RPC_FAR entries[  ],
    /* [in] */ unsigned long replace,
    /* [out] */ error_status __RPC_FAR *status);
/* server prototype */
void ept_insert( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 num_ents,
    /* [size_is][in] */ ept_entry_t __RPC_FAR entries[  ],
    /* [in] */ unsigned long replace,
    /* [out] */ error_status __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _ept_delete( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 num_ents,
    /* [size_is][in] */ ept_entry_t __RPC_FAR entries[  ],
    /* [out] */ error_status __RPC_FAR *status);
/* server prototype */
void ept_delete( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 num_ents,
    /* [size_is][in] */ ept_entry_t __RPC_FAR entries[  ],
    /* [out] */ error_status __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _ept_lookup( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 inquiry_type,
    /* [full][in] */ UUID __RPC_FAR *object,
    /* [full][in] */ RPC_IF_ID __RPC_FAR *Ifid,
    /* [in] */ unsigned32 vers_option,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [in] */ unsigned32 max_ents,
    /* [out] */ unsigned32 __RPC_FAR *num_ents,
    /* [size_is][length_is][out] */ ept_entry_t __RPC_FAR entries[  ],
    /* [out] */ error_status __RPC_FAR *status);
/* server prototype */
void ept_lookup( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 inquiry_type,
    /* [full][in] */ UUID __RPC_FAR *object,
    /* [full][in] */ RPC_IF_ID __RPC_FAR *Ifid,
    /* [in] */ unsigned32 vers_option,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [in] */ unsigned32 max_ents,
    /* [out] */ unsigned32 __RPC_FAR *num_ents,
    /* [size_is][length_is][out] */ ept_entry_t __RPC_FAR entries[  ],
    /* [out] */ error_status __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _ept_map( 
    /* [in] */ handle_t hEpMapper,
    /* [full][in] */ UUID __RPC_FAR *obj,
    /* [full][in] */ twr_p_t map_tower,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [in] */ unsigned32 max_towers,
    /* [out] */ unsigned32 __RPC_FAR *num_towers,
    /* [length_is][size_is][out] */ twr_p_t __RPC_FAR *ITowers,
    /* [out] */ error_status __RPC_FAR *status);
/* server prototype */
void ept_map( 
    /* [in] */ handle_t hEpMapper,
    /* [full][in] */ UUID __RPC_FAR *obj,
    /* [full][in] */ twr_p_t map_tower,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [in] */ unsigned32 max_towers,
    /* [out] */ unsigned32 __RPC_FAR *num_towers,
    /* [length_is][size_is][out] */ twr_p_t __RPC_FAR *ITowers,
    /* [out] */ error_status __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _ept_lookup_handle_free( 
    /* [in] */ handle_t h,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [out] */ error_status __RPC_FAR *status);
/* server prototype */
void ept_lookup_handle_free( 
    /* [in] */ handle_t h,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [out] */ error_status __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _ept_inq_object( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ UUID __RPC_FAR *ept_object,
    /* [out] */ error_status __RPC_FAR *status);
/* server prototype */
void ept_inq_object( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ UUID __RPC_FAR *ept_object,
    /* [out] */ error_status __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _ept_mgmt_delete( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ boolean32 object_speced,
    /* [full][in] */ UUID __RPC_FAR *object,
    /* [full][in] */ twr_p_t tower,
    /* [out] */ error_status __RPC_FAR *status);
/* server prototype */
void ept_mgmt_delete( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ boolean32 object_speced,
    /* [full][in] */ UUID __RPC_FAR *object,
    /* [full][in] */ twr_p_t tower,
    /* [out] */ error_status __RPC_FAR *status);


extern handle_t impH;


extern RPC_IF_HANDLE _epmp_ClientIfHandle;
extern RPC_IF_HANDLE epmp_ClientIfHandle;
extern RPC_IF_HANDLE epmp_ServerIfHandle;
#endif /* __epmp_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER ept_lookup_handle_t_rundown( ept_lookup_handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
