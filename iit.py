import random
import string

# Paste your full encrypted hex string here:
cipher_hex = "cb888ba311b999f322f6b0344cc7fe393a6899715d9a9d3ad6"
cipher = bytes.fromhex(cipher_hex)

def is_printable(s):
    """Check if string contains mostly printable ASCII characters."""
    printable = sum(c in string.printable for c in s)
    return printable / max(1, len(s)) > 0.9

found = False
for seed in range(256):
    random.seed(seed)
    plain_bytes = bytes([b ^ random.randint(0,255) for b in cipher])
    try:
        plain = plain_bytes.decode('utf-8')
    except UnicodeDecodeError:
        plain = plain_bytes.decode('latin-1', errors='ignore')

    # show only meaningful lines
    if ("flag" in plain.lower() or "ctf" in plain or is_printable(plain)):
        print(f"[+] Seed {seed}: {plain}")
        found = True

if not found:
    print("[-] No readable flag found. The ciphertext may be incomplete or /flag was empty.")
