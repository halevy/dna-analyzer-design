


#include "Reader/cmd_reader.h"
#include "Writer/cmd_writer.h"
#include "Manager/Cmd.h"


int main() {

    CmdReader cmdReader;
    CmdWriter cmdWriter;
    Cmd cmd(&cmdReader,&cmdWriter);
    cmd.start();

    return 0;
}