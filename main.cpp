#include <iostream>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/syslog_sink.h"
static std::shared_ptr<spdlog::logger> syslog_logger;
void syslog_example()
{
    std::string ident = "spdlog-example";
    syslog_logger = spdlog::syslog_logger_mt("syslog", ident, LOG_PID);
    syslog_logger->warn("This is warning that will end up in syslog.");
    spdlog::set_default_logger(syslog_logger);
}
int main() {
    syslog_example();
    spdlog::info("Welcome to spdlog!");
    spdlog::error("Some error message with arg: {}", 1);
    return 0;
}
