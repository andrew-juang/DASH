#ifndef RUN_H
#define RUN_H

void dash_loop();

int is_shell_cmd(char **args);
int do_shell_cmd(char **args);

int run_command(char **args);

void run_tests();

#endif
