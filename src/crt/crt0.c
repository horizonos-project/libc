extern int main(int argc, char **argv, char **envp);
extern void _exit(int);

void _start(void) {
	int ret = main(0, 0, 0);
	_exit(ret);
}
