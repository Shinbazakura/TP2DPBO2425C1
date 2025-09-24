<?php
require_once 'Display.php';
session_start();

// Initialize default data if session empty
if (!isset($_SESSION['displays'])) {
    $_SESSION['displays'] = [
        new Display(1, "AUO B140HAN01.3 14 inch FHD IPS", 1350000, 6, "B140HAN01.3", "AU Optronics", "Baru", "1920x1080", 14, "IPS", "16:9"),
        new Display(2, "LG LP156UD1-SPB1 15.6 inch 4K IPS", 3300000, 3, "LP156UD1-SPB1", "LG Display", "Baru", "3840x2160", 15, "IPS", "16:9"),
        new Display(3, "Samsung LTN133YL01-L01 13.3 inch QHD+", 2850000, 4, "LTN133YL01-L01", "Samsung", "Baru", "3200x1800", 13, "PLS", "16:9"),
        new Display(4, "BOE NV156FHM-N4B 15.6 inch FHD 144 Hz", 2500000, 5, "NV156FHM-N4B", "BOE", "Baru", "1920x1080", 15, "IPS 144Hz", "16:9"),
        new Display(5, "Innolux N173HCE-E31 17.3 inch FHD IPS", 2700000, 2, "N173HCE-E31", "Innolux", "Baru", "1920x1080", 17, "IPS", "16:9"),
        new Display(6, "Sharp LQ156R1JW02 15.6 inch 4K IGZO", 3900000, 2, "LQ156R1JW02", "Sharp", "Baru", "3840x2400", 15, "IGZO IPS", "16:10"),
        new Display(7, "BOE NE160QDM-NY1 16 inch 2.5K 165 Hz", 3800000, 2, "NE160QDM-NY1", "BOE", "Baru", "2560x1600", 16, "IPS 165 Hz", "16:10")
    ];
}

// Handle form submission
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $display = new Display(
        intval($_POST['id']),
        $_POST['nama'],
        intval($_POST['harga']),
        intval($_POST['stok']),
        $_POST['noPart'],
        $_POST['manufaktur'],
        $_POST['kondisi'],
        $_POST['resolusi'],
        intval($_POST['ukuran']),
        $_POST['tipePanel'],
        $_POST['aspekRatio']
    );
    $_SESSION['displays'][] = $display;
    header('Location: index.php');
    exit;
}

// Function to print table
function printDisplayTable(array $listDisplay) {
    if (empty($listDisplay)) { echo "<p>Tidak ada data Display.</p>"; return; }

    echo "<table border='1' cellpadding='5' cellspacing='0'>";
    echo "<tr><th>ID</th><th>Nama</th><th>Harga</th><th>Stok</th><th>No Part</th><th>Manufaktur</th><th>Kondisi</th><th>Resolusi</th><th>Ukuran</th><th>Tipe Panel</th><th>Aspek Ratio</th></tr>";

    foreach ($listDisplay as $d) {
        echo "<tr>
                <td>{$d->getId()}</td>
                <td>{$d->getNama()}</td>
                <td>{$d->getHarga()}</td>
                <td>{$d->getStok()}</td>
                <td>{$d->getNoPart()}</td>
                <td>{$d->getManufaktur()}</td>
                <td>{$d->getKondisi()}</td>
                <td>{$d->getResolusi()}</td>
                <td>{$d->getUkuran()}</td>
                <td>{$d->getTipePanel()}</td>
                <td>{$d->getAspekRatio()}</td>
              </tr>";
    }
    echo "</table>";
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Display Inventory</title>
    <style>
        body { font-family: Arial; margin: 20px; }
        table { border-collapse: collapse; width: 100%; margin-bottom: 20px; }
        th, td { padding: 8px; }
        th { background: #eee; }
        input, select { width: 100%; margin-bottom: 10px; padding: 5px; }
        input[type="submit"] { width: auto; padding: 8px 16px; }
    </style>
</head>
<body>

<h1>Display Inventory</h1>

<h2>Current Displays</h2>
<?php printDisplayTable($_SESSION['displays']); ?>

<h2>Add New Display</h2>
<form method="POST">
    <input type="number" name="id" placeholder="ID" required>
    <input type="text" name="nama" placeholder="Nama" required>
    <input type="number" name="harga" placeholder="Harga" required>
    <input type="number" name="stok" placeholder="Stok" required>
    <input type="text" name="noPart" placeholder="No Part" required>
    <input type="text" name="manufaktur" placeholder="Manufaktur" required>
    <input type="text" name="kondisi" placeholder="Kondisi" required>
    <input type="text" name="resolusi" placeholder="Resolusi" required>
    <input type="number" name="ukuran" placeholder="Ukuran" required>
    <input type="text" name="tipePanel" placeholder="Tipe Panel" required>
    <input type="text" name="aspekRatio" placeholder="Aspek Ratio" required>
    <input type="submit" value="Add Display">
</form>

</body>
</html>
