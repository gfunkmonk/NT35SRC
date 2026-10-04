#include "rpc.h"
#include "rpcndr.h"

#ifndef __mgmt_h__
#define __mgmt_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#include "nbase.h"
void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __mgmt_INTERFACE_DEFINED__
#define __mgmt_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: mgmt
 * at Sat Oct 03 20:22:59 2026
 * using MIDL 2.00.71
 ****************************************/
/* [auto_handle][version][uuid] */ 


			/* size is 4 */
typedef unsigned long error_status_t;

			/* size is 4 */
typedef struct  __MIDL_mgmt_0001
    {
    unsigned long Count;
    /* [size_is] */ RPC_IF_ID __RPC_FAR *IfId[ 1 ];
    }	__RPC_FAR *rpc_if_id_vector_p_t;

			/* size is 0 */
/* client prototype */
void _rpc_mgmt_inq_if_ids( 
    /* [in] */ handle_t binding_handle,
    /* [out] */ rpc_if_id_vector_p_t __RPC_FAR *if_id_vector,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);
/* server prototype */
void rpc_mgmt_inq_if_ids( 
    /* [in] */ handle_t binding_handle,
    /* [out] */ rpc_if_id_vector_p_t __RPC_FAR *if_id_vector,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _rpc_mgmt_inq_stats( 
    /* [in] */ handle_t binding_handle,
    /* [out][in] */ unsigned32 __RPC_FAR *count,
    /* [size_is][out] */ unsigned32 __RPC_FAR statistics[  ],
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);
/* server prototype */
void rpc_mgmt_inq_stats( 
    /* [in] */ handle_t binding_handle,
    /* [out][in] */ unsigned32 __RPC_FAR *count,
    /* [size_is][out] */ unsigned32 __RPC_FAR statistics[  ],
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);

			/* size is 4 */
/* client prototype */
boolean32 _rpc_mgmt_is_server_listening( 
    /* [in] */ handle_t binding_handle,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);
/* server prototype */
boolean32 rpc_mgmt_is_server_listening( 
    /* [in] */ handle_t binding_handle,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _rpc_mgmt_stop_server_listening( 
    /* [in] */ handle_t binding_handle,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);
/* server prototype */
void rpc_mgmt_stop_server_listening( 
    /* [in] */ handle_t binding_handle,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);

			/* size is 0 */
/* client prototype */
void _rpc_mgmt_inq_princ_name( 
    /* [in] */ handle_t binding_handle,
    /* [in] */ unsigned32 authn_proto,
    /* [in] */ unsigned32 princ_name_size,
    /* [size_is][string][out] */ unsigned char __RPC_FAR princ_name[  ],
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);
/* server prototype */
void rpc_mgmt_inq_princ_name( 
    /* [in] */ handle_t binding_handle,
    /* [in] */ unsigned32 authn_proto,
    /* [in] */ unsigned32 princ_name_size,
    /* [size_is][string][out] */ unsigned char __RPC_FAR princ_name[  ],
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);



extern RPC_IF_HANDLE _mgmt_ClientIfHandle;
extern RPC_IF_HANDLE mgmt_ClientIfHandle;
extern RPC_IF_HANDLE mgmt_ServerIfHandle;
#endif /* __mgmt_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
