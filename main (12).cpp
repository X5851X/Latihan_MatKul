// Tugas Pratikum Struktur Data Pertemuan 9
#include <iostream>
using namespace std;
 
/* pada simpul pohon biner mempunyai data 
pointer untuk ke anak kiri dan pointer ke anak kanan */
struct Simpul {
    int data;
    struct Simpul *kiri, *kanan;
};
 
//menambahkan fungsi untuk membuat simpul pohon baru
Simpul* newSimpul(int data)
{
    Simpul* temp = new Simpul;
    temp->data = data;
    temp->kiri = temp->kanan = NULL;
    return temp;
}

/* pada pohon biner, print simpulnya sesuai dengan
postorder traversal "bottom-up". */
void printPostorder(struct Simpul* simpul)
{
    if (simpul == NULL)
        return;
 
    // pertama perulangan pada sebelah kiri subtree
    printPostorder(simpul->kiri);
 
    // kemudian perulangan pada sebelah kanan subtree
    printPostorder(simpul->kanan);
 
    // sekarang simpulnya
    cout << simpul->data << " ";
}
 
/* pada pohon biner, print simpul inorder*/
void printInorder(struct Simpul* simpul)
{
    if (simpul == NULL)
        return;
 
    /* pertama perulangan pada sebelah kiri anak*/
    printInorder(simpul->kiri);
    
    /* kemudian print data dari simpul */
    cout << simpul->data << " ";
 
    /* sekarang perulangan pada sebelah kanan anak */
    printInorder(simpul->kanan);
}
 
/* pada pohon biner, print simpul preorder*/
void printPreorder(struct Simpul* simpul)
{
    if (simpul == NULL)
        return;
 
    /* pertama print data pada simpul */
    cout << simpul->data << " ";
 
    /* kemudian perulangan pada sebelah kiri subtree */
    printPreorder(simpul->kiri);
 
    /* sekarang perulangan pada sebelah kanan subtree */
    printPreorder(simpul->kanan);
}
 
/* Code untuk test fungsi diatas
   Membuat tree/pohon
	            2
			   / \
			  7   5
			 / \   \
			2   6   9
               / \  /
              5 11 4
*/
int main()
{
    struct Simpul* akar = newSimpul(1);
    akar->kiri = newSimpul(7);
    akar->kanan = newSimpul(5);
    akar->kiri->kiri = newSimpul(2);
    akar->kiri->kanan = newSimpul(6);
    akar->kanan->kanan = newSimpul(9);
    akar->kiri->kanan->kiri = newSimpul(5);
    akar->kiri->kanan->kanan = newSimpul(11);
    akar->kanan->kanan->kiri = newSimpul(4);
    
    cout << "\nHasil kunjungan secara Preorder \n";
    printPreorder(akar);
 
    cout << "\nHasil kunjungan secara Inorder \n";
    printInorder(akar);
 
    cout << "\nHasil kunjungan secara Postorder \n";
    printPostorder(akar);
 
    return 0;
}