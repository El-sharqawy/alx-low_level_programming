#include <stdio.h>
#include <Python.h>
#define PY_SSIZE_T_CLEAN

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

int divine(int a, int b)
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
	return (Py_BuildValue("i", sub(a, b)));
}

PyObject *pyMul(PyObject *self, PyObject *args)
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
	return (Py_BuildValue("i", divine(a, b)));
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
	{NULL, NULL, 0},
};

static struct PyModuleDef module_def = {
    PyModuleDef_HEAD_INIT,
    "cops", /* name of module */
    NULL,   /* module documentation, may be NULL */
    -1,     /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    s_methods
};

PyMODINIT_FUNC PyInit_cops(void)
{
	PyModule_Create(&module_def);
}
