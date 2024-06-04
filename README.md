🔌 Programm-Weith-Changer

Allows you to change the weight of .EXE files.

⚡ How to configure?

Change weith .EXE files

❓ How it Works?
fileIn.seekg(0, std::ios::end);
    int fileSize = fileIn.tellg();

    for (int i = 0; i < kbToAdd * 1024; ++i) {
        fileOut.put(0);
    }

📱 Screenshots
![image](https://github.com/LightJkd/Programm-Weith-Changer/assets/171634839/ea930f03-224b-4da4-8af2-7ce7a8362256)

p.s.
This program allows you to modify applications. First, specify the path to the directory containing your .EXE file. Then, choose the amount of weight to add to the program (why add instead of subtract and add file weight? Because some programs with VMP protection may interpret your attempt as an intrusion, causing the program to malfunction). It's that simple!




