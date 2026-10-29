# Datoru arhitektūra – konspekts

## Saturs

1. [Datoru vēsture](#1-datoru-vēsture)
2. [8 lielās idejas datoru arhitektūrā](#2-8-lielās-idejas-datoru-arhitektūrā)
3. [Dators "zem vāka"](#3-dators-zem-vāka)
4. [Skaitīšanas sistēmas (binārā, heksadecimālā)](#4-skaitīšanas-sistēmas)
5. [Divnieka papildkods](#5-divnieka-papildkods)
6. [Peldošais punkts (floating point)](#6-peldošais-punkts)
7. [Datora valoda: instrukcijas](#7-datora-valoda-instrukcijas)
8. [Loģiskie elementi](#8-loģiskie-elementi)

---

## 1. Datoru vēsture

### Mūra likums un datoru paaudzes

| Paaudze | Gads | Tehnoloģija |
|---|---|---|
| Pirms | līdz 1946 | Mehānika, releji |
| 1. | 1946 | Radio lampas |
| 2. | 1959 | Tranzistori |
| 3. | 1965 | IC (integrētās shēmas) |
| 4. | 1971 | VLSI (ļoti lielas integrētās shēmas) |
| 5. | 1980 | ULSI (ultra lielas integrētās shēmas) |
| ... | | Kvantu datori? |

### Svarīgākie notikumi hronoloģiski

- **1642** – Blaise Pascal: mehāniska summēšanas iekārta.
- **1801** – Joseph-Marie Jacquard: programmējamas stelles.
- **1822 / 1837** – Charles Babbage: *Difference engine* un *Analytical engine*.
- **1937** – Alan Turing: **Tjūringa mašīna** (lasīt, rakstīt, kustēties pa kreisi/labi, apstāties).
- **1938–1941** – Konrad Zuse: Z1, Z2, Z3 (motori, releji, 22 biti, aerodinamikas aprēķini).
- **1943–1945** – **ENIAC**: decimālā, ~5000 operāciju/s, 18 000 lampu, 7200 diodes, 1500 releji, izmaksas ~6,9 M$.
- **1943** – Mark I (IBM), Hārvardas arhitektūra (?).
- **1945** – **fon Neimana arhitektūra** (programma un dati kopīgā atmiņā).
- **1952** – **EDVAC**: binārs, *stored program*, 44 bitu vārds, dzīvsudraba aiztures līniju atmiņa.
- **1951** – **UNIVAC**: pirmais komerciālais dators (46 pārdoti pa ~1 M$). CBS ar to prognozēja vēlēšanu rezultātus, kļūdījās un atvainojās datoram.
- **1952** – **IBM 701**: pirmais zinātniskais komerciālais dators (Williams lampu atmiņa 2k × 36 biti, 16k op/s). Programmatūras krīze → FORTRAN.
- **1964** – **IBM 360**: IBM tobrīd bija 5 nesavietojami datoru tipi; ieguldīja ~5 miljardus $ vienotā ISA.
- **1947** – **Tranzistors** (Bell Labs, Nobela prēmija 1956).
- **1959** – **Integrētā shēma** (Jack Kilby, Nobela prēmija 2000): tranzistori, rezistori, kondensatori un vadi uz viena kristāla; fotolitogrāfija.
- **1981** – **IBM PC**: Intel 8088, 4,77 MHz, RAM 16–256 KB, MS-DOS. **1983** – IBM PC XT (10–20 MB cietais disks). Prognoze 250k datoru 5 gados, reāli 250k *mēnesī*.

---

## 2. 8 lielās idejas datoru arhitektūrā

(Pēc Patterson & Hennessy grāmatas *Computer Organization and Design*.)

1. **Mūra likums** – projektē, ņemot vērā tehnoloģiju straujo attīstību.
2. **Abstrakcija** – vienkāršo dizainu ar abstrakcijas līmeņiem.
3. **Biežais ātrāk** – paātrini visbiežāk lietotās lietas.
4. **Paralēla izpilde** – uzlabo veiktspēju, darot vairākas lietas vienlaikus.
5. **Konveijera princips** (*pipelining*).
6. **Paredzēšana** (*prediction*) – labāk mēģināt uzminēt, nekā gaidīt.
7. **Atmiņu hierarhija** – ātra un maza atmiņa blakus procesoram, liela un lēna tālāk.
8. **Uzticamība ar rezervi** (*redundancy*) – papildu rezerves palielina drošumu.

---

## 3. Dators "zem vāka"

### Abstrakcijas līmeņi
Lietotne / pārlūks → operētājsistēma, bibliotēkas → OS kodols → procesors.

**Datorsistēma:** lietotnes → sistēmprogrammatūra (OS, kompilatori, ...) → aparatūra.

**Valodas:** augsta līmeņa programmēšanas valoda → asemblers → mašīnkodi (binārā valoda).

### Datora komponentes
- **Praktiskais skats:** kaste, barošanas bloks, mātesplate, procesors, atmiņa, cietais disks, grafikas karte, monitors, klaviatūra, pele.
- **Klasiskais skats (5 komponentes):** **ievads, izvads, atmiņa, datu plūsma, kontrole** (pēdējās divas kopā veido procesoru).

### Ievada un izvada ierīces
- **Izvads:** ekrāns (CRT → LCD, aktīvā matrica, pikseļi, RGB), 3D brilles, printeris, skaņa, mehāniskas iekārtas, haptiskais izvads, 3D projektori (vokseļi).
- **Ievads:** klaviatūra, pele, skārienvirsma, mikrofons, kamera, sensori.

### Citi temati
- **Procesors** (piemērs ARM A5: 12,1 × 10,1 mm, 45 nm process, 2 kodoli, PowerVR GPU, DRAM saskarne). Čipus ražo ar fotolitogrāfiju uz silīcija plāksnēm.
- **Atmiņa:** *volatile* (RAM, SRAM, DRAM) un *non-volatile* (FLASH, magnētiskā, feromagnētiskā, perfokartes, akmens plāksnītes); atmiņu hierarhija.
- **Komunikācija:** datortīkli – vadu un bezvadu (radio, gaisma, skaņa).

---

## 4. Skaitīšanas sistēmas

### 4.1. Pozicionālā sistēma

Skaitlis ar $n$ cipariem $a_{n-1}\dots a_1 a_0$ bāzē $b$ ir vērtība

$$\sum_{i=0}^{n-1} a_i b^i = a_0 + a_1 b + a_2 b^2 + \dots + a_{n-1} b^{n-1}$$

**Piemērs – decimālā sistēma:** $123_{10} = 1\cdot10^2 + 2\cdot10^1 + 3\cdot10^0 = 100 + 20 + 3$.

**Piemērs – viens un tas pats pieraksts `110` bināri, decimāli un heksadecimāli:**

| Pieraksts | Aprēķins | Vērtība (decimāli) |
|---|---|---|
| $110_2$ | $1\cdot2^2 + 1\cdot2 + 0$ | 6 |
| $110_{10}$ | $1\cdot10^2 + 1\cdot10 + 0$ | 110 |
| $110_{16}$ | $1\cdot16^2 + 1\cdot16 + 0$ | 272 |

**Hornera shēma** (mazāk reizināšanu): $((a_{n-1}\cdot b + a_{n-2})\cdot b + \dots + a_1)\cdot b + a_0$

Piemērs: $123_{10} = ((0\cdot10 + 1)\cdot10 + 2)\cdot10 + 3$.

### 4.2. Kā norāda bāzi

- Matemātikā – ar indeksu: $10_{16} = 16_{10}$.
- C/C++: `74` – decimālā, `0x4a` – **heksadecimālā** (prefikss `0x`). GNU asemblerī arī `0b1001010` – binārā.

### 4.3. Binārā sistēma

**Kāpēc bināra?** Elektronikā visvieglāk uztaisīt ierīci ar diviem stāvokļiem (strāva ir/nav, magnetizēts/nē, spīd/nespīd). Šos stāvokļus sauc par 0 un 1, jeb **bitu**.

| Nosaukums | Izmērs |
|---|---|
| bits | 1 bits |
| nibble | 4 biti |
| baits (byte) | 8 biti |
| pusvārds | 16 biti |
| vārds | 32 biti |
| dubultvārds | 64 biti |

Bitu skaits $n$ dod $2^n$ dažādas kombinācijas. Piemēram, 3 biti → 8 vērtības: `000`=0, `001`=1, `010`=2, `011`=3, `100`=4, `101`=5, `110`=6, `111`=7. 8 biti → 256 vērtības (0…255).

**Binārs → decimāls:** katram bitam piešķir svaru 8-4-2-1.

$$1011_2 = 1\cdot8 + 0\cdot4 + 1\cdot2 + 1\cdot1 = 11_{10}$$

$$11111111_2 = 128+64+32+16+8+4+2+1 = 255$$

**Trūkums:** pieraksts ir garš un neērts cilvēkam (piem., $1111101000_2$ – grūti nolasīt un pārrakstīt bez kļūdām).

### 4.4. Heksadecimālā sistēma (bāze 16)

Cipari: `0 1 2 3 4 5 6 7 8 9 A B C D E F`, kur A=10, B=11, C=12, D=13, E=14, F=15.

| Dec | Bin | Hex | | Dec | Bin | Hex |
|---|---|---|---|---|---|---|
| 0 | 0000 | 0 | | 8 | 1000 | 8 |
| 1 | 0001 | 1 | | 9 | 1001 | 9 |
| 2 | 0010 | 2 | | 10 | 1010 | A |
| 3 | 0011 | 3 | | 11 | 1011 | B |
| 4 | 0100 | 4 | | 12 | 1100 | C |
| 5 | 0101 | 5 | | 13 | 1101 | D |
| 6 | 0110 | 6 | | 14 | 1110 | E |
| 7 | 0111 | 7 | | 15 | 1111 | F |

**Galvenā ideja:** katrs heksa cipars = tieši **4 biti**, tāpēc pārveidošana uz bināro ir mehāniska (bez rēķināšanas):

$$\text{0x3A7F} = 0011\ 1010\ 0111\ 1111_2$$

$$10110111_2 = \underbrace{1011}_{B}\ \underbrace{0111}_{7} = \text{0xB7}$$

(Ja bitu skaits nedalās ar 4, priekšā pieraksta nulles.) Viens baits = 2 heksa cipari, piemēram `FF` = 255, `80` = 128.


### 4.5. Pārveidošana starp bāzēm

**No bāzes 16 uz 10 – pēc formulas:**

$$1F4_{16} = 1\cdot256 + 15\cdot16 + 4 = 256 + 240 + 4 = 500$$

$$4CD_{16} = 4\cdot256 + 12\cdot16 + 13 = 1024 + 192 + 13 = 1229$$

Ātrais veids – zinot "apaļos" skaitļus: $100_{16} = 256$, $F0_{16} = 240$, tātad $1F4_{16} = 200_{16} - C_{16} = 512 - 12 = 500$.

**No bāzes 10 uz 16 – dalot ar 16 un rakstot atlikumus no beigām uz sākumu:**

$13695_{10} = ?_{16}$

| Dalījums | Atlikums |
|---|---|
| 13695 / 16 = 855 | **15** (F) |
| 855 / 16 = 53 | **7** |
| 53 / 16 = 3 | **5** |
| 3 / 16 = 0 | **3** |

Rezultāts (atlikumi no apakšas uz augšu): $357F_{16}$.
Pārbaude: $3\cdot4096 + 5\cdot256 + 7\cdot16 + 15 = 12288 + 1280 + 112 + 15 = 13695$ ✓.

Vēl piemērs: $15689_{10}$ → atlikumi 9, 4, 13 (D), 3 → $3D49_{16}$.

**Vingrinājumi ar atbildēm:**

| Uzdevums | Atbilde |
|---|---|
| $125_{16} = ?_{10}$ | 293 |
| $400_{16} = ?_{10}$ | 1024 |
| $7FFF_{16} = ?_{10}$ | 32767 |
| $7FFFFFFF_{16} = ?_{10}$ | 2147483647 |
| $1999_{10} = ?_{16}$ | $7CF_{16}$ |
| $8192_{10} = ?_{16}$ | $2000_{16}$ |
| $16383_{10} = ?_{16}$ | $3FFF_{16}$ |

### 4.6. Saskaitīšana un atņemšana heksa sistēmā

Principi ir tādi paši kā decimālajā, tikai pārnese ir tad, kad summa sasniedz **16** (nevis 10).

**Saskaitīšana:** $2F + 1B$
- $F + B = 15 + 11 = 26 = 16 + 10$ → raksta `A`, pārnese 1
- $2 + 1 + 1 = 4$ → raksta `4`
- Rezultāts: $4A_{16}$ (pārbaude: 47 + 27 = 74 ✓)

**Atņemšana:** $50 - 1B$
- $0 - B$ nevar → aizņemas 16: $16 - 11 = 5$ → raksta `5`
- $5 - 1 - 1 = 3$ → raksta `3`
- Rezultāts: $35_{16}$ (pārbaude: 80 − 27 = 53 ✓)

### 4.7. Praktiskie rīki un piemēri

- **C valodā:** `sprintf(str, "%x", 255)` ieraksta `ff`; `"0x%08x"` – ar vadošām nullēm (`0x000000ff`). `strtoul("ff", NULL, 16)` atgriež 255; atšķirībā no `atoi()` var noteikt, kur skaitlis beidzās un vai virkne vispār bija skaitliska.
- **Base64:** 3 baiti (24 biti) → 4 cipari pa 6 bitiem.
  Piemērs: `"Man"` → `M`=01001101, `a`=01100001, `n`=01101110 → grupējot pa 6: `010011 010110 000101 101110` = 19, 22, 5, 46 → **`TWFu`**. Ja pēdējā grupā trūkst baitu, beigās liek `=`.
- **Atmiņas "marķieri":** `0xDEADBEEF`, `0xFEEDBEEF` – heksa skaitļi, kas lasās kā vārdi; tos lieto, lai atmiņā atpazītu konkrētu vietu.
- **Joks:** $0\text{x}12 = 18$ (jo $1\cdot16 + 2$) – tāpēc "0×12 = 18".

---

## 5. Divnieka papildkods

**Problēma:** datorā ir tikai biti (0 un 1) – kā pierakstīt **negatīvus** skaitļus tā, lai saskaitīšana darbotos vienkārši?

### 5.1. Skaitļi bez zīmes (unsigned)

Visi biti ir skaitļa vērtība. $n$ bitos var glabāt $0 \dots 2^n - 1$.

- 8 biti: 0 … 255 (`00000000` … `11111111`)
- 16 biti: 0 … 65535
- Reģistrs 32 bitos (4 baiti) = viens "vārds".

Negatīvu skaitļu nav; $0 - 1$ "ripo apkārt" un dod `11111111` (255).

### 5.2. Zīmes bits

Vecākais bits ir zīme (0 = +, 1 = −), pārējie – moduļa vērtība. 4 bitos:

| Bin | Vērtība |
|---|---|
| `0001` | +1 |
| `1001` | −1 |
| `1101` | −5 |
| `1111` | −7 |

**Problēmas:** (1) ir divas nulles – `0000` un `1000` (+0 un −0); (2) saskaitīšanai jāskatās zīmes un jāizvēlas saskaitīt vai atņemt, tātad aparatūra sarežģītāka. Piemēram, `0001 + 1001` (1 + (−1)) naivi saskaitot dod `1010`, bet tas nozīmētu −2 ✗.

### 5.3. Vieninieka papildkods

Negatīvu skaitli iegūst, **apgriežot visus bitus** (0↔1).

| Skaitlis | 4 bitu pieraksts |
|---|---|
| +1 | `0001` |
| −1 | `1110` (apgriezts `0001`) |
| +2 | `0010` |
| −2 | `1101` |

Saskaitīšana: $+1 + (-1) = 0001 + 1110 = 1111$ – tas ir "−0". Tātad atkal **divas nulles** (`0000` un `1111`). Turklāt, ja rodas pārnese no vecākā bita, tā jāpieskaita atpakaļ (*end-around carry*): $+2 + (-1)$: `0010 + 1110 = 1 0000` → pārnese 1 jāpieskaita → `0001` ✓. Tas ir neērti.

### 5.4. Ar nobīdi (bias)

Visiem skaitļiem pieskaita fiksētu nobīdi (8 bitiem – 128), lai viss kļūtu nenegatīvs.

- Glabātais skaitlis = vērtība + 128
- Vērtība 0 → glabā `1000 0000` (128)
- Vērtība −128 → glabā 0; vērtība 127 → glabā 255 (`1111 1111`)

Šo principu izmanto, piemēram, **peldošā punkta eksponentei** (sk. 6. sadaļu).

### 5.5. Divnieka papildkods (izmanto visos mūsdienu procesoros)

**Apzīmējums:** $R_n(k)$ – skaitļa $k$ reprezentācija $n$ bitos. Definīcija:

$$R_n(k) + R_n(-k) = 2^n$$

jeb negatīvam $k$: $R_n(-k) = 2^n - R_n(k)$.

**Ideja:** n-bitu skaitļi "ripo apkārt" modulo $2^n$. Piemēram 8 bitos $255 + 1 = 0$, tātad 255 var uzskatīt par −1.

**Diapazons $n$ bitos:**

$$-2^{n-1} \le k \le 2^{n-1} - 1$$

| Biti | Min | Max |
|---|---|---|
| 8 | −128 | 127 |
| 16 | −32 768 | 32 767 |
| 32 | −2 147 483 648 | 2 147 483 647 |

Diapazons ir **nesimetrisks**: ir viens negatīvs skaitlis vairāk (piem., −128, bet +128 nav). Vecākais bits joprojām norāda zīmi (1 = negatīvs), bet vērtība nav vienkārši "moduļa" daļa.

**4 bitu tabula (visi 16 skaitļi):**

| Bin | Vērtība | | Bin | Vērtība |
|---|---|---|---|---|
| `0000` | 0 | | `1000` | −8 |
| `0001` | 1 | | `1001` | −7 |
| `0010` | 2 | | `1010` | −6 |
| `0011` | 3 | | `1011` | −5 |
| `0100` | 4 | | `1100` | −4 |
| `0101` | 5 | | `1101` | −3 |
| `0110` | 6 | | `1110` | −2 |
| `0111` | 7 | | `1111` | −1 |

### 5.6. Kā atrast negatīvo reprezentāciju (apgriez + 1)

**Noteikums:** apgriez visus bitus un pieskaiti 1.

**Piemērs: −3 (8 bitos)**
```
 3        = 0000 0011
 apgriež  = 1111 1100
 + 1      = 1111 1101   → tas ir −3
```

**Piemērs: −17 (8 bitos)**
```
 17       = 0001 0001
 apgriež  = 1110 1110
 + 1      = 1110 1111   = 0xEF   → R8(−17) = EF
```
Pārbaude pēc definīcijas: $2^8 - 17 = 256 - 17 = 239 = \text{EF}_{16}$ ✓.

### 5.7. Kā atrast vērtību no reprezentācijas

Ja vecākais bits ir 0, tas ir parasts pozitīvs skaitlis. Ja vecākais bits ir 1, skaitlis ir negatīvs – lai uzzinātu, kāds, **atkārto to pašu operāciju** (apgriez + 1) un pieliek mīnusu.

**Piemērs:** kāda vērtība ir `1110 1111`?
```
 1110 1111   (vecākais bits 1 → negatīvs)
 apgriež  → 0001 0000
 + 1      → 0001 0001 = 17
```
Atbilde: **−17**.

**Vēl piemērs:** `1111 1111` → apgriež `0000 0000` + 1 = `0000 0001` = 1 → vērtība **−1**.

### 5.8. Kāpēc divnieka papildkods ir labs

- **Viena nulle.**
- **Saskaitīšana un atņemšana strādā vienādi** gan skaitļiem ar zīmi, gan bez zīmes – aparatūrai nav jāzina, vai skaitlis ir ar zīmi (atņemšana = saskaitīšana ar negatīvo).
- **Zīmes pārbaude** – pietiek paskatīties vecāko bitu.

**Piemērs – atņemšana kā saskaitīšana:** $5 - 3 = 5 + (-3)$ (8 bitos)
```
   0000 0101   ( 5)
 + 1111 1101   (−3)
 ----------
 1 0000 0010   → atmet pārnesi → 0000 0010 = 2 ✓
```

### 5.9. Pārnesums (carry) un pārpilde (overflow)

- **CR (carry)** – pārnese no vecākā bita. Nozīmīga **skaitļiem bez zīmes**.
- **OVF (overflow)** – pārpilde: rezultāts neietilpst diapazonā. Nozīmīga **skaitļiem ar zīmi**. Noteikums: divu vienādas zīmes skaitļu summai ir pretēja zīme.

**Piemēri 4 bitos:**

| Darbība | Rezultāts | CR | OVF | Piezīme |
|---|---|---|---|---|
| `0111 + 0001` (7 + 1) | `1000` | 0 | **1** | Ar zīmi: 7+1 dod −8 ✗ (pārpilde). Bez zīmes: 7+1=8 ✓ |
| `1111 + 0001` (15 + 1 vai −1 + 1) | `0000` | **1** | 0 | Ar zīmi: −1+1=0 ✓. Bez zīmes: 15+1=16 ✗ (pārnese) |

### 5.10. Reprezentācija heksadecimāli

Ērti pierakstīt ar $V_k(\ldots)$ – skaitļa reprezentācija $k$ baitos, heksa formā.

**Piemērs: $V_2(293)$** (2 baiti = 16 biti)
- $293_{10} = 125_{16}$ (293 / 16 = 18 atl. 5; 18 / 16 = 1 atl. 2; 1)
- $V_2(293) = \text{0125}$

**Piemērs: $V_2(-293)$**
- $10000_{16} - 125_{16} = \text{FEDB}_{16}$
- $V_2(-293) = \text{FEDB}$
- Pārbaude: $65536 - 293 = 65243 = \text{FEDB}_{16}$ ✓

**Tabula ($V_2$ – 2 baiti):**

| k | $V_2(k)$ | Piezīme |
|---|---|---|
| 0 | `0000` | |
| 1 | `0001` | |
| −1 | `FFFF` | |
| 32767 | `7FFF` | lielākais pozitīvais |
| −32768 | `8000` | mazākais negatīvais |
| 32768 | – | **kļūda**, neietilpst 2 baitos |

**Tabula ($V_4$ – 4 baiti):** $V_4(0)$ = `00000000`, $V_4(1)$ = `00000001`, $V_4(-1)$ = `FFFFFFFF`, $V_4(32768)$ = `00008000`.

Piezīme: 32768 2 baitos neietilpst ar zīmi, bet 4 baitos – jā; tāpēc svarīgi zināt datu tipa platumu (`short`, `int`, ...).

### 5.11. Skaitļi atmiņā: Big Endian un Little Endian

Atmiņas šūnā ietilpst 1 baits, tāpēc daudzbaitu skaitlis jāsadala. Piemērs: 32 bitu skaitlis `0x12345678` uz adresēm 00…03:

| Adrese | Big Endian | Little Endian |
|---|---|---|
| 00 | `12` | `78` |
| 01 | `34` | `56` |
| 02 | `56` | `34` |
| 03 | `78` | `12` |

- **Big Endian** – vecākais baits pirmais ("kā rakstām cipari").
- **Little Endian** – jaunākais baits pirmais (x86, lielākā daļa ARM).

**Kāpēc tas svarīgi?** C valodā: `int x = 0x12345678; char ch = (char)x;` – `ch` iegūs `0x78` (jaunākais baits) neatkarīgi no arhitektūras, bet ja kāds nolasa to pašu atmiņu kā baitu masīvu, LE un BE sistēmās rezultāts būs atšķirīgs. Tāpēc tīklos izmanto fiksētu secību (*network byte order* = Big Endian).

---

## 6. Peldošais punkts

### 6.1. Kāpēc nepietiek ar veseliem skaitļiem?

Veseli skaitļi neatļauj daļskaitļus (3,14), ļoti lielus (6,02·10²³) vai ļoti mazus (1,6·10⁻¹⁹) skaitļus. Alternatīvas: fiksētā punkta aritmētika, daļskaitļi, intervāli, LNS (logaritmiskās sistēmas, kur reizināšana ir vienkārša, bet saskaitīšana grūta). Visizplatītākais risinājums – **peldošais punkts (floating point, FP)**.

**Ideja** – zinātniskais pieraksts: $\pm\ \text{mantisa} \times \text{bāze}^{\text{eksponente}}$

Decimāli: $12345 = 1{,}2345 \times 10^4$. Binārā bāzē: $6{,}5 = 110{,}1_2 = 1{,}101_2 \times 2^2$.

Punkts "peld" – eksponente nosaka, kur tas atrodas.

### 6.2. Sastāvdaļas

| Daļa | Uzdevums |
|---|---|
| **Zīme (sign)** | 0 = pozitīvs, 1 = negatīvs |
| **Eksponente (exponent)** | pakāpe; glabā ar nobīdi (*bias*) |
| **Mantisa (significand)** | skaitļa "cipari" |

**Normalizācija:** mantisu vienmēr pieraksta formā $1{,}xxx$. Tā kā pirmais bits vienmēr ir 1, to **nesaglabā** ("slēptais bits") un iegūst vienu papildu precizitātes bitu bez maksas.

### 6.3. IEEE 754 formāti

| Formāts | Kopā | Zīme | Eksponente | Mantisa | Bias |
|---|---|---|---|---|---|
| Half | 16 | 1 | 5 | 10 | 15 |
| **Single** (`float`) | 32 | 1 | 8 | 23 | 127 |
| **Double** (`double`) | 64 | 1 | 11 | 52 | 1023 |
| Quadruple | 128 | 1 | 15 | 112 | 16383 |

(Double extended = 80 bitu, izmanto x87 koprocesorā.)

**Vērtība (normālam skaitlim):** $(-1)^{s} \times 1{,}m \times 2^{e - \text{bias}}$

### 6.4. Piemērs: 6,5 kā `float`

1. $6{,}5 = 110{,}1_2 = 1{,}101_2 \times 2^2$
2. Zīme: pozitīvs → **0**
3. Eksponente: $2 + 127 = 129 = 10000001_2$
4. Mantisa (bez slēptā 1): `101` + nulles līdz 23 bitiem → `10100000000000000000000`

$$0\ \ 10000001\ \ 10100000000000000000000 = \text{0x40D00000}$$

### 6.5. Piemērs: −0,75 kā `float`

1. $0{,}75 = 0{,}11_2 = 1{,}1_2 \times 2^{-1}$
2. Zīme: negatīvs → **1**
3. Eksponente: $-1 + 127 = 126 = 01111110_2$
4. Mantisa: `1` + nulles

$$1\ \ 01111110\ \ 10000000000000000000000 = \text{0xBF400000}$$

### 6.6. Īpašās vērtības

| Eksponente | Mantisa | Nozīme |
|---|---|---|
| visi 1 | 0 | **±∞** (piem., $1/0 = +\infty$) |
| visi 1 | ≠ 0 | **NaN** (Not a Number, piem., $0/0$, $\sqrt{-1}$) |
| visi 0 | 0 | **±0** (ir +0 un −0) |
| visi 0 | ≠ 0 | **subnormālie** (ļoti mazi skaitļi bez slēptā 1) |

### 6.7. Diapazons ir nevienmērīgs

Starp katriem diviem pakāpju soļiem ($1…2$, $2…4$, $4…8$, ...) ir **vienāds skaits** attēlojamu vērtību (`float`: $2^{23}$). Tātad tuvu nullei vērtības ir blīvi, bet tālu – retas.

**Piemērs (`float`):** līdz $2^{24} = 16\,777\,216$ visi veselie skaitļi ir attēlojami. Virs tā solis ir 2, un 16 777 217 nav attēlojams – tas noapaļojas uz 16 777 216. Pie $10^8$ solis ir jau 8.

### 6.8. Kāpēc FP rada "dīvainus" rezultātus

**1) Daudzas decimāldaļas nevar attēlot precīzi bināri.**
$0{,}1_{10} = 0{,}0001100110011\ldots_2$ (periodiska daļa, tāpat kā $1/3 = 0{,}333\ldots$ decimāli). Tāpēc `float` 0,1 faktiski ir `0.100000001490116119384765625`.

Klasisks piemērs (double): `0.1 + 0.2 == 0.3` ir **false** (`0.1 + 0.2 = 0.30000000000000004`). Tāpēc FP skaitļus nekad nesalīdzina ar `==`, bet pārbauda $|a - b| < \varepsilon$.

**2) Kvadrāts neatbilst "tuvākajam" skaitlim.** $0{,}1^2$ ar precīzu aritmētiku būtu $0{,}01$, bet aparatūra dod `0.010000000707805…`, kamēr tuvākā attēlojamā vērtība ir `0.009999999776482…`.

**3) $\sin(\pi) \neq 0$.** Jo $\pi$ nav precīzi attēlojams: double dod ≈ $0{,}1225\cdot10^{-15}$, single ≈ $-0{,}8742\cdot10^{-7}$.

**4) Asociativitāte ne vienmēr izpildās** (`float`):

$$(10^8 + (-10^8)) + 1 = 0 + 1 = 1$$

$$10^8 + ((-10^8) + 1) = 10^8 + (-10^8) = 0$$

jo $-10^8 + 1$ noapaļojas atpakaļ uz $-10^8$ (solis 8). Līdzīgi distributivitāte $(a+b)\cdot c = a\cdot c + b\cdot c$ var neizpildīties. **Komutativitāte** ($a+b=b+a$, $a\cdot b=b\cdot a$) izpildās.

**Secinājums:** lietojot FP, rezultāts var atšķirties atkarībā no darbību secības; svarīgi saprast precizitāti (half / single / double).

### 6.9. Vēsture

- Z1 (1938) – 17 bitu mantisa, 7 bitu eksponente; Z3 (1941) – atbalstīja ±∞.
- Mark V (1946) – decimālais FP.
- Intel 8086 – FP nebija, vajadzēja 8087 koprocesoru.
- **IEEE 754** standarts (pēc Intel 8087 un Motorola 68000 pieredzes); **William Kahan** par to saņēma Tjūringa balvu 1989. gadā. Standarts nosaka bitu reprezentāciju, vienotus algoritmus un izņēmumu situācijas (pārpilde, dalīšana ar 0).
- ARM Cortex-M0 nav FP, M4 ir.

### 6.10. FLOPS un skaitļošanas cena

**FLOPS** = floating point operations per second. Atkarīgs no FP veiktspējas, takts frekvences un kodolu skaita.

| Procesors | FLOP/takti uz kodolu (FP32) |
|---|---|
| Intel Pentium III | 3 |
| Intel Atom | 4 |
| Intel Haswell, Skylake | 32 |
| Intel Skylake-X | 64 |

Prefiksi: Kilo $10^3$, Mega $10^6$, Giga $10^9$, Tera $10^{12}$, Peta $10^{15}$.

**Piemērs: GPT-3 apmācība ≈ 3640 petaflop/s-dienas.**
- $3640 \times 10^{15} \times 86\,400\ \text{s} \approx 3{,}1\cdot10^{23}$ FLOP
- Core i7 (8 kodoli @ 3 GHz) ≈ 350 GFLOP/s
- Vajag ~10 000 000 šādu datoru vienu dienu (cits vērtējums: ~355 gadi un 4,6 M$ uz vienas Tesla V100)

**MI skaitļošanas apjoms:** apmācībai nepieciešamie resursi dubultojas ik ~100 dienas; kopš 2012. gada pieaugums ~300 000×. Savukārt gatavu modeli (Stable Diffusion) var darbināt mājās: i9-10850K, 8 GB GPU → 2 attēli 30 sekundēs.

### 6.11. Kopsavilkums

- FP = zīme + eksponente + mantisa.
- Precizitāte atkarīga no formāta (half / single / double / quadruple).
- Trokšņi: 0,1 nav precīzi attēlojams, $\sin(\pi) \neq 0$, nav garantētas asociativitātes un distributivitātes.
- FLOPS mēra FP skaitļošanas ātrumu.

---

## 7. Datora valoda: instrukcijas

- **Datora misija – izpildīt instrukcijas.** Programma atrodas atmiņā kā biti (instrukcijas un dati).
- **Tjūringa mašīna:** galīgs automāts ar stāvokļiem; raksta 1/0, iet pa kreisi/labi/stāv, lasa lenti un pāriet uz citu stāvokli.
- **Instrukciju kopas (ISA):** x86, ARM, MIPS, RISC-V, Atmel, MSP430, IBM360 u.c.

### Instrukciju tipi
- **Aritmētika un loģika** – piem. `add R1, R2, R3` (R1 = R2 + R3), `add R4, R5, 42`.
- **Operandi:** reģistri (32 biti), konstantes, atmiņas šūnas (`load` / `store`).
- **Vadības kontrole** – nosacījumi (`if a > b ...`), cikli.
- **Apakšprogrammas** – funkciju izsaukumi.
- **Atmiņa un adresācija** – piem. `m[12] = 34`.
- **Paralelisms, sinhronizācija** – piem. *test and set*.
- **Priviliģētās instrukcijas** – sistēmas sāknēšana, atmiņas aizsardzības režīmi.
- **Sistēmas izsaukumi** – OS funkcijas.
- **Saziņa ar ārpasauli** – In/Out, atmiņas kartēšana.
- **Instrukciju kodēšana** – instrukcijas tiek kodētas kā bitu virknes.

### Veiktspēja – Amdāla likums
Paātrinot daļu $p$ no uzdevuma $s$ reizes, kopējais ieguvums ir ierobežots ar daļu, kuru nevar paātrināt.

---

## 8. Loģiskie elementi

*No tranzistora līdz datoram.*

- **Čips** = daudz tranzistoru un vadu; tranzistors ir kā **slēdzis** (vai "slūžas"): viens bits kā spriegums (0 = 0 V, 1 = pozitīvs spriegums, piem., 3 V).
- **Pamata elementi:** invertors (NOT), **NAND**, **NOR**, AND, OR, XOR.
- **Patvaļīgs loģiskais elements** – var uzbūvēt no patiesuma tabulas; vienkāršošana ar **Karno kartēm**.
- **Sarežģītāki elementi:** multipleksors, dekoderis, kodētājs.
- **Elementi ar atmiņu:** trigeri → reģistri; takts ģenerators ("pulkstenis"); skaitītāji.
- **Citas ierīces:** ALU, reģistru fails u.c. – **jebkuru digitālu ierīci (gandrīz) var uzbūvēt no šiem blokiem.**

### Kopsavilkums
Tranzistors ir kā slēdzis → loģisko elementu hierarhija → atmiņas elementi → kombinētie elementi → jebkura digitāla iekārta.

