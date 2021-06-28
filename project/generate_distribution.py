import numpy as np

def f(x, mean, std):
    return 1/(std * np.sqrt(2*np.pi)) * np.exp(-0.5 * ((x-mean)/std)**2)

def generate(mean, std, ndiv, end):
    ls = np.zeros(ndiv)
    for i in range(ndiv):
        x = end * i/ndiv
        ls[i] = int(100*f(x, mean, std))

    print(to_c_array(ls))
    print(sum(ls))

def to_c_array(values, ctype="float", name="table", formatter=str, colcount=8):
    # apply formatting to each element
    values = [formatter(v) for v in values]

    # split into rows with up to `colcount` elements per row
    rows = [values[i:i+colcount] for i in range(0, len(values), colcount)]

    # separate elements with commas, separate rows with newlines
    body = ',\n    '.join([', '.join(r) for r in rows])

    # assemble components into the complete string
    return '{} {}[] = {{\n    {}}};'.format(ctype, name, body)

generate(24.5, 0.4351, 100, 30)
