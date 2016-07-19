/*
 * Copyright (c) Zhou Peng <lockrecv@qq.com>
 */

#include "callgraph_options.h"
#include "callgraph_painter.h"

int main(int argc, char const *argv[])
{
	callgraph::get_options(argc, argv);
	callgraph::painter painter;
	painter.do_work();
	return 0;
}
