#include <stdio.h>
#include <Python.h>

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	return (a / b);
}

int mod(int a, int b)
{
	return (a % b);
}

PyObject *pyAdd(PyObject *self, PyObject *args)
{
	int a, b;

	if (!PyArg_ParseTuple(args, "ii", &a, &b))
	{
		return (NULL);
	}
	return (Py_BuildValue("i", add(a, b)));
}

PyObject *pySub(PyObject *self, PyObject *args)
{
	int a, b;

	if (!PyArg_ParseTuple(args, "ii", &a, &b))
	{
		return (NULL);
	}
	return (Py_BuilValue("i", sub(a, b)));
}

PyObject *pyMul(PyObject *self, Pyobject *args)
{
	int a, b;

	if (!PyArg_ParseTuple(args, "ii", &a, &b))
	{
		return (NULL);
	}
	return (Py_BuildValue("i", mul(a, b)));
}

PyObject *pyDiv(PyObject *self, PyObject *args)
{
	int a, b;

	if (!PyArg_ParseTuple(args, "ii", &a, &b))
	{
		return (NULL);
	}
	return (Py_BuildValue("i", div(a, b)));
}

PyObject *pyMod(PyObject *self, PyObject *args)
{
	int a, b;

	if (!PyArg_ParseTuple(args, "ii", &a, &b))
	{
		return (NULL);
	}
	return (Py_BuildValue("i", mod(a, b)));
}

static PyMethodDef s_methods[] = 
{
	{"add", pyAdd, METH_VARARGS},
	{"sub", pySub, METH_VARARGS},
	{"mul", pyMul, METH_VARARGS},
	{"div", pyDiv, METH_VARARGS},
	{"mod", pyMod, METH_VARARGS},
	{NULL, NULL, NULL},
};

PyMODINIT_FUNC initPyOperaions(void)
{
	(void) Py_InitModule("cops", s_methods);
}
