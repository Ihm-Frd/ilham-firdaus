#include <iostream>
#include <string>

std::string xor_encrypt(std::string text, std::string key) {
    std::string encrypted_text = "";
    for (int i = 0; i < text.length(); i++) {
        encrypted_text += text[i] ^ key[i % key.length()];
    }
    return encrypted_text;
}

int main() {
    std::string text = "Saya harus lulus tepat waktu dan menjadi sarjana";
    std::string key = "password";

    std::string encrypted_text = xor_encrypt(text, key);
    std::cout << encrypted_text << std::endl;

    return 0;
}

