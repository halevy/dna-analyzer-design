//
// Created by a on 7/6/20.
//
#include "../Reader/cmd_reader.h"
#include "../Writer/cmd_writer.h"
#include "Parssing.h"
#include "Cmd.h"
#include <iostream>
#include "../Factory/FactoryCommands.h"
#include "../Factory/FactoryParams.h"

Cmd::Cmd(Ireader *reader, Iwriter *writer):m_reader(reader),m_writer(writer) {}

void Cmd::start() {
    std::string result;
    FactoryCommands factoryCommands;
    FactoryParams factoryParams;
    std::vector<std::string> params;
    while (true){

        m_writer->write(">cmd>>>");
        result = m_reader->read();
        Parssing parssing(result);
        params = parssing.getParams();
        try{
            factoryParams.getParam(params[0])->isValid(params);
            factoryCommands.getCommand(params[0])->run(params,m_reader,m_writer);
        }
        catch(std::invalid_argument& e)
        {
            std::string result = e.what();
            result += "\n";
            m_writer->write(result.c_str());
        }
        catch (std::bad_exception& e)
        {
            return;
        }

    }

}

