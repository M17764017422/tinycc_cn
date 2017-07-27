#包含 <tcclib.h>

整 斐波那契(整 甲)
{
    如果 (甲 <= 2)
        返回 1;
    否则
        返回 斐波那契(甲 - 1) + 斐波那契(甲 - 2);
}

整 main(整 argc, 字 **argv)
{
    整 甲;
    如果 (argc < 2) {
        printf("usage: fib n\n"
               "Compute nth Fibonacci number\n");
        返回 1;
    }

    甲 = atoi(argv[1]);
    printf("fib(%d) = %d\n", 甲, 斐波那契(甲));
    返回 0;
}
