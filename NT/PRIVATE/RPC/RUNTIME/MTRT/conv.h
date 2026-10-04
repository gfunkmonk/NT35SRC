#include "rpc.h"
#include "rpcndr.h"

#ifndef __conv_h__
#define __conv_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#include "nbase.h"
void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __conv_INTERFACE_DEFINED__
#define __conv_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: conv
 * at Sat Oct 03 20:23:00 2026
 * using MIDL 2.00.71
 ****************************************/
/* [auto_handle][version][uuid] */ 


			/* size is 0 */
/* client prototype */
/* [idempotent][callback] */ void _conv_who_are_you( 
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [ref][out] */ unsigned long __RPC_FAR *SequenceNumber,
    /* [ref][out] */ unsigned long __RPC_FAR *Status);
/* server prototype */
/* [idempotent][callback] */ void conv_who_are_you( 
    /* [ref][in] */ UUID __RPC_FAR *pUuid,
    /* [in] */ unsigned long ServerBootTime,
    /* [ref][out] */ unsigned long __RPC_FAR *SequenceNumber,
    /* [ref][out] */ unsigned long __RPC_FAR *Status);



extern RPC_IF_HANDLE _conv_ClientIfHandle;
extern RPC_IF_HANDLE conv_ClientIfHandle;
extern RPC_IF_HANDLE conv_ServerIfHandle;
#endif /* __conv_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
