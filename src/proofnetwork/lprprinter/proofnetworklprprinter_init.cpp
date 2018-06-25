#include "lprprinterapi.h"
#include "proofnetworklprprinter_global.h"

#include "proofcore/proofglobal.h"

Q_LOGGING_CATEGORY(proofNetworkLprPrinterLog, "proof.network.lpr-printer")

PROOF_LIBRARY_INITIALIZER(libraryInit)
{
    // clang-format off
    qRegisterMetaType<Proof::NetworkServices::LprPrinterStatus>("Proof::NetworkServices::LprPrinterStatus");
    qRegisterMetaType<Proof::NetworkServices::LprPrinterInfo>("Proof::NetworkServices::LprPrinterInfo");
    qRegisterMetaType<QVector<Proof::NetworkServices::LprPrinterInfo>>("QVector<Proof::NetworkServices::LprPrinterInfo>");
    // clang-format on
}
