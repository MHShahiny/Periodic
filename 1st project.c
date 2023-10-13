#include <stdio.h>
#include <string.h>

struct Element
{
    char name[20];
    char symbol[3];
    int atomic_number;
    char electronic_configuration[20];
    char discovered_by[50];
    int charge;
    double atomic_weight;
    char block[2];
    char atomic_property[20];
};

void printCentered(char *str)
{
    int width = 70;
    int len = strlen(str);
    int padding = (width - len) / 2;
    printf("%*s%s%*s\n", padding, "", str, padding, "");
}

int main()
{
    int n, m, a;

    struct Element elements[118];

    elements[0] = (struct Element){"Hydrogen", "H", 1, "1s^1", "Henry Cavendish", 1, 1.008, "s", "Non-metal"};
    elements[1] = (struct Element){"Helium", "He", 2, "1s^2", "Pierre Janssen", 0, 4.0026, "s", "Noble Gas"};
    elements[2] = (struct Element){"Lithium", "Li", 3, "2s^1", "Johan August Arfwedson", 1, 6.94, "s", "Alkali Metal"};
    elements[3] = (struct Element){"Beryllium", "Be", 4, "2s^2", "Louis-Nicolas Vauquelin", 2, 9.0122, "s", "Alkaline Earth Metal"};
    elements[4] = (struct Element){"Boron", "B", 5, "2s^2 2p^1", "Joseph Louis Gay-Lussac and Louis Jacques Thénard", 3, 10.81, "p", "Metalloid"};
    elements[5] = (struct Element){"Carbon", "C", 6, "2s^2 2p^2", "Ancient Egyptians and Sumerians", 4, 12.01, "p", "Non-metal"};
    elements[6] = (struct Element){"Nitrogen", "N", 7, "2s^2 2p^3", "Daniel Rutherford", -3, 14.01, "p", "Non-metal"};
    elements[7] = (struct Element){"Oxygen", "O", 8, "2s^2 2p^4", "Carl Wilhelm Scheele", -2, 16.00, "p", "Non-metal"};
    elements[8] = (struct Element){"Fluorine", "F", 9, "2s^2 2p^5", "Henri Moissan", -1, 19.00, "p", "Non-metal"};
    elements[9] = (struct Element){"Neon", "Ne", 10, "2s^2 2p^6", "William Ramsay and Morris Travers", 0, 20.18, "p", "Noble Gas"};
    elements[10] = (struct Element){"Sodium", "Na", 11, "2s^2 2p^6 3s^1", "Humphry Davy", 1, 22.99, "s", "Alkali Metal"};
    elements[11] = (struct Element){"Magnesium", "Mg", 12, "2s^2 2p^6 3s^2", "Joseph Black", 2, 24.31, "s", "Alkaline Earth Metal"};
    elements[12] = (struct Element){"Aluminum", "Al", 13, "2s^2 2p^6 3s^2 3p^1", "Hans Christian Oersted", 3, 26.98, "p", "Metal"};
    elements[13] = (struct Element){"Silicon", "Si", 14, "2s^2 2p^6 3s^2 3p^2", "Jöns Jacob Berzelius", 4, 28.09, "p", "Metalloid"};
    elements[14] = (struct Element){"Phosphorus", "P", 15, "2s^2 2p^6 3s^2 3p^3", "Hennig Brand", -3, 30.97, "p", "Non-metal"};
    elements[15] = (struct Element){"Sulfur", "S", 16, "2s^2 2p^6 3s^2 3p^4", "Ancient Egyptians", -2, 32.07, "p", "Non-metal"};
    elements[16] = (struct Element){"Chlorine", "Cl", 17, "2s^2 2p^6 3s^2 3p^5", "Carl Wilhelm Scheele", -1, 35.45, "p", "Non-metal"};
    elements[17] = (struct Element){"Argon", "Ar", 18, "2s^2 2p^6 3s^2 3p^6", "Lord Rayleigh and William Ramsay", 0, 39.95, "p", "Noble Gas"};
    elements[18] = (struct Element){"Potassium", "K", 19, "2s^2 2p^6 3s^2 3p^6 4s^1", "Humphry Davy", 1, 39.10, "s", "Alkali Metal"};
    elements[19] = (struct Element){"Calcium", "Ca", 20, "2s^2 2p^6 3s^2 3p^6 4s^2", "Humphry Davy", 2, 40.08, "s", "Alkaline Earth Metal"};
    elements[20] = (struct Element){"Scandium", "Sc", 21, "3d^1 4s^2", "Lars Fredrik Nilson", 3, 44.96, "d", "Transition Metal"};
    elements[21] = (struct Element){"Titanium", "Ti", 22, "3d^2 4s^2", "William Gregor", 4, 47.87, "d", "Transition Metal"};
    elements[22] = (struct Element){"Vanadium", "V", 23, "3d^3 4s^2", "Andrés Manuel del Río", 5, 50.94, "d", "Transition Metal"};
    elements[23] = (struct Element){"Chromium", "Cr", 24, "3d^5 4s^1", "Louis Nicolas Vauquelin", 6, 51.99, "d", "Transition Metal"};
    elements[24] = (struct Element){"Manganese", "Mn", 25, "3d^5 4s^2", "Johan Gottlieb Gahn", 7, 54.94, "d", "Transition Metal"};
    elements[25] = (struct Element){"Iron", "Fe", 26, "3d^6 4s^2", "Ancient Egyptians", 2, 55.85, "d", "Transition Metal"};
    elements[26] = (struct Element){"Cobalt", "Co", 27, "3d^7 4s^2", "Georg Brandt", 3, 58.93, "d", "Transition Metal"};
    elements[27] = (struct Element){"Nickel", "Ni", 28, "3d^8 4s^2", "Axel Cronstedt", 2, 58.69, "d", "Transition Metal"};
    elements[28] = (struct Element){"Copper", "Cu", 29, "3d^10 4s^1", "Ancient Egyptians", 2, 63.55, "d", "Transition Metal"};
    elements[29] = (struct Element){"Zinc", "Zn", 30, "3d^10 4s^2", "Paracelsus", 2, 65.38, "d", "Transition Metal"};
    elements[30] = (struct Element){"Gallium", "Ga", 31, "3d^10 4s^2 4p^1", "Paul-Émile Lecoq de Boisbaudran", 3, 69.72, "p", "Metal"};
    elements[31] = (struct Element){"Germanium", "Ge", 32, "3d^10 4s^2 4p^2", "Clemens Winkler", 4, 72.63, "p", "Metalloid"};
    elements[32] = (struct Element){"Arsenic", "As", 33, "3d^10 4s^2 4p^3", "Albertus Magnus", 3, 74.92, "p", "Metalloid"};
    elements[33] = (struct Element){"Selenium", "Se", 34, "3d^10 4s^2 4p^4", "Jöns Jakob Berzelius", 2, 78.97, "p", "Nonmetal"};
    elements[34] = (struct Element){"Bromine", "Br", 35, "3d^10 4s^2 4p^5", "Antoine Jérôme Balard", 1, 79.90, "p", "Nonmetal"};
    elements[35] = (struct Element){"Krypton", "Kr", 36, "3d^10 4s^2 4p^6", "William Ramsay and Morris Travers", 0, 83.80, "p", "Noble Gas"};
    elements[36] = (struct Element){"Rubidium", "Rb", 37, "4s^1", "Robert Bunsen and Gustav Kirchhoff", 1, 85.47, "s", "Alkali Metal"};
    elements[37] = (struct Element){"Strontium", "Sr", 38, "4s^2", "Adair Crawford", 2, 87.62, "s", "Alkaline Earth Metal"};
    elements[38] = (struct Element){"Yttrium", "Y", 39, "4d^1 5s^2", "Johan Gadolin", 3, 88.91, "d", "Transition Metal"};
    elements[39] = (struct Element){"Zirconium", "Zr", 40, "4d^2 5s^2", "Martin Heinrich Klaproth", 4, 91.22, "d", "Transition Metal"};
    elements[40] = (struct Element){"Niobium", "Nb", 41, "4d^4 5s^1", "Charles Hatchett", 5, 92.91, "d", "Transition Metal"};
    elements[41] = (struct Element){"Molybdenum", "Mo", 42, "4d^5 5s^1", "Carl Wilhelm Scheele", 6, 95.94, "d", "Transition Metal"};
    elements[42] = (struct Element){"Technetium", "Tc", 43, "4d^5 5s^2", "Carlo Perrier and Emilio Segrè", 7, 98, "d", "Transition Metal"};
    elements[43] = (struct Element){"Ruthenium", "Ru", 44, "4d^7 5s^1", "Karl Ernst Claus", 8, 101.1, "d", "Transition Metal"};
    elements[44] = (struct Element){"Rhodium", "Rh", 45, "4d^8 5s^1", "William Hyde Wollaston", 9, 102.9, "d", "Transition Metal"};
    elements[45] = (struct Element){"Palladium", "Pd", 46, "4d^10", "William Hyde Wollaston", 10, 106.4, "d", "Transition Metal"};
    elements[46] = (struct Element){"Silver", "Ag", 47, "4d^10 5s^1", "Ancient Egyptians", 11, 107.9, "d", "Transition Metal"};
    elements[47] = (struct Element){"Cadmium", "Cd", 48, "4d^10 5s^2", "Karl Samuel Leberecht Hermann and Friedrich Stromeyer", 12, 112.4, "d", "Transition Metal"};
    elements[48] = (struct Element){"Indium", "In", 49, "4d^10 5s^2 5p^1", "Ferdinand Reich and Hieronymous Theodor Richter", 13, 114.8, "p", "Metal"};
    elements[49] = (struct Element){"Tin", "Sn", 50, "4d^10 5s^2 5p^2", "Ancient Egyptians", 14, 118.7, "p", "Metal"};
    elements[50] = (struct Element){"Antimony", "Sb", 51, "4d^10 5s^2 5p^3", "Ancient Egyptians", 15, 121.8, "p", "Metalloid"};
    elements[51] = (struct Element){"Tellurium", "Te", 52, "4d^10 5s^2 5p^4", "Franz-Joseph Müller von Reichenstein", 16, 127.6, "p", "Metalloid"};
    elements[52] = (struct Element){"Iodine", "I", 53, "4d^10 5s^2 5p^5", "Bernard Courtois", 17, 126.9, "p", "Nonmetal"};
    elements[53] = (struct Element){"Xenon", "Xe", 54, "4d^10 5s^2 5p^6", "William Ramsay and Morris Travers", 18, 131.3, "p", "Noble Gas"};
    elements[54] = (struct Element){"Cesium", "Cs", 55, "6s^1", "Robert Bunsen and Gustav Kirchhoff", 1, 132.9, "s", "Alkali Metal"};
    elements[55] = (struct Element){"Barium", "Ba", 56, "6s^2", "Carl Wilhelm Scheele", 2, 137.3, "s", "Alkaline Earth Metal"};
    elements[56] = (struct Element){"Lanthanum", "La", 57, "5d^1 6s^2", "Carl Gustaf Mosander", 3, 138.9, "f", "Lanthanide"};
    elements[57] = (struct Element){"Cerium", "Ce", 58, "4f^1 5d^1 6s^2", "Martin Heinrich Klaproth", 4, 140.1, "f", "Lanthanide"};
    elements[58] = (struct Element){"Praseodymium", "Pr", 59, "4f^3 6s^2", "Carl Auer von Welsbach", 5, 140.9, "f", "Lanthanide"};
    elements[59] = (struct Element){"Neodymium", "Nd", 60, "4f^4 6s^2", "Carl Auer von Welsbach", 6, 144.2, "f", "Lanthanide"};
    elements[60] = (struct Element){"Promethium", "Pm", 61, "4f^5 6s^2", "Isotopes synthesis", 7, 145, "f", "Lanthanide"};
    elements[61] = (struct Element){"Samarium", "Sm", 62, "4f^6 6s^2", "Lecoq de Boisbaudran", 8, 150.4, "f", "Lanthanide"};
    elements[62] = (struct Element){"Europium", "Eu", 63, "4f^7 6s^2", "Eugène-Anatole Demarçay", 9, 152.0, "f", "Lanthanide"};
    elements[63] = (struct Element){"Gadolinium", "Gd", 64, "4f^7 5d^1 6s^2", "Jean Charles Galissard de Marignac", 10, 157.3, "f", "Lanthanide"};
    elements[64] = (struct Element){"Terbium", "Tb", 65, "4f^9 6s^2", "Carl Gustaf Mosander", 11, 158.9, "f", "Lanthanide"};
    elements[65] = (struct Element){"Dysprosium", "Dy", 66, "4f^10 6s^2", "Lecoq de Boisbaudran", 12, 162.5, "f", "Lanthanide"};
    elements[66] = (struct Element){"Holmium", "Ho", 67, "4f^11 6s^2", "Marc Delafontaine and Jacques-Louis Soret", 13, 164.9, "f", "Lanthanide"};
    elements[67] = (struct Element){"Erbium", "Er", 68, "4f^12 6s^2", "Carl Gustaf Mosander", 14, 167.3, "f", "Lanthanide"};
    elements[68] = (struct Element){"Thulium", "Tm", 69, "4f^13 6s^2", "Per Teodor Cleve", 15, 168.9, "f", "Lanthanide"};
    elements[69] = (struct Element){"Ytterbium", "Yb", 70, "4f^14 6s^2", "Jean Charles Galissard de Marignac", 16, 173.0, "f", "Lanthanide"};
    elements[70] = (struct Element){"Lutetium", "Lu", 71, "4f^14 5d^1 6s^2", "Georges Urbain and Carl Auer von Welsbach", 17, 175.0, "f", "Lanthanide"};
    elements[71] = (struct Element){"Hafnium", "Hf", 72, "4f^14 5d^2 6s^2", "Dirk Coster and George de Hevesy", 4, 178.5, "d", "Transition Metal"};
    elements[72] = (struct Element){"Tantalum", "Ta", 73, "4f^14 5d^3 6s^2", "Anders Gustaf Ekeberg", 5, 180.9, "d", "Transition Metal"};
    elements[73] = (struct Element){"Tungsten", "W", 74, "4f^14 5d^4 6s^2", "Carl Wilhelm Scheele", 6, 183.8, "d", "Transition Metal"};
    elements[74] = (struct Element){"Rhenium", "Re", 75, "4f^14 5d^5 6s^2", "Ferdinand Reich and Hieronymous Theodor Richter", 7, 186.2, "d", "Transition Metal"};
    elements[75] = (struct Element){"Osmium", "Os", 76, "4f^14 5d^6 6s^2", "Smithson Tennant", 8, 190.2, "d", "Transition Metal"};
    elements[76] = (struct Element){"Iridium", "Ir", 77, "4f^14 5d^7 6s^2", "Smithson Tennant", 9, 192.2, "d", "Transition Metal"};
    elements[77] = (struct Element){"Platinum", "Pt", 78, "4f^14 5d^9 6s^1", "Ancient Egyptians", 10, 195.1, "d", "Transition Metal"};
    elements[78] = (struct Element){"Gold", "Au", 79, "4f^14 5d^10 6s^1", "Ancient Egyptians", 11, 197.0, "d", "Transition Metal"};
    elements[79] = (struct Element){"Mercury", "Hg", 80, "4f^14 5d^10 6s^2", "Ancient Egyptians", 12, 200.6, "d", "Transition Metal"};
    elements[80] = (struct Element){"Thallium", "Tl", 81, "4f^14 5d^10 6s^2 6p^1", "Sir William Crookes", 13, 204.4, "p", "Metal"};
    elements[81] = (struct Element){"Lead", "Pb", 82, "4f^14 5d^10 6s^2 6p^2", "Ancient Egyptians", 14, 207.2, "p", "Metal"};
    elements[82] = (struct Element){"Bismuth", "Bi", 83, "4f^14 5d^10 6s^2 6p^3", "Georges Louis Leclerc, Comte de Buffon", 15, 208.9, "p", "Metal"};
    elements[83] = (struct Element){"Polonium", "Po", 84, "4f^14 5d^10 6s^2 6p^4", "Marie Curie and Pierre Curie", 16, 209, "p", "Metalloid"};
    elements[84] = (struct Element){"Astatine", "At", 85, "4f^14 5d^10 6s^2 6p^5", "Dale R. Corson, Kenneth Ross MacKenzie, and Emilio Segrè", 17, 210, "p", "Metalloid"};
    elements[85] = (struct Element){"Radon", "Rn", 86, "4f^14 5d^10 6s^2 6p^6", "Friedrich Ernst Dorn", 18, 222, "p", "Noble Gas"};
    elements[86] = (struct Element){"Francium", "Fr", 87, "7s^1", "Marguerite Perey", 1, 223, "s", "Alkali Metal"};
    elements[87] = (struct Element){"Radium", "Ra", 88, "7s^2", "Marie Curie and Pierre Curie", 2, 226, "s", "Alkaline Earth Metal"};
    elements[88] = (struct Element){"Actinium", "Ac", 89, "6d^1 7s^2", "Friedrich Oskar Giesel", 3, 227, "d", "Actinide"};
    elements[89] = (struct Element){"Thorium", "Th", 90, "6d^2 7s^2", "Jöns Jakob Berzelius", 4, 232.0, "d", "Actinide"};
    elements[90] = (struct Element){"Protactinium", "Pa", 91, "5f^2 6d^1 7s^2", "Kasimir Fajans and Oswald Helmuth Göhring", 5, 231.0, "f", "Actinide"};
    elements[91] = (struct Element){"Uranium", "U", 92, "5f^3 6d^1 7s^2", "Martin Heinrich Klaproth", 6, 238.0, "f", "Actinide"};
    elements[92] = (struct Element){"Neptunium", "Np", 93, "5f^4 6d^1 7s^2", "Edwin McMillan and Philip H. Abelson", 7, 237.0, "f", "Actinide"};
    elements[93] = (struct Element){"Plutonium", "Pu", 94, "5f^6 7s^2", "Glenn T. Seaborg, Ralph A. James, and Albert Ghiorso", 8, 244.0, "f", "Actinide"};
    elements[94] = (struct Element){"Americium", "Am", 95, "5f^7 7s^2", "Glenn T. Seaborg, Ralph A. James, and Leon O. Morgan", 9, 243.0, "f", "Actinide"};
    elements[95] = (struct Element){"Curium", "Cm", 96, "5f^7 6d^1 7s^2", "Glenn T. Seaborg, Ralph A. James, and Albert Ghiorso", 10, 247.0, "f", "Actinide"};
    elements[96] = (struct Element){"Berkelium", "Bk", 97, "5f^9 7s^2", "Glenn T. Seaborg, Ralph A. James, and Albert Ghiorso", 11, 247.0, "f", "Actinide"};
    elements[97] = (struct Element){"Californium", "Cf", 98, "5f^10 7s^2", "Glenn T. Seaborg, Ralph A. James, and Albert Ghiorso", 12, 251.0, "f", "Actinide"};
    elements[98] = (struct Element){"Einsteinium", "Es", 99, "5f^11 7s^2", "Albert Ghiorso and team", 13, 252.0, "f", "Actinide"};
    elements[99] = (struct Element){"Fermium", "Fm", 100, "5f^12 7s^2", "Albert Ghiorso and team", 14, 257.0, "f", "Actinide"};
    elements[100] = (struct Element){"Mendelevium", "Md", 101, "5f^13 7s^2", "Albert Ghiorso and team", 15, 258.0, "f", "Actinide"};
    elements[101] = (struct Element){"Nobelium", "No", 102, "5f^14 7s^2", "Albert Ghiorso and team", 16, 259.0, "f", "Actinide"};
    elements[102] = (struct Element){"Lawrencium", "Lr", 103, "5f^14 6d^1 7s^2", "Albert Ghiorso and team", 17, 262.0, "f", "Actinide"};
    elements[103] = (struct Element){"Rutherfordium", "Rf", 104, "6d^2 7s^2", "Georgy Flyorov and team", 4, 267.0, "d", "Transition Metal"};
    elements[104] = (struct Element){"Dubnium", "Db", 105, "5f^14 6d^3 7s^2", "Georgy Flyorov and team", 5, 270.0, "d", "Transition Metal"};
    elements[105] = (struct Element){"Seaborgium", "Sg", 106, "5f^14 6d^4 7s^2", "Georgy Flyorov and team", 6, 271.0, "d", "Transition Metal"};
    elements[106] = (struct Element){"Bohrium", "Bh", 107, "5f^14 6d^5 7s^2", "Georgy Flyorov and team", 7, 270.0, "d", "Transition Metal"};
    elements[107] = (struct Element){"Hassium", "Hs", 108, "5f^14 6d^6 7s^2", "Peter Armbruster and Gottfried Münzenberg", 8, 277.0, "d", "Transition Metal"};
    elements[108] = (struct Element){"Meitnerium", "Mt", 109, "5f^14 6d^7 7s^2", "Peter Armbruster and Gottfried Münzenberg", 9, 278.0, "d", "Transition Metal"};
    elements[109] = (struct Element){"Darmstadtium", "Ds", 110, "5f^14 6d^8 7s^2", "Peter Armbruster and Gottfried Münzenberg", 10, 281.0, "d", "Transition Metal"};
    elements[110] = (struct Element){"Roentgenium", "Rg", 111, "5f^14 6d^9 7s^2", "Peter Armbruster and Gottfried Münzenberg", 11, 282.0, "d", "Transition Metal"};
    elements[111] = (struct Element){"Copernicium", "Cn", 112, "5f^14 6d^10 7s^2", "Sigurd Hofmann and team", 12, 285.0, "d", "Transition Metal"};
    elements[112] = (struct Element){"Nihonium", "Nh", 113, "5f^14 6d^10 7s^2 7p^1", "Kosuke Morita and team", 13, 284.0, "p", "Metal"};
    elements[113] = (struct Element){"Flerovium", "Fl", 114, "5f^14 6d^10 7s^2 7p^2", "Joint Institute for Nuclear Research (JINR) and Lawrence Livermore National Laboratory", 14, 289.0, "p", "Metal"};
    elements[114] = (struct Element){"Moscovium", "Mc", 115, "5f^14 6d^10 7s^2 7p^3", "Joint Institute for Nuclear Research (JINR) and Lawrence Livermore National Laboratory", 15, 288.0, "p", "Metal"};
    elements[115] = (struct Element){"Livermorium", "Lv", 116, "5f^14 6d^10 7s^2 7p^4", "Joint Institute for Nuclear Research (JINR) and Lawrence Livermore National Laboratory", 16, 293.0, "p", "Metal"};
    elements[116] = (struct Element){"Tennessine", "Ts", 117, "5f^14 6d^10 7s^2 7p^5", "Joint Institute for Nuclear Research (JINR) and Oak Ridge National Laboratory", 17, 294.0, "p", "Metalloid"};
    elements[117] = (struct Element){"Oganesson", "Og", 118, "5f^14 6d^10 7s^2 7p^6", "Joint Institute for Nuclear Research (JINR) and Lawrence Livermore National Laboratory", 18, 294.0, "p", "Noble Gas"};

    while (1)
    {
        printf("                                            Welcome to Modern Periodic Table\n\n\n");
        printf(" > Enter 1 to know about an element\n");
        printf(" \n> Enter 2 to close the periodic table\n");
        printf("\nEnter: ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("\n> Press 3 to search the element by atomic number\n");
            printf("\nEnter: ");
            scanf("%d", &m);

            if (m == 3)
            {
                printf("\nEnter the atomic number of the element to be searched: ");
                scanf("%d", &a);

                if (a >= 1 && a <= 118)
                {
                    struct Element element = elements[a - 1];
                    printf("\n");
                    printCentered("\n\n\n\n\n\t\t\t----------------------- Element Information ----------------------\n\n\n\n");
                    printf("\t\t\t\tName                    : %s\n", element.name);
                    printf("\t\t\t\tSymbol                  : %s\n", element.symbol);
                    printf("\t\t\t\tAtomic Number           : %d\n", element.atomic_number);
                    printf("\t\t\t\tElectronic Configuration: %s\n", element.electronic_configuration);
                    printf("\t\t\t\tDiscovered By           : %s\n", element.discovered_by);
                    printf("\t\t\t\tCharge                  : %d\n", element.charge);
                    printf("\t\t\t\tAtomic Weight           : %.4f\n", element.atomic_weight);
                    printf("\t\t\t\tBlock                   : %s\n", element.block);
                    printf("\t\t\t\tAtomic Property         : %s\n", element.atomic_property);
                    printf("\n\n\n\n\n\n");
                }
                else
                {
                    printf("Invalid atomic number\n\n");
                }

                printf("\n> Enter 4 to search for another element\n");
                printf("\n> Enter 5 to go back to the main menu\n");
                int option;
                scanf("%d", &option);

                if (option == 5)
                {
                    continue;
                }
            }
        }
        else if (n == 2)
        {
            break;
        }
    }

    return 0;
}
