package org.camachoyury.core.shared

import org.camachoyury.core.domain.model.KLocation

actual class GetLocation {

    actual fun getCurrentLocation(): KLocation {
        return KLocation(-17.3931179,-66.1746485)

    }


}