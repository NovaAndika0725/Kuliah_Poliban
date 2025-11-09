import pandas as pd

file_path = "Data Penerimaan Mahasiswa Baru (1).xlsx"
df = pd.read_excel(file_path, sheet_name="Data Awal", header=2)

df["Program Studi"] = df["Program Studi"].astype(str).str.strip().str.lower()
df["Jenis Kelamin"] = df["Jenis Kelamin"].astype(str).str.strip().str.upper()

sistem_info = df[df["Program Studi"].str.contains("sistem informasi", na=False)]
jumlah = sistem_info["Jenis Kelamin"].value_counts()
print(jumlah)