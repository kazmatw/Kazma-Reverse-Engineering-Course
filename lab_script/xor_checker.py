xor_key = 0x5A
encrypted_flag = [
    60,
    54,
    59,
    61,
    33,
    35,
    53,
    47,
    5,
    50,
    59,
    44,
    63,
    5,
    54,
    63,
    59,
    40,
    52,
    63,
    62,
    5,
    60,
    54,
    59,
    61,
    5,
    57,
    50,
    63,
    57,
    49,
    63,
    40,
    39,
]
flag = "".join(chr(c ^ xor_key) for c in encrypted_flag)
print(flag)
