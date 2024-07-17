# Easy Keeper 🔐 Password Generator and Manager 🪪

<p align="left">
  <img src="https://www.animatedimages.org/data/media/562/animated-line-image-0184.gif" width="1920" 
</p>

![Screenshot 2024-07-17 at 3 18 04 PM](https://github.com/user-attachments/assets/98816e6c-5cf8-420c-ba81-f80c3f3d8de4)

## Project Overview

**Easy Keeper** is a robust and efficient password generator and manager developed using the C++ programming language. This application allows users to store sensitive information securely in binary files and protect it with passwords. Easy Keeper offers the flexibility to either generate strong passwords or use user-defined passwords for securing the information. Additionally, the application enables users to access the stored encrypted information using the correct password.

<p align="left">
  <img src="https://www.animatedimages.org/data/media/562/animated-line-image-0184.gif" width="1920" 
</p>

## Features

- **Password Management**: Securely store and manage passwords for various accounts and services.
- **Password Generation**: Automatically generate strong, random passwords to enhance security.
- **Encryption**: Encrypt stored information using a user-defined or generated password.
- **Binary Storage**: Store encrypted information in binary files for added security.
- **Data Access**: Access and decrypt stored information from the binary file (`stud.dat`) using the correct password.

## Technical Details

### Development

- **Programming Language**: C++
- **File Storage**: Binary files for encrypted data storage
- **Encryption Method**: Custom encryption algorithm implemented in C++

### Files and Directories

- `main.cpp`: The main source file containing the application logic.
- `stud.dat`: The binary file used to store encrypted information.

### Key Functionalities

1. **Password Generation**
   - The system can generate strong, random passwords for users.
   - Users can also enter their own passwords if preferred.

2. **Data Encryption**
   - Information entered by the user is encrypted and stored in a binary file (`stud.dat`).
   - Encryption ensures that the data is secure and accessible only with the correct password.

3. **Data Storage and Access**
   - Encrypted information is stored in binary format to prevent unauthorized access.
   - Users can retrieve and decrypt the stored information using the correct password.

<p align="left">
  <img src="https://www.animatedimages.org/data/media/562/animated-line-image-0184.gif" width="1920" 
</p>

## Usage

### Generating a Password

1. Run the application.
2. Choose the option to generate a password or enter your own password.
3. The system will either generate a strong password or use the one provided by the user.

### Storing Information

1. Enter the information to be stored.
2. The system encrypts the information and stores it in the binary file `stud.dat`.

### Accessing Stored Information

1. Run the application.
2. Enter the password used during the encryption.
3. The system decrypts and displays the stored information.

<p align="left">
  <img src="https://www.animatedimages.org/data/media/562/animated-line-image-0184.gif" width="1920" 
</p>

## Installation and Setup

1. Clone the repository to your local machine:
   ```sh
   git clone https://github.com/your-username/easy-keeper.git
   ```
2. Navigate to the project directory:
   ```sh
   cd easy-keeper
   ```
3. Compile the C++ source code:
   ```sh
   g++ -o easy-keeper main.cpp
   ```
4. Run the application:
   ```sh
   ./easy-keeper
   ```

<p align="left">
  <img src="https://www.animatedimages.org/data/media/562/animated-line-image-0184.gif" width="1920" 
</p>

## Contributing

Contributions are welcome! If you have any ideas or improvements, please submit a pull request or open an issue. Make sure to follow the code of conduct.

## Contact

For any inquiries or support, please reach out to Mihir Mathur at themihirmathur@gmail.com.

---

By utilizing Easy Keeper, you can ensure that your sensitive information is stored securely and is easily accessible only to you. The combination of strong password generation, encryption, and binary storage makes Easy Keeper a reliable tool for managing your passwords and sensitive data.

<p align="left">
  <img src="https://www.animatedimages.org/data/media/562/animated-line-image-0184.gif" width="1920" 
</p>
