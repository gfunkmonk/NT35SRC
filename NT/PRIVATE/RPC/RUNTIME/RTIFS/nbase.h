#include "rpc.h"
#include "rpcndr.h"

#ifndef __nbase_h__
#define __nbase_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __nbase_INTERFACE_DEFINED__
#define __nbase_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: nbase
 * at Sat Oct 03 19:39:38 2026
 * using MIDL 2.00.71
 ****************************************/
/* [auto_handle][full][local] */ 


			/* size is 4 */
typedef unsigned long unsigned32;

			/* size is 4 */
typedef unsigned32 boolean32;

			/* size is 16 */
typedef struct  _GUID
    {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[ 8 ];
    }	GUID;

			/* size is 16 */
typedef GUID UUID;

			/* size is 20 */
typedef struct  _RPC_IF_ID
    {
    UUID Uuid;
    unsigned short VersMajor;
    unsigned short VersMinor;
    }	RPC_IF_ID;



extern RPC_IF_HANDLE nbase_ClientIfHandle;
extern RPC_IF_HANDLE nbase_ServerIfHandle;
#endif /* __nbase_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
