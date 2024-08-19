
#include "vlalib.h"





void VlEntry(){
    NTSTATUS status = VlCreateProcess(L"\\??\\X:\\Windows\\System32\\shell.exe", L"");
    if(!NT_SUCCESS(status)){
        VlPuts(L"\nfailed\n");
        while(1){
            continue;
        }
    }


}